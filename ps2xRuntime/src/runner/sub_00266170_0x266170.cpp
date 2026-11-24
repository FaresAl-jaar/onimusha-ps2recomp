#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00266170
// Address: 0x266170 - 0x266304
void sub_00266170_0x266170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266170_0x266170");
#endif

    switch (ctx->pc) {
        case 0x266198u: goto label_266198;
        case 0x2661a8u: goto label_2661a8;
        default: break;
    }

    ctx->pc = 0x266170u;

    // 0x266170: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x266170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x266174: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x266174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x266178: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x266178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26617c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26617cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x266180: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x266180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266184: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x266184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x266188: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x266188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26618c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26618cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266190: 0xc0997dc  jal         func_265F70
    ctx->pc = 0x266190u;
    SET_GPR_U32(ctx, 31, 0x266198u);
    ctx->pc = 0x266194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266190u;
    // 0x266194: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265F70u, 0x266190u, 0x266198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266198u;
label_266198:
    // 0x266198: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26619c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26619cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2661a0: 0xc0998e4  jal         func_266390
    ctx->pc = 0x2661A0u;
    SET_GPR_U32(ctx, 31, 0x2661A8u);
    ctx->pc = 0x2661A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2661A0u;
    // 0x2661a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266390u, 0x2661A0u, 0x2661A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2661A8u;
label_2661a8:
    // 0x2661a8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2661a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2661ac: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2661acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2661b0: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2661b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2661b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2661b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2661b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2661b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2661bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2661bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2661c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2661C0u;
    {
        const bool branch_taken_0x2661c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2661c0) {
            ctx->pc = 0x2661D8u;
            goto label_2661d8;
        }
    }
    ctx->pc = 0x2661C8u;
    // 0x2661c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2661c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2661cc: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x2661ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2661d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2661D0u;
    {
        const bool branch_taken_0x2661d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2661D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2661D0u;
        // 0x2661d4: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2661d0) {
            ctx->pc = 0x2661E0u;
            goto label_2661e0;
        }
    }
    ctx->pc = 0x2661D8u;
label_2661d8:
    // 0x2661d8: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2661d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2661dc: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x2661dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_2661e0:
    // 0x2661e0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2661e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2661e4: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2661e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2661e8: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2661e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2661ec: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2661ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2661f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2661f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2661f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2661f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2661f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2661f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2661fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2661FCu;
    {
        const bool branch_taken_0x2661fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2661fc) {
            ctx->pc = 0x266218u;
            goto label_266218;
        }
    }
    ctx->pc = 0x266204u;
    // 0x266204: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x266204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x266208: 0x260600a4  addiu       $a2, $s0, 0xA4
    ctx->pc = 0x266208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    // 0x26620c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26620Cu;
    {
        const bool branch_taken_0x26620c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26620Cu;
        // 0x266210: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26620c) {
            ctx->pc = 0x266220u;
            goto label_266220;
        }
    }
    ctx->pc = 0x266214u;
    // 0x266214: 0x0  nop
    ctx->pc = 0x266214u;
    // NOP
label_266218:
    // 0x266218: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x266218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x26621c: 0x260600a4  addiu       $a2, $s0, 0xA4
    ctx->pc = 0x26621cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
label_266220:
    // 0x266220: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x266220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x266224: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x266224u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x266228: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x266228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x26622c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x26622Cu;
    {
        const bool branch_taken_0x26622c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x266230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26622Cu;
        // 0x266230: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26622c) {
            ctx->pc = 0x2662C0u;
            goto label_2662c0;
        }
    }
    ctx->pc = 0x266234u;
    // 0x266234: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x266234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x266238: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x266238u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x26623c: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x26623cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x266240: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x266240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x266244: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x266244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x266248: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x266248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26624c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x26624Cu;
    {
        const bool branch_taken_0x26624c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26624c) {
            ctx->pc = 0x2662C0u;
            goto label_2662c0;
        }
    }
    ctx->pc = 0x266254u;
    // 0x266254: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x266254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x266258: 0x16230019  bne         $s1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x266258u;
    {
        const bool branch_taken_0x266258 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x266258) {
            ctx->pc = 0x2662C0u;
            goto label_2662c0;
        }
    }
    ctx->pc = 0x266260u;
    // 0x266260: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x266260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x266264: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x266264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x266268: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x266268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26626c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26626Cu;
    {
        const bool branch_taken_0x26626c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26626c) {
            ctx->pc = 0x266280u;
            goto label_266280;
        }
    }
    ctx->pc = 0x266274u;
    // 0x266274: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x266274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x266278: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x266278u;
    {
        const bool branch_taken_0x266278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266278u;
        // 0x26627c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266278) {
            ctx->pc = 0x266288u;
            goto label_266288;
        }
    }
    ctx->pc = 0x266280u;
label_266280:
    // 0x266280: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x266280u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x266284: 0x0  nop
    ctx->pc = 0x266284u;
    // NOP
label_266288:
    // 0x266288: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x266288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x26628c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x26628cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x266290: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x266290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x266294: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x266294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x266298: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x266298u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26629c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26629cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2662a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2662a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2662a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2662A4u;
    {
        const bool branch_taken_0x2662a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2662a4) {
            ctx->pc = 0x2662B8u;
            goto label_2662b8;
        }
    }
    ctx->pc = 0x2662ACu;
    // 0x2662ac: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2662acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2662b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2662B0u;
    {
        const bool branch_taken_0x2662b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2662B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662B0u;
        // 0x2662b4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662b0) {
            ctx->pc = 0x2662C0u;
            goto label_2662c0;
        }
    }
    ctx->pc = 0x2662B8u;
label_2662b8:
    // 0x2662b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2662b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2662bc: 0x0  nop
    ctx->pc = 0x2662bcu;
    // NOP
label_2662c0:
    // 0x2662c0: 0xae120044  sw          $s2, 0x44($s0)
    ctx->pc = 0x2662c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
    // 0x2662c4: 0xae110094  sw          $s1, 0x94($s0)
    ctx->pc = 0x2662c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 17));
    // 0x2662c8: 0xae110090  sw          $s1, 0x90($s0)
    ctx->pc = 0x2662c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
    // 0x2662cc: 0xa200004a  sb          $zero, 0x4A($s0)
    ctx->pc = 0x2662ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 0));
    // 0x2662d0: 0xa200004b  sb          $zero, 0x4B($s0)
    ctx->pc = 0x2662d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 0));
    // 0x2662d4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2662d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2662d8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2662d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2662dc: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2662dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2662e0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2662e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2662e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2662e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2662e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2662e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2662ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2662ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2662f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2662f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2662f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2662f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2662f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2662f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2662fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2662FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662FCu;
        // 0x266300: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2662FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266304u;
}

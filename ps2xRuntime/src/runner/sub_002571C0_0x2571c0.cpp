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

// Function: sub_002571C0
// Address: 0x2571c0 - 0x25746c
void sub_002571C0_0x2571c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002571C0_0x2571c0");
#endif

    switch (ctx->pc) {
        case 0x2571f8u: goto label_2571f8;
        case 0x257280u: goto label_257280;
        case 0x2572bcu: goto label_2572bc;
        case 0x257320u: goto label_257320;
        case 0x2573a8u: goto label_2573a8;
        case 0x257438u: goto label_257438;
        default: break;
    }

    ctx->pc = 0x2571c0u;

    // 0x2571c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2571c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2571c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2571c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2571c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2571c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2571cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2571ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2571d0: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x2571d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2571d4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2571d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2571d8: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2571d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2571dc: 0x90660001  lbu         $a2, 0x1($v1)
    ctx->pc = 0x2571dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2571e0: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x2571e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x2571e4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2571E4u;
    {
        const bool branch_taken_0x2571e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2571E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571E4u;
        // 0x2571e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2571e4) {
            ctx->pc = 0x257200u;
            goto label_257200;
        }
    }
    ctx->pc = 0x2571ECu;
    // 0x2571ec: 0x34a30004  ori         $v1, $a1, 0x4
    ctx->pc = 0x2571ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x2571f0: 0xc0954d4  jal         func_255350
    ctx->pc = 0x2571F0u;
    SET_GPR_U32(ctx, 31, 0x2571F8u);
    ctx->pc = 0x2571F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2571F0u;
    // 0x2571f4: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255350u, 0x2571F0u, 0x2571F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2571F8u;
label_2571f8:
    // 0x2571f8: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x2571F8u;
    {
        const bool branch_taken_0x2571f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2571FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571F8u;
        // 0x2571fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2571f8) {
            ctx->pc = 0x257458u;
            goto label_257458;
        }
    }
    ctx->pc = 0x257200u;
label_257200:
    // 0x257200: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x257200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x257204: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x257204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257208: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x257208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25720c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25720Cu;
    {
        const bool branch_taken_0x25720c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25720Cu;
        // 0x257210: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25720c) {
            ctx->pc = 0x257218u;
            goto label_257218;
        }
    }
    ctx->pc = 0x257214u;
    // 0x257214: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x257214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_257218:
    // 0x257218: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x257218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25721c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x25721cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x257220: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x257220u;
    {
        const bool branch_taken_0x257220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257220) {
            ctx->pc = 0x2572C8u;
            goto label_2572c8;
        }
    }
    ctx->pc = 0x257228u;
    // 0x257228: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x257228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x25722c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x25722cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x257230: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x257230u;
    {
        const bool branch_taken_0x257230 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x257234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257230u;
        // 0x257234: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257230) {
            ctx->pc = 0x257288u;
            goto label_257288;
        }
    }
    ctx->pc = 0x257238u;
    // 0x257238: 0x8043003d  lb          $v1, 0x3D($v0)
    ctx->pc = 0x257238u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 61)));
    // 0x25723c: 0x8042008a  lb          $v0, 0x8A($v0)
    ctx->pc = 0x25723cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 138)));
    // 0x257240: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x257240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x257244: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x257244u;
    {
        const bool branch_taken_0x257244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x257244) {
            ctx->pc = 0x257288u;
            goto label_257288;
        }
    }
    ctx->pc = 0x25724Cu;
    // 0x25724c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25724cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257250: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x257250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x257254: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x257254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x257258: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x257258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x25725c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x25725cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x257260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x257260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257264: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x257264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x257268: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x257268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25726c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25726cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257270: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x257270u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257274: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x257274u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257278: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x257278u;
    SET_GPR_U32(ctx, 31, 0x257280u);
    ctx->pc = 0x25727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257278u;
    // 0x25727c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x257278u, 0x257280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257280u;
label_257280:
    // 0x257280: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x257280u;
    {
        const bool branch_taken_0x257280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257280) {
            ctx->pc = 0x2573A8u;
            goto label_2573a8;
        }
    }
    ctx->pc = 0x257288u;
label_257288:
    // 0x257288: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x257288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25728c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x25728cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x257290: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x257290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x257294: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x257294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x257298: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x257298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x25729c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25729cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2572a0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x2572a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x2572a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2572a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2572a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2572a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2572ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2572acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2572b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2572b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2572b4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2572B4u;
    SET_GPR_U32(ctx, 31, 0x2572BCu);
    ctx->pc = 0x2572B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2572B4u;
    // 0x2572b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2572B4u, 0x2572BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2572BCu;
label_2572bc:
    // 0x2572bc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2572BCu;
    {
        const bool branch_taken_0x2572bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2572bc) {
            ctx->pc = 0x2573A8u;
            goto label_2573a8;
        }
    }
    ctx->pc = 0x2572C4u;
    // 0x2572c4: 0x0  nop
    ctx->pc = 0x2572c4u;
    // NOP
label_2572c8:
    // 0x2572c8: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x2572c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2572cc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2572ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2572d0: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2572D0u;
    {
        const bool branch_taken_0x2572d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2572D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2572D0u;
        // 0x2572d4: 0x30a34000  andi        $v1, $a1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2572d0) {
            ctx->pc = 0x257328u;
            goto label_257328;
        }
    }
    ctx->pc = 0x2572D8u;
    // 0x2572d8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2572D8u;
    {
        const bool branch_taken_0x2572d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2572d8) {
            ctx->pc = 0x257328u;
            goto label_257328;
        }
    }
    ctx->pc = 0x2572E0u;
    // 0x2572e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2572e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2572e4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2572e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2572e8: 0xa043003d  sb          $v1, 0x3D($v0)
    ctx->pc = 0x2572e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 61), (uint8_t)GPR_U32(ctx, 3));
    // 0x2572ec: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2572ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2572f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2572f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2572f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2572f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2572f8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2572f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2572fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2572fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257300: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x257300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x257304: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x257304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257308: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x257308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x25730c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25730cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257310: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x257310u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257314: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x257314u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257318: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x257318u;
    SET_GPR_U32(ctx, 31, 0x257320u);
    ctx->pc = 0x25731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257318u;
    // 0x25731c: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x257318u, 0x257320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257320u;
label_257320:
    // 0x257320: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x257320u;
    {
        const bool branch_taken_0x257320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257320) {
            ctx->pc = 0x2573A8u;
            goto label_2573a8;
        }
    }
    ctx->pc = 0x257328u;
label_257328:
    // 0x257328: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x257328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x25732c: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x25732cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x257330: 0x346300a0  ori         $v1, $v1, 0xA0
    ctx->pc = 0x257330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x257334: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x257334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x257338: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x257338u;
    {
        const bool branch_taken_0x257338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257338u;
        // 0x25733c: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257338) {
            ctx->pc = 0x2573A8u;
            goto label_2573a8;
        }
    }
    ctx->pc = 0x257340u;
    // 0x257340: 0x804c003d  lb          $t4, 0x3D($v0)
    ctx->pc = 0x257340u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 61)));
    // 0x257344: 0x34650080  ori         $a1, $v1, 0x80
    ctx->pc = 0x257344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x257348: 0x804d008a  lb          $t5, 0x8A($v0)
    ctx->pc = 0x257348u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 138)));
    // 0x25734c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x25734cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x257350: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x257350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x257354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x257354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x257358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25735c: 0x65200a  movz        $a0, $v1, $a1
    ctx->pc = 0x25735cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x257360: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x257360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257364: 0x4763c  dsll32      $t6, $a0, 24
    ctx->pc = 0x257364u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 24));
    // 0x257368: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x257368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25736c: 0xe763f  dsra32      $t6, $t6, 24
    ctx->pc = 0x25736cu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 24));
    // 0x257370: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x257370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x257374: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x257374u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x257378: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x257378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x25737c: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x25737cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x257380: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x257380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x257384: 0x18d001a  div         $zero, $t4, $t5
    ctx->pc = 0x257384u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x257388: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x257388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25738c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25738cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257390: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x257390u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257394: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x257394u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257398: 0x6010  mfhi        $t4
    ctx->pc = 0x257398u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x25739c: 0xa04c003d  sb          $t4, 0x3D($v0)
    ctx->pc = 0x25739cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 61), (uint8_t)GPR_U32(ctx, 12));
    // 0x2573a0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2573A0u;
    SET_GPR_U32(ctx, 31, 0x2573A8u);
    ctx->pc = 0x2573A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2573A0u;
    // 0x2573a4: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2573A0u, 0x2573A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2573A8u;
label_2573a8:
    // 0x2573a8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2573a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2573ac: 0x8083003d  lb          $v1, 0x3D($a0)
    ctx->pc = 0x2573acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
    // 0x2573b0: 0x460001f  bltz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2573B0u;
    {
        const bool branch_taken_0x2573b0 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2573b0) {
            ctx->pc = 0x257430u;
            goto label_257430;
        }
    }
    ctx->pc = 0x2573B8u;
    // 0x2573b8: 0x8082008a  lb          $v0, 0x8A($a0)
    ctx->pc = 0x2573b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 138)));
    // 0x2573bc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2573bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2573c0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x2573C0u;
    {
        const bool branch_taken_0x2573c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2573C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2573C0u;
        // 0x2573c4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2573c0) {
            ctx->pc = 0x257430u;
            goto label_257430;
        }
    }
    ctx->pc = 0x2573C8u;
    // 0x2573c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2573c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2573cc: 0x8442004a  lh          $v0, 0x4A($v0)
    ctx->pc = 0x2573ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 74)));
    // 0x2573d0: 0xa4820044  sh          $v0, 0x44($a0)
    ctx->pc = 0x2573d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x2573d4: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2573d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2573d8: 0x8062003d  lb          $v0, 0x3D($v1)
    ctx->pc = 0x2573d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 61)));
    // 0x2573dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2573dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2573e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2573e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2573e4: 0x8442004c  lh          $v0, 0x4C($v0)
    ctx->pc = 0x2573e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2573e8: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x2573e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x2573ec: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2573ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2573f0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2573f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2573f4: 0x84820044  lh          $v0, 0x44($a0)
    ctx->pc = 0x2573f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x2573f8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2573f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2573fc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2573fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x257400: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x257400u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x257404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257408: 0xa4820044  sh          $v0, 0x44($a0)
    ctx->pc = 0x257408u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x25740c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x25740cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x257410: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x257410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x257414: 0x84820046  lh          $v0, 0x46($a0)
    ctx->pc = 0x257414u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x257418: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x257418u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x25741c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x25741cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x257420: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x257420u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x257424: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257428: 0xa4820046  sh          $v0, 0x46($a0)
    ctx->pc = 0x257428u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x25742c: 0x0  nop
    ctx->pc = 0x25742cu;
    // NOP
label_257430:
    // 0x257430: 0xc095550  jal         func_255540
    ctx->pc = 0x257430u;
    SET_GPR_U32(ctx, 31, 0x257438u);
    ctx->pc = 0x257434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257430u;
    // 0x257434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255540u, 0x257430u, 0x257438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257438u;
label_257438:
    // 0x257438: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257438u;
    {
        const bool branch_taken_0x257438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x257438) {
            ctx->pc = 0x257450u;
            goto label_257450;
        }
    }
    ctx->pc = 0x257440u;
    // 0x257440: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x257440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x257444: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x257444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x257448: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x257448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x25744c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x25744cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_257450:
    // 0x257450: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x257450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257454: 0x0  nop
    ctx->pc = 0x257454u;
    // NOP
label_257458:
    // 0x257458: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x257458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25745c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25745cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257460: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x257460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257464: 0x3e00008  jr          $ra
    ctx->pc = 0x257464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257464u;
        // 0x257468: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25746Cu;
}

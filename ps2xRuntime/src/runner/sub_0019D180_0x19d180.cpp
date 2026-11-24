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

// Function: sub_0019D180
// Address: 0x19d180 - 0x19d3b0
void sub_0019D180_0x19d180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D180_0x19d180");
#endif

    switch (ctx->pc) {
        case 0x19d1b4u: goto label_19d1b4;
        case 0x19d208u: goto label_19d208;
        case 0x19d21cu: goto label_19d21c;
        case 0x19d228u: goto label_19d228;
        case 0x19d234u: goto label_19d234;
        case 0x19d2c0u: goto label_19d2c0;
        case 0x19d2e8u: goto label_19d2e8;
        case 0x19d310u: goto label_19d310;
        case 0x19d31cu: goto label_19d31c;
        case 0x19d32cu: goto label_19d32c;
        case 0x19d35cu: goto label_19d35c;
        default: break;
    }

    ctx->pc = 0x19d180u;

    // 0x19d180: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19d180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19d184: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x19d184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19d188: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x19d188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19d18c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19d18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19d190: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19d190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19d194: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19d194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19d198: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x19d198u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d19c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19d19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19d1a0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x19d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19d1a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19d1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19d1a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d1ac: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19D1ACu;
    {
        const bool branch_taken_0x19d1ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1ACu;
        // 0x19d1b0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d1ac) {
            ctx->pc = 0x19D1D0u;
            goto label_19d1d0;
        }
    }
    ctx->pc = 0x19D1B4u;
label_19d1b4:
    // 0x19d1b4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x19d1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19d1b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19d1bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19d1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19d1c0: 0x0  nop
    ctx->pc = 0x19d1c0u;
    // NOP
    // 0x19d1c4: 0x0  nop
    ctx->pc = 0x19d1c4u;
    // NOP
    // 0x19d1c8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19D1C8u;
    {
        const bool branch_taken_0x19d1c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d1c8) {
            ctx->pc = 0x19D1B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d1b4;
        }
    }
    ctx->pc = 0x19D1D0u;
label_19d1d0:
    // 0x19d1d0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x19d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x19d1d4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x19d1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x19d1d8: 0x2463e6e0  addiu       $v1, $v1, -0x1920
    ctx->pc = 0x19d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960864));
    // 0x19d1dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x19d1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x19d1e0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x19d1e0u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x40E6E0u));
    // 0x19d1e4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x19d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x19d1e8: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x19d1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x19d1ec: 0x2463e6f0  addiu       $v1, $v1, -0x1910
    ctx->pc = 0x19d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960880));
    // 0x19d1f0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x19d1f0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x40E6F0u));
    // 0x19d1f4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x19d1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x19d1f8: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x19d1f8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x19d1fc: 0x8eb30018  lw          $s3, 0x18($s5)
    ctx->pc = 0x19d1fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x19d200: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x19D200u;
    {
        const bool branch_taken_0x19d200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D200u;
        // 0x19d204: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d200) {
            ctx->pc = 0x19D378u;
            goto label_19d378;
        }
    }
    ctx->pc = 0x19D208u;
label_19d208:
    // 0x19d208: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x19d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x19d20c: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x19d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x19d210: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19d210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d214: 0xc067360  jal         func_19CD80
    ctx->pc = 0x19D214u;
    SET_GPR_U32(ctx, 31, 0x19D21Cu);
    ctx->pc = 0x19D218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D214u;
    // 0x19d218: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CD80u, 0x19D214u, 0x19D21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D21Cu;
label_19d21c:
    // 0x19d21c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x19d21cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d220: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19D220u;
    {
        const bool branch_taken_0x19d220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D220u;
        // 0x19d224: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d220) {
            ctx->pc = 0x19D278u;
            goto label_19d278;
        }
    }
    ctx->pc = 0x19D228u;
label_19d228:
    // 0x19d228: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19d228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d22c: 0xc06736c  jal         func_19CDB0
    ctx->pc = 0x19D22Cu;
    SET_GPR_U32(ctx, 31, 0x19D234u);
    ctx->pc = 0x19D230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D22Cu;
    // 0x19d230: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x19D22Cu, 0x19D234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D234u;
label_19d234:
    // 0x19d234: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x19d234u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x19d238: 0x8e840094  lw          $a0, 0x94($s4)
    ctx->pc = 0x19d238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x19d23c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19d240: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x19d240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x19d244: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x19d244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19d248: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x19d248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d24c: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x19d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x19d250: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x19d250u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d254: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x19d254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x19d258: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19d258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d25c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19d25cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19d260: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x19d260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19d264: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x19d264u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x19d268: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x19d268u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d26c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x19d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19d270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d274: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x19d274u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_19d278:
    // 0x19d278: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x19d278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x19d27c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x19D27Cu;
    {
        const bool branch_taken_0x19d27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d27c) {
            ctx->pc = 0x19D228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d228;
        }
    }
    ctx->pc = 0x19D284u;
    // 0x19d284: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x19d284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x19d288: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x19d288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19d28c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D28Cu;
    {
        const bool branch_taken_0x19d28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D28Cu;
        // 0x19d290: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d28c) {
            ctx->pc = 0x19D2A0u;
            goto label_19d2a0;
        }
    }
    ctx->pc = 0x19D294u;
    // 0x19d294: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19D294u;
    {
        const bool branch_taken_0x19d294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d294) {
            ctx->pc = 0x19D2C8u;
            goto label_19d2c8;
        }
    }
    ctx->pc = 0x19D29Cu;
    // 0x19d29c: 0x0  nop
    ctx->pc = 0x19d29cu;
    // NOP
label_19d2a0:
    // 0x19d2a0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x19d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19d2a4: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x19d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x19d2a8: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x19d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x19d2ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19d2b0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x19d2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x19d2b4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19d2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d2b8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x19D2B8u;
    SET_GPR_U32(ctx, 31, 0x19D2C0u);
    ctx->pc = 0x19D2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D2B8u;
    // 0x19d2bc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19D2B8u, 0x19D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D2C0u;
label_19d2c0:
    // 0x19d2c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19D2C0u;
    {
        const bool branch_taken_0x19d2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d2c0) {
            ctx->pc = 0x19D2E8u;
            goto label_19d2e8;
        }
    }
    ctx->pc = 0x19D2C8u;
label_19d2c8:
    // 0x19d2c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x19d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19d2cc: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x19d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x19d2d0: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x19d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x19d2d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19d2d8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x19d2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x19d2dc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19d2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d2e0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x19D2E0u;
    SET_GPR_U32(ctx, 31, 0x19D2E8u);
    ctx->pc = 0x19D2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D2E0u;
    // 0x19d2e4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19D2E0u, 0x19D2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D2E8u;
label_19d2e8:
    // 0x19d2e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19d2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d2ec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x19d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19d2f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x19d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19d2f4: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x19d2f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19d2f8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x19d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x19d2fc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x19d2fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d304: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x19D304u;
    {
        const bool branch_taken_0x19d304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D304u;
        // 0x19d308: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d304) {
            ctx->pc = 0x19D340u;
            goto label_19d340;
        }
    }
    ctx->pc = 0x19D30Cu;
    // 0x19d30c: 0x0  nop
    ctx->pc = 0x19d30cu;
    // NOP
label_19d310:
    // 0x19d310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19d310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d314: 0xc06736c  jal         func_19CDB0
    ctx->pc = 0x19D314u;
    SET_GPR_U32(ctx, 31, 0x19D31Cu);
    ctx->pc = 0x19D318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D314u;
    // 0x19d318: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x19D314u, 0x19D31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D31Cu;
label_19d31c:
    // 0x19d31c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x19d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19d320: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x19d320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x19d324: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x19D324u;
    SET_GPR_U32(ctx, 31, 0x19D32Cu);
    ctx->pc = 0x19D328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D324u;
    // 0x19d328: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19D324u, 0x19D32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D32Cu;
label_19d32c:
    // 0x19d32c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x19d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19d330: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x19d330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19d334: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19d334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19d338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d33c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19d33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_19d340:
    // 0x19d340: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19d340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19d344: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19d344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19d348: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x19d348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19d34c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x19D34Cu;
    {
        const bool branch_taken_0x19d34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D34Cu;
        // 0x19d350: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d34c) {
            ctx->pc = 0x19D310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d310;
        }
    }
    ctx->pc = 0x19D354u;
    // 0x19d354: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x19D354u;
    SET_GPR_U32(ctx, 31, 0x19D35Cu);
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x19D354u, 0x19D35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D35Cu;
label_19d35c:
    // 0x19d35c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x19d35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19d360: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x19d360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19d364: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19d364u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19d368: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x19d368u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x19d36c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d370: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19d370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x19d374: 0x0  nop
    ctx->pc = 0x19d374u;
    // NOP
label_19d378:
    // 0x19d378: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x19d378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x19d37c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x19d37cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19d380: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
    ctx->pc = 0x19D380u;
    {
        const bool branch_taken_0x19d380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d380) {
            ctx->pc = 0x19D208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d208;
        }
    }
    ctx->pc = 0x19D388u;
    // 0x19d388: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x19d388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19d38c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19d38cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19d390: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19d390u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d394: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19d394u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d398: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19d398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d39c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19d39cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d3a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d3a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d3a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x19D3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D3A8u;
        // 0x19d3ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D3B0u;
}

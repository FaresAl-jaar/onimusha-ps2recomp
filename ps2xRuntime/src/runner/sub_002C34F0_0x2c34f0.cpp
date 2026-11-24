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

// Function: sub_002C34F0
// Address: 0x2c34f0 - 0x2c35e8
void sub_002C34F0_0x2c34f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C34F0_0x2c34f0");
#endif

    switch (ctx->pc) {
        case 0x2c3518u: goto label_2c3518;
        case 0x2c3528u: goto label_2c3528;
        case 0x2c35b4u: goto label_2c35b4;
        default: break;
    }

    ctx->pc = 0x2c34f0u;

    // 0x2c34f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c34f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c34f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c34f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c34f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c34f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c34fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c34fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c3500: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c3500u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3504: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c3504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c3508: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c3508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c350c: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x2c350cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2c3510: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2C3510u;
    SET_GPR_U32(ctx, 31, 0x2C3518u);
    ctx->pc = 0x2C3514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3510u;
    // 0x2c3514: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2C3510u, 0x2C3518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3518u;
label_2c3518:
    // 0x2c3518: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3518u;
    {
        const bool branch_taken_0x2c3518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3518u;
        // 0x2c351c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3518) {
            ctx->pc = 0x2C3530u;
            goto label_2c3530;
        }
    }
    ctx->pc = 0x2C3520u;
    // 0x2c3520: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C3520u;
    SET_GPR_U32(ctx, 31, 0x2C3528u);
    ctx->pc = 0x2C3524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3520u;
    // 0x2c3524: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C3520u, 0x2C3528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3528u;
label_2c3528:
    // 0x2c3528: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2C3528u;
    {
        const bool branch_taken_0x2c3528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3528u;
        // 0x2c352c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3528) {
            ctx->pc = 0x2C35D0u;
            goto label_2c35d0;
        }
    }
    ctx->pc = 0x2C3530u;
label_2c3530:
    // 0x2c3530: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x2c3530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x2c3534: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x2c3534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2c3538: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c3538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c353c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C353Cu;
    {
        const bool branch_taken_0x2c353c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C353Cu;
        // 0x2c3540: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c353c) {
            ctx->pc = 0x2C3550u;
            goto label_2c3550;
        }
    }
    ctx->pc = 0x2C3544u;
    // 0x2c3544: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2c3544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c3548: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c3548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c354c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c354cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c3550:
    // 0x2c3550: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3550u;
    {
        const bool branch_taken_0x2c3550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3550u;
        // 0x2c3554: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3550) {
            ctx->pc = 0x2C3560u;
            goto label_2c3560;
        }
    }
    ctx->pc = 0x2C3558u;
    // 0x2c3558: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2C3558u;
    {
        const bool branch_taken_0x2c3558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3558) {
            ctx->pc = 0x2C35D0u;
            goto label_2c35d0;
        }
    }
    ctx->pc = 0x2C3560u;
label_2c3560:
    // 0x2c3560: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c3560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c3564: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C3564u;
    {
        const bool branch_taken_0x2c3564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3564u;
        // 0x2c3568: 0x92050001  lbu         $a1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3564) {
            ctx->pc = 0x2C35C0u;
            goto label_2c35c0;
        }
    }
    ctx->pc = 0x2C356Cu;
    // 0x2c356c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C356Cu;
    {
        const bool branch_taken_0x2c356c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C356Cu;
        // 0x2c3570: 0xa240004f  sb          $zero, 0x4F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c356c) {
            ctx->pc = 0x2C35A8u;
            goto label_2c35a8;
        }
    }
    ctx->pc = 0x2C3574u;
    // 0x2c3574: 0x92440037  lbu         $a0, 0x37($s2)
    ctx->pc = 0x2c3574u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
    // 0x2c3578: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c3578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c357c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c357cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c3580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c3580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c3584: 0xa244004e  sb          $a0, 0x4E($s2)
    ctx->pc = 0x2c3584u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3588: 0xa2450037  sb          $a1, 0x37($s2)
    ctx->pc = 0x2c3588u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c358c: 0xa2400032  sb          $zero, 0x32($s2)
    ctx->pc = 0x2c358cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3590: 0xa243005f  sb          $v1, 0x5F($s2)
    ctx->pc = 0x2c3590u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3594: 0xa6400080  sh          $zero, 0x80($s2)
    ctx->pc = 0x2c3594u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c3598: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c3598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c359c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c35a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C35A0u;
    {
        const bool branch_taken_0x2c35a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C35A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C35A0u;
        // 0x2c35a4: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c35a0) {
            ctx->pc = 0x2C35D0u;
            goto label_2c35d0;
        }
    }
    ctx->pc = 0x2C35A8u;
label_2c35a8:
    // 0x2c35a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c35a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c35ac: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C35ACu;
    SET_GPR_U32(ctx, 31, 0x2C35B4u);
    ctx->pc = 0x2C35B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C35ACu;
    // 0x2c35b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C35ACu, 0x2C35B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35B4u;
label_2c35b4:
    // 0x2c35b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C35B4u;
    {
        const bool branch_taken_0x2c35b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c35b4) {
            ctx->pc = 0x2C35C8u;
            goto label_2c35c8;
        }
    }
    ctx->pc = 0x2C35BCu;
    // 0x2c35bc: 0x0  nop
    ctx->pc = 0x2c35bcu;
    // NOP
label_2c35c0:
    // 0x2c35c0: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c35c0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c35c4: 0x0  nop
    ctx->pc = 0x2c35c4u;
    // NOP
label_2c35c8:
    // 0x2c35c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c35c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c35cc: 0x0  nop
    ctx->pc = 0x2c35ccu;
    // NOP
label_2c35d0:
    // 0x2c35d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c35d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c35d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c35d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c35d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c35d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c35dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c35dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c35e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C35E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C35E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C35E0u;
        // 0x2c35e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C35E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C35E8u;
}

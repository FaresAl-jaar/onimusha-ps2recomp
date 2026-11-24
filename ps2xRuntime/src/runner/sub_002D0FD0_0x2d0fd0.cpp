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

// Function: sub_002D0FD0
// Address: 0x2d0fd0 - 0x2d10c8
void sub_002D0FD0_0x2d0fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0FD0_0x2d0fd0");
#endif

    switch (ctx->pc) {
        case 0x2d1010u: goto label_2d1010;
        case 0x2d1080u: goto label_2d1080;
        default: break;
    }

    ctx->pc = 0x2d0fd0u;

    // 0x2d0fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d0fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d0fd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d0fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d0fd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d0fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d0fdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d0fe0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d0fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0fe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d0fe8: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2D0FE8u;
    {
        const bool branch_taken_0x2d0fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0FE8u;
        // 0x2d0fec: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0fe8) {
            ctx->pc = 0x2D10A8u;
            goto label_2d10a8;
        }
    }
    ctx->pc = 0x2D0FF0u;
    // 0x2d0ff0: 0xdc820500  ld          $v0, 0x500($a0)
    ctx->pc = 0x2d0ff0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1280)));
    // 0x2d0ff4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2d0ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2d0ff8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D0FF8u;
    {
        const bool branch_taken_0x2d0ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0ff8) {
            ctx->pc = 0x2D10A8u;
            goto label_2d10a8;
        }
    }
    ctx->pc = 0x2D1000u;
    // 0x2d1000: 0x8c8507c4  lw          $a1, 0x7C4($a0)
    ctx->pc = 0x2d1000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1988)));
    // 0x2d1004: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d1004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d1008: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2D1008u;
    SET_GPR_U32(ctx, 31, 0x2D1010u);
    ctx->pc = 0x2D100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1008u;
    // 0x2d100c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2D1008u, 0x2D1010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1010u;
label_2d1010:
    // 0x2d1010: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1014: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D1014u;
    {
        const bool branch_taken_0x2d1014 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1014) {
            ctx->pc = 0x2D10A8u;
            goto label_2d10a8;
        }
    }
    ctx->pc = 0x2D101Cu;
    // 0x2d101c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2d101cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d1020: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2d1020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2d1024: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2d1024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d1028: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1028u;
    {
        const bool branch_taken_0x2d1028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1028u;
        // 0x2d102c: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1028) {
            ctx->pc = 0x2D1048u;
            goto label_2d1048;
        }
    }
    ctx->pc = 0x2D1030u;
    // 0x2d1030: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x2d1030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x2d1034: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2d1034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d1038: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1038u;
    {
        const bool branch_taken_0x2d1038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1038) {
            ctx->pc = 0x2D1048u;
            goto label_2d1048;
        }
    }
    ctx->pc = 0x2D1040u;
    // 0x2d1040: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d1040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1044: 0x0  nop
    ctx->pc = 0x2d1044u;
    // NOP
label_2d1048:
    // 0x2d1048: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D1048u;
    {
        const bool branch_taken_0x2d1048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1048) {
            ctx->pc = 0x2D1088u;
            goto label_2d1088;
        }
    }
    ctx->pc = 0x2D1050u;
    // 0x2d1050: 0x92020733  lbu         $v0, 0x733($s0)
    ctx->pc = 0x2d1050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1843)));
    // 0x2d1054: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d1054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1058: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x2d1058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2d105c: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x2d105cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d1060: 0x90a50730  lbu         $a1, 0x730($a1)
    ctx->pc = 0x2d1060u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1840)));
    // 0x2d1064: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2d1064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d1068: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x2d1068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2d106c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2d106cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d1070: 0x24460700  addiu       $a2, $v0, 0x700
    ctx->pc = 0x2d1070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x2d1074: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x2d1074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2d1078: 0xc041442  jal         func_105108
    ctx->pc = 0x2D1078u;
    SET_GPR_U32(ctx, 31, 0x2D1080u);
    ctx->pc = 0x2D107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1078u;
    // 0x2d107c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x2D1078u, 0x2D1080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1080u;
label_2d1080:
    // 0x2d1080: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1080u;
    {
        const bool branch_taken_0x2d1080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1080) {
            ctx->pc = 0x2D1098u;
            goto label_2d1098;
        }
    }
    ctx->pc = 0x2D1088u;
label_2d1088:
    // 0x2d1088: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x2d1088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2d108c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d108cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1090: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x2d1090u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x2d1094: 0x0  nop
    ctx->pc = 0x2d1094u;
    // NOP
label_2d1098:
    // 0x2d1098: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2d1098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2d109c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D109Cu;
    {
        const bool branch_taken_0x2d109c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D109Cu;
        // 0x2d10a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d109c) {
            ctx->pc = 0x2D10B0u;
            goto label_2d10b0;
        }
    }
    ctx->pc = 0x2D10A4u;
    // 0x2d10a4: 0x0  nop
    ctx->pc = 0x2d10a4u;
    // NOP
label_2d10a8:
    // 0x2d10a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d10a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d10ac: 0x0  nop
    ctx->pc = 0x2d10acu;
    // NOP
label_2d10b0:
    // 0x2d10b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d10b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d10b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d10b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d10b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d10b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d10bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d10bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d10c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D10C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D10C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10C0u;
        // 0x2d10c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D10C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D10C8u;
}

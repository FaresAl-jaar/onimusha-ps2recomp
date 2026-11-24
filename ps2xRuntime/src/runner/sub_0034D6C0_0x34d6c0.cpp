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

// Function: sub_0034D6C0
// Address: 0x34d6c0 - 0x34d750
void sub_0034D6C0_0x34d6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D6C0_0x34d6c0");
#endif

    switch (ctx->pc) {
        case 0x34d6ecu: goto label_34d6ec;
        case 0x34d704u: goto label_34d704;
        case 0x34d738u: goto label_34d738;
        default: break;
    }

    ctx->pc = 0x34d6c0u;

    // 0x34d6c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34d6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34d6c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34d6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34d6c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34d6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34d6cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34d6ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d6d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34d6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34d6d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34d6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d6d8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34d6d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d6dc: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x34d6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x34d6e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34d6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34d6e4: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34D6E4u;
    SET_GPR_U32(ctx, 31, 0x34D6ECu);
    ctx->pc = 0x34D6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D6E4u;
    // 0x34d6e8: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E180u, 0x34D6E4u, 0x34D6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D6ECu;
label_34d6ec:
    // 0x34d6ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34d6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d6f0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x34D6F0u;
    {
        const bool branch_taken_0x34d6f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D6F0u;
        // 0x34d6f4: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d6f0) {
            ctx->pc = 0x34D738u;
            goto label_34d738;
        }
    }
    ctx->pc = 0x34D6F8u;
    // 0x34d6f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34d6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d6fc: 0xc0d3838  jal         func_34E0E0
    ctx->pc = 0x34D6FCu;
    SET_GPR_U32(ctx, 31, 0x34D704u);
    ctx->pc = 0x34D700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D6FCu;
    // 0x34d700: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E0E0u, 0x34D6FCu, 0x34D704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D704u;
label_34d704:
    // 0x34d704: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34d704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d708: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x34D708u;
    {
        const bool branch_taken_0x34d708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d708) {
            ctx->pc = 0x34D738u;
            goto label_34d738;
        }
    }
    ctx->pc = 0x34D710u;
    // 0x34d710: 0x82060017  lb          $a2, 0x17($s0)
    ctx->pc = 0x34d710u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x34d714: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x34d714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34d718: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x34d718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x34d71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34d71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d720: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x34d720u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34d724: 0xacb2000c  sw          $s2, 0xC($a1)
    ctx->pc = 0x34d724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 18));
    // 0x34d728: 0xa0b10018  sb          $s1, 0x18($a1)
    ctx->pc = 0x34d728u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 17));
    // 0x34d72c: 0xa0a20013  sb          $v0, 0x13($a1)
    ctx->pc = 0x34d72cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x34d730: 0xc0d4420  jal         func_351080
    ctx->pc = 0x34D730u;
    SET_GPR_U32(ctx, 31, 0x34D738u);
    ctx->pc = 0x34D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D730u;
    // 0x34d734: 0xa0a60014  sb          $a2, 0x14($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 20), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351080u, 0x34D730u, 0x34D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D738u;
label_34d738:
    // 0x34d738: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34d738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34d73c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34d73cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d740: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34d740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d748: 0x3e00008  jr          $ra
    ctx->pc = 0x34D748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D748u;
        // 0x34d74c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D750u;
}

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

// Function: sub_002F6740
// Address: 0x2f6740 - 0x2f67e4
void sub_002F6740_0x2f6740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6740_0x2f6740");
#endif

    switch (ctx->pc) {
        case 0x2f6760u: goto label_2f6760;
        case 0x2f6778u: goto label_2f6778;
        case 0x2f67a0u: goto label_2f67a0;
        case 0x2f67b4u: goto label_2f67b4;
        default: break;
    }

    ctx->pc = 0x2f6740u;

    // 0x2f6740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f6744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f6748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f674c: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x2f674cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f6750: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6750u;
    {
        const bool branch_taken_0x2f6750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6750u;
        // 0x2f6754: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6750) {
            ctx->pc = 0x2F6770u;
            goto label_2f6770;
        }
    }
    ctx->pc = 0x2F6758u;
    // 0x2f6758: 0xc0d93b8  jal         func_364EE0
    ctx->pc = 0x2F6758u;
    SET_GPR_U32(ctx, 31, 0x2F6760u);
    ctx->pc = 0x364EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364EE0u, 0x2F6758u, 0x2F6760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6760u;
label_2f6760:
    // 0x2f6760: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x2f6760u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f6764: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f6764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f6768: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f6768u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f676c: 0x0  nop
    ctx->pc = 0x2f676cu;
    // NOP
label_2f6770:
    // 0x2f6770: 0xc0d93c8  jal         func_364F20
    ctx->pc = 0x2F6770u;
    SET_GPR_U32(ctx, 31, 0x2F6778u);
    ctx->pc = 0x364F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364F20u, 0x2F6770u, 0x2F6778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6778u;
label_2f6778:
    // 0x2f6778: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f6778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f677c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F677Cu;
    {
        const bool branch_taken_0x2f677c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F677Cu;
        // 0x2f6780: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f677c) {
            ctx->pc = 0x2F67A8u;
            goto label_2f67a8;
        }
    }
    ctx->pc = 0x2F6784u;
    // 0x2f6784: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6784u;
    {
        const bool branch_taken_0x2f6784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2f6784) {
            ctx->pc = 0x2F6798u;
            goto label_2f6798;
        }
    }
    ctx->pc = 0x2F678Cu;
    // 0x2f678c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F678Cu;
    {
        const bool branch_taken_0x2f678c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f678c) {
            ctx->pc = 0x2F67D0u;
            goto label_2f67d0;
        }
    }
    ctx->pc = 0x2F6794u;
    // 0x2f6794: 0x0  nop
    ctx->pc = 0x2f6794u;
    // NOP
label_2f6798:
    // 0x2f6798: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F6798u;
    SET_GPR_U32(ctx, 31, 0x2F67A0u);
    ctx->pc = 0x2F679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6798u;
    // 0x2f679c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F6798u, 0x2F67A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F67A0u;
label_2f67a0:
    // 0x2f67a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F67A0u;
    {
        const bool branch_taken_0x2f67a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f67a0) {
            ctx->pc = 0x2F67D0u;
            goto label_2f67d0;
        }
    }
    ctx->pc = 0x2F67A8u;
label_2f67a8:
    // 0x2f67a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f67a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f67ac: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F67ACu;
    SET_GPR_U32(ctx, 31, 0x2F67B4u);
    ctx->pc = 0x2F67B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F67ACu;
    // 0x2f67b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F67ACu, 0x2F67B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F67B4u;
label_2f67b4:
    // 0x2f67b4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f67b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f67b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f67b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f67bc: 0x8c2295a8  lw          $v0, -0x6A58($at)
    ctx->pc = 0x2f67bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8095A8u));
    // 0x2f67c0: 0xaf838b64  sw          $v1, -0x749C($gp)
    ctx->pc = 0x2f67c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 3));
    // 0x2f67c4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2f67c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2f67c8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f67c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f67cc: 0xac2295a8  sw          $v0, -0x6A58($at)
    ctx->pc = 0x2f67ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8095A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8095A8u, _value); } while (0);
label_2f67d0:
    // 0x2f67d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f67d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f67d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f67d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f67d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f67dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F67DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67DCu;
        // 0x2f67e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F67DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F67E4u;
}

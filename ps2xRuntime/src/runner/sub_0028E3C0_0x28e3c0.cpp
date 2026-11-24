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

// Function: sub_0028E3C0
// Address: 0x28e3c0 - 0x28e440
void sub_0028E3C0_0x28e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E3C0_0x28e3c0");
#endif

    switch (ctx->pc) {
        case 0x28e3fcu: goto label_28e3fc;
        case 0x28e40cu: goto label_28e40c;
        case 0x28e424u: goto label_28e424;
        default: break;
    }

    ctx->pc = 0x28e3c0u;

    // 0x28e3c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28e3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28e3c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28e3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28e3c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28e3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28e3cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28e3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28e3d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28e3d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3d4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x28E3D4u;
    {
        const bool branch_taken_0x28e3d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E3D4u;
        // 0x28e3d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3d4) {
            ctx->pc = 0x28E428u;
            goto label_28e428;
        }
    }
    ctx->pc = 0x28E3DCu;
    // 0x28e3dc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x28e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x28e3e0: 0x244276a0  addiu       $v0, $v0, 0x76A0
    ctx->pc = 0x28e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30368));
    // 0x28e3e4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x28e3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x28e3e8: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x28e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x28e3ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E3ECu;
    {
        const bool branch_taken_0x28e3ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e3ec) {
            ctx->pc = 0x28E400u;
            goto label_28e400;
        }
    }
    ctx->pc = 0x28E3F4u;
    // 0x28e3f4: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x28E3F4u;
    SET_GPR_U32(ctx, 31, 0x28E3FCu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x28E3F4u, 0x28E3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E3FCu;
label_28e3fc:
    // 0x28e3fc: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x28e3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
label_28e400:
    // 0x28e400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e404: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x28E404u;
    SET_GPR_U32(ctx, 31, 0x28E40Cu);
    ctx->pc = 0x28E408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E404u;
    // 0x28e408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x28E404u, 0x28E40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E40Cu;
label_28e40c:
    // 0x28e40c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x28e40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x28e410: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28e410u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28e414: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E414u;
    {
        const bool branch_taken_0x28e414 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x28E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E414u;
        // 0x28e418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e414) {
            ctx->pc = 0x28E428u;
            goto label_28e428;
        }
    }
    ctx->pc = 0x28E41Cu;
    // 0x28e41c: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x28E41Cu;
    SET_GPR_U32(ctx, 31, 0x28E424u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x28E41Cu, 0x28E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E424u;
label_28e424:
    // 0x28e424: 0x0  nop
    ctx->pc = 0x28e424u;
    // NOP
label_28e428:
    // 0x28e428: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28e428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e42c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28e42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28e430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28e434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e438: 0x3e00008  jr          $ra
    ctx->pc = 0x28E438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E438u;
        // 0x28e43c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E440u;
}

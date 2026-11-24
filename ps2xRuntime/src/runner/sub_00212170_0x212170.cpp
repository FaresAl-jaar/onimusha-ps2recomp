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

// Function: sub_00212170
// Address: 0x212170 - 0x2121d8
void sub_00212170_0x212170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212170_0x212170");
#endif

    switch (ctx->pc) {
        case 0x2121a4u: goto label_2121a4;
        case 0x2121acu: goto label_2121ac;
        case 0x2121bcu: goto label_2121bc;
        case 0x2121c4u: goto label_2121c4;
        default: break;
    }

    ctx->pc = 0x212170u;

    // 0x212170: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x212170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
    // 0x212174: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x212174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x212178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21217c: 0x24630e18  addiu       $v1, $v1, 0xE18
    ctx->pc = 0x21217cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3608));
    // 0x212180: 0x24428910  addiu       $v0, $v0, -0x76F0
    ctx->pc = 0x212180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936848));
    // 0x212184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212188: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x212188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21218c: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x21218cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x212190: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x212190u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x880E18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x880E18u, _value); } while (0);
    // 0x212194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212198: 0x240437b0  addiu       $a0, $zero, 0x37B0
    ctx->pc = 0x212198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14256));
    // 0x21219c: 0xc084972  jal         func_2125C8
    ctx->pc = 0x21219Cu;
    SET_GPR_U32(ctx, 31, 0x2121A4u);
    ctx->pc = 0x2121A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21219Cu;
    // 0x2121a0: 0xaca4a1ec  sw          $a0, -0x5E14($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294943212), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125C8u, 0x21219Cu, 0x2121A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2121A4u;
label_2121a4:
    // 0x2121a4: 0xc084876  jal         func_2121D8
    ctx->pc = 0x2121A4u;
    SET_GPR_U32(ctx, 31, 0x2121ACu);
    ctx->pc = 0x2121A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2121A4u;
    // 0x2121a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2121D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2121D8u, 0x2121A4u, 0x2121ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2121ACu;
label_2121ac:
    // 0x2121ac: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2121ACu;
    {
        const bool branch_taken_0x2121ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2121ac) {
            ctx->pc = 0x2121B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2121ACu;
            // 0x2121b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2121CCu;
            goto label_2121cc;
        }
    }
    ctx->pc = 0x2121B4u;
    // 0x2121b4: 0xc08497e  jal         func_2125F8
    ctx->pc = 0x2121B4u;
    SET_GPR_U32(ctx, 31, 0x2121BCu);
    ctx->pc = 0x2125F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125F8u, 0x2121B4u, 0x2121BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2121BCu;
label_2121bc:
    // 0x2121bc: 0xc08498c  jal         func_212630
    ctx->pc = 0x2121BCu;
    SET_GPR_U32(ctx, 31, 0x2121C4u);
    ctx->pc = 0x212630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212630u, 0x2121BCu, 0x2121C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2121C4u;
label_2121c4:
    // 0x2121c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2121c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2121c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2121cc:
    // 0x2121cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2121ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2121d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2121D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2121D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121D0u;
        // 0x2121d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2121D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2121D8u;
}

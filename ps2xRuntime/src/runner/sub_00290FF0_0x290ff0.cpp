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

// Function: sub_00290FF0
// Address: 0x290ff0 - 0x291020
void sub_00290FF0_0x290ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290FF0_0x290ff0");
#endif

    ctx->pc = 0x290ff0u;

    // 0x290ff0: 0xc78081bc  lwc1        $f0, -0x7E44($gp)
    ctx->pc = 0x290ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ff4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290ff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x290ff8: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x290ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x290ffc: 0x41203  sra         $v0, $a0, 8
    ctx->pc = 0x290ffcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 8));
    // 0x291000: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x291000u;
    {
        const bool branch_taken_0x291000 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x291004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291000u;
        // 0x291004: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291000) {
            ctx->pc = 0x291010u;
            goto label_291010;
        }
    }
    ctx->pc = 0x291008u;
    // 0x291008: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x291008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x29100c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x29100cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_291010:
    // 0x291010: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x291010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x291014: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x291014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x291018: 0x3e00008  jr          $ra
    ctx->pc = 0x291018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291018u;
        // 0x29101c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291020u;
}

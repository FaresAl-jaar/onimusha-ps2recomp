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

// Function: sub_00249750
// Address: 0x249750 - 0x249780
void sub_00249750_0x249750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249750_0x249750");
#endif

    switch (ctx->pc) {
        case 0x249750u: goto label_249750;
        case 0x249754u: goto label_249754;
        case 0x249758u: goto label_249758;
        case 0x24975cu: goto label_24975c;
        case 0x249760u: goto label_249760;
        case 0x249764u: goto label_249764;
        case 0x249768u: goto label_249768;
        case 0x24976cu: goto label_24976c;
        case 0x249770u: goto label_249770;
        case 0x249774u: goto label_249774;
        case 0x249778u: goto label_249778;
        case 0x24977cu: goto label_24977c;
        default: break;
    }

    ctx->pc = 0x249750u;

label_249750:
    // 0x249750: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x249750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_249754:
    // 0x249754: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_249758:
    // 0x249758: 0x8c430cec  lw          $v1, 0xCEC($v0)
    ctx->pc = 0x249758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3308)));
label_24975c:
    // 0x24975c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24975cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_249760:
    // 0x249760: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_249764:
    if (ctx->pc == 0x249764u) {
        ctx->pc = 0x249764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249760u;
        // 0x249764: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249768u;
        goto label_249768;
    }
    ctx->pc = 0x249760u;
    {
        const bool branch_taken_0x249760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249760u;
        // 0x249764: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249760) {
            ctx->pc = 0x249774u;
            goto label_249774;
        }
    }
    ctx->pc = 0x249768u;
label_249768:
    // 0x249768: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x249768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_24976c:
    // 0x24976c: 0x60f809  jalr        $v1
label_249770:
    if (ctx->pc == 0x249770u) {
        ctx->pc = 0x249770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24976Cu;
        // 0x249770: 0x8c440cf0  lw          $a0, 0xCF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249774u;
        goto label_249774;
    }
    ctx->pc = 0x24976Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x249774u);
        ctx->pc = 0x249770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24976Cu;
        // 0x249770: 0x8c440cf0  lw          $a0, 0xCF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3312)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24976Cu, 0x249774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249774u;
label_249774:
    // 0x249774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249778:
    // 0x249778: 0x3e00008  jr          $ra
label_24977c:
    if (ctx->pc == 0x24977Cu) {
        ctx->pc = 0x24977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249778u;
        // 0x24977c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249780u;
        goto label_fallthrough_0x249778;
    }
    ctx->pc = 0x249778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249778u;
        // 0x24977c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x249778:
    ctx->pc = 0x249780u;
}

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

// Function: sub_001EE1D0
// Address: 0x1ee1d0 - 0x1ee224
void sub_001EE1D0_0x1ee1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE1D0_0x1ee1d0");
#endif

    switch (ctx->pc) {
        case 0x1ee1d0u: goto label_1ee1d0;
        case 0x1ee1d4u: goto label_1ee1d4;
        case 0x1ee1d8u: goto label_1ee1d8;
        case 0x1ee1dcu: goto label_1ee1dc;
        case 0x1ee1e0u: goto label_1ee1e0;
        case 0x1ee1e4u: goto label_1ee1e4;
        case 0x1ee1e8u: goto label_1ee1e8;
        case 0x1ee1ecu: goto label_1ee1ec;
        case 0x1ee1f0u: goto label_1ee1f0;
        case 0x1ee1f4u: goto label_1ee1f4;
        case 0x1ee1f8u: goto label_1ee1f8;
        case 0x1ee1fcu: goto label_1ee1fc;
        case 0x1ee200u: goto label_1ee200;
        case 0x1ee204u: goto label_1ee204;
        case 0x1ee208u: goto label_1ee208;
        case 0x1ee20cu: goto label_1ee20c;
        case 0x1ee210u: goto label_1ee210;
        case 0x1ee214u: goto label_1ee214;
        case 0x1ee218u: goto label_1ee218;
        case 0x1ee21cu: goto label_1ee21c;
        case 0x1ee220u: goto label_1ee220;
        default: break;
    }

    ctx->pc = 0x1ee1d0u;

label_1ee1d0:
    // 0x1ee1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ee1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ee1d4:
    // 0x1ee1d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ee1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ee1d8:
    // 0x1ee1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ee1dc:
    // 0x1ee1dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ee1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee1e0:
    // 0x1ee1e0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1ee1e4:
    if (ctx->pc == 0x1EE1E4u) {
        ctx->pc = 0x1EE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1E0u;
        // 0x1ee1e4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1E8u;
        goto label_1ee1e8;
    }
    ctx->pc = 0x1EE1E0u;
    {
        const bool branch_taken_0x1ee1e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1E0u;
        // 0x1ee1e4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1e0) {
            ctx->pc = 0x1EE210u;
            goto label_1ee210;
        }
    }
    ctx->pc = 0x1EE1E8u;
label_1ee1e8:
    // 0x1ee1e8: 0x24427290  addiu       $v0, $v0, 0x7290
    ctx->pc = 0x1ee1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29328));
label_1ee1ec:
    // 0x1ee1ec: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ee1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ee1f0:
    // 0x1ee1f0: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1ee1f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1ee1f4:
    // 0x1ee1f4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ee1f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ee1f8:
    // 0x1ee1f8: 0x320f809  jalr        $t9
label_1ee1fc:
    if (ctx->pc == 0x1EE1FCu) {
        ctx->pc = 0x1EE200u;
        goto label_1ee200;
    }
    ctx->pc = 0x1EE1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EE200u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE1F8u, 0x1EE200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE200u;
label_1ee200:
    // 0x1ee200: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1ee204:
    if (ctx->pc == 0x1EE204u) {
        ctx->pc = 0x1EE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE200u;
        // 0x1ee204: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE208u;
        goto label_1ee208;
    }
    ctx->pc = 0x1EE200u;
    {
        const bool branch_taken_0x1ee200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE200u;
        // 0x1ee204: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee200) {
            ctx->pc = 0x1EE210u;
            goto label_1ee210;
        }
    }
    ctx->pc = 0x1EE208u;
label_1ee208:
    // 0x1ee208: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1ee208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1ee20c:
    // 0x1ee20c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ee20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ee210:
    // 0x1ee210: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ee210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ee214:
    // 0x1ee214: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ee214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee218:
    // 0x1ee218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee21c:
    // 0x1ee21c: 0x3e00008  jr          $ra
label_1ee220:
    if (ctx->pc == 0x1EE220u) {
        ctx->pc = 0x1EE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE21Cu;
        // 0x1ee220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE224u;
        goto label_fallthrough_0x1ee21c;
    }
    ctx->pc = 0x1EE21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE21Cu;
        // 0x1ee220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ee21c:
    ctx->pc = 0x1EE224u;
}

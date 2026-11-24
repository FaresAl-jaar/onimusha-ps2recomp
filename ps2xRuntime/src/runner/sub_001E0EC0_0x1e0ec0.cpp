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

// Function: sub_001E0EC0
// Address: 0x1e0ec0 - 0x1e0f14
void sub_001E0EC0_0x1e0ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0EC0_0x1e0ec0");
#endif

    switch (ctx->pc) {
        case 0x1e0ec0u: goto label_1e0ec0;
        case 0x1e0ec4u: goto label_1e0ec4;
        case 0x1e0ec8u: goto label_1e0ec8;
        case 0x1e0eccu: goto label_1e0ecc;
        case 0x1e0ed0u: goto label_1e0ed0;
        case 0x1e0ed4u: goto label_1e0ed4;
        case 0x1e0ed8u: goto label_1e0ed8;
        case 0x1e0edcu: goto label_1e0edc;
        case 0x1e0ee0u: goto label_1e0ee0;
        case 0x1e0ee4u: goto label_1e0ee4;
        case 0x1e0ee8u: goto label_1e0ee8;
        case 0x1e0eecu: goto label_1e0eec;
        case 0x1e0ef0u: goto label_1e0ef0;
        case 0x1e0ef4u: goto label_1e0ef4;
        case 0x1e0ef8u: goto label_1e0ef8;
        case 0x1e0efcu: goto label_1e0efc;
        case 0x1e0f00u: goto label_1e0f00;
        case 0x1e0f04u: goto label_1e0f04;
        case 0x1e0f08u: goto label_1e0f08;
        case 0x1e0f0cu: goto label_1e0f0c;
        case 0x1e0f10u: goto label_1e0f10;
        default: break;
    }

    ctx->pc = 0x1e0ec0u;

label_1e0ec0:
    // 0x1e0ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e0ec4:
    // 0x1e0ec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e0ec8:
    // 0x1e0ec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e0ecc:
    // 0x1e0ecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e0ed0:
    // 0x1e0ed0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e0ed4:
    if (ctx->pc == 0x1E0ED4u) {
        ctx->pc = 0x1E0ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0ED0u;
        // 0x1e0ed4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0ED8u;
        goto label_1e0ed8;
    }
    ctx->pc = 0x1E0ED0u;
    {
        const bool branch_taken_0x1e0ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0ED0u;
        // 0x1e0ed4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ed0) {
            ctx->pc = 0x1E0F00u;
            goto label_1e0f00;
        }
    }
    ctx->pc = 0x1E0ED8u;
label_1e0ed8:
    // 0x1e0ed8: 0x244266b0  addiu       $v0, $v0, 0x66B0
    ctx->pc = 0x1e0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26288));
label_1e0edc:
    // 0x1e0edc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e0edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e0ee0:
    // 0x1e0ee0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e0ee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e0ee4:
    // 0x1e0ee4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e0ee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e0ee8:
    // 0x1e0ee8: 0x320f809  jalr        $t9
label_1e0eec:
    if (ctx->pc == 0x1E0EECu) {
        ctx->pc = 0x1E0EF0u;
        goto label_1e0ef0;
    }
    ctx->pc = 0x1E0EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0EF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0EE8u, 0x1E0EF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0EF0u;
label_1e0ef0:
    // 0x1e0ef0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e0ef4:
    if (ctx->pc == 0x1E0EF4u) {
        ctx->pc = 0x1E0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EF0u;
        // 0x1e0ef4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0EF8u;
        goto label_1e0ef8;
    }
    ctx->pc = 0x1E0EF0u;
    {
        const bool branch_taken_0x1e0ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EF0u;
        // 0x1e0ef4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ef0) {
            ctx->pc = 0x1E0F00u;
            goto label_1e0f00;
        }
    }
    ctx->pc = 0x1E0EF8u;
label_1e0ef8:
    // 0x1e0ef8: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1e0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1e0efc:
    // 0x1e0efc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e0efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e0f00:
    // 0x1e0f00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e0f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e0f04:
    // 0x1e0f04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0f08:
    // 0x1e0f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0f0c:
    // 0x1e0f0c: 0x3e00008  jr          $ra
label_1e0f10:
    if (ctx->pc == 0x1E0F10u) {
        ctx->pc = 0x1E0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F0Cu;
        // 0x1e0f10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0F14u;
        goto label_fallthrough_0x1e0f0c;
    }
    ctx->pc = 0x1E0F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F0Cu;
        // 0x1e0f10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0f0c:
    ctx->pc = 0x1E0F14u;
}

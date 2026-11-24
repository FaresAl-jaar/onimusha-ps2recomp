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

// Function: sub_0026F340
// Address: 0x26f340 - 0x26f3b8
void sub_0026F340_0x26f340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F340_0x26f340");
#endif

    ctx->pc = 0x26f340u;

    // 0x26f340: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26f340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26f344: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26f344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26f348: 0x9026fc8c  lbu         $a2, -0x374($at)
    ctx->pc = 0x26f348u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x26f34c: 0x10c20016  beq         $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26F34Cu;
    {
        const bool branch_taken_0x26f34c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F34Cu;
        // 0x26f350: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f34c) {
            ctx->pc = 0x26F3A8u;
            goto label_26f3a8;
        }
    }
    ctx->pc = 0x26F354u;
    // 0x26f354: 0x10c3000c  beq         $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x26F354u;
    {
        const bool branch_taken_0x26f354 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x26F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F354u;
        // 0x26f358: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f354) {
            ctx->pc = 0x26F388u;
            goto label_26f388;
        }
    }
    ctx->pc = 0x26F35Cu;
    // 0x26f35c: 0x10c50004  beq         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F35Cu;
    {
        const bool branch_taken_0x26f35c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x26f35c) {
            ctx->pc = 0x26F370u;
            goto label_26f370;
        }
    }
    ctx->pc = 0x26F364u;
    // 0x26f364: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26F364u;
    {
        const bool branch_taken_0x26f364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f364) {
            ctx->pc = 0x26F3A8u;
            goto label_26f3a8;
        }
    }
    ctx->pc = 0x26F36Cu;
    // 0x26f36c: 0x0  nop
    ctx->pc = 0x26f36cu;
    // NOP
label_26f370:
    // 0x26f370: 0x8c840090  lw          $a0, 0x90($a0)
    ctx->pc = 0x26f370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x26f374: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x26f374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x26f378: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26f378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26f37c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26F37Cu;
    {
        const bool branch_taken_0x26f37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F37Cu;
        // 0x26f380: 0xa3100a  movz        $v0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f37c) {
            ctx->pc = 0x26F3B0u;
            goto label_26f3b0;
        }
    }
    ctx->pc = 0x26F384u;
    // 0x26f384: 0x0  nop
    ctx->pc = 0x26f384u;
    // NOP
label_26f388:
    // 0x26f388: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x26f388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x26f38c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x26f38cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26f390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f394: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x26f394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x26f398: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x26f398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x26f39c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26F39Cu;
    {
        const bool branch_taken_0x26f39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F39Cu;
        // 0x26f3a0: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f39c) {
            ctx->pc = 0x26F3B0u;
            goto label_26f3b0;
        }
    }
    ctx->pc = 0x26F3A4u;
    // 0x26f3a4: 0x0  nop
    ctx->pc = 0x26f3a4u;
    // NOP
label_26f3a8:
    // 0x26f3a8: 0x90820098  lbu         $v0, 0x98($a0)
    ctx->pc = 0x26f3a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x26f3ac: 0x0  nop
    ctx->pc = 0x26f3acu;
    // NOP
label_26f3b0:
    // 0x26f3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x26F3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F3B8u;
}

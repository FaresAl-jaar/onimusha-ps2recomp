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

// Function: sub_0039A490
// Address: 0x39a490 - 0x39a514
void sub_0039A490_0x39a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A490_0x39a490");
#endif

    switch (ctx->pc) {
        case 0x39a4b8u: goto label_39a4b8;
        default: break;
    }

    ctx->pc = 0x39a490u;

    // 0x39a490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39a490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39a494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39a494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39a498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39a498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39a49c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39a49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39a4a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39a4a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a4a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39a4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a4a8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x39a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x39a4ac: 0x8e252b28  lw          $a1, 0x2B28($s1)
    ctx->pc = 0x39a4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11048)));
    // 0x39a4b0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x39A4B0u;
    SET_GPR_U32(ctx, 31, 0x39A4B8u);
    ctx->pc = 0x39A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A4B0u;
    // 0x39a4b4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x39A4B0u, 0x39A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A4B8u;
label_39a4b8:
    // 0x39a4b8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x39A4B8u;
    {
        const bool branch_taken_0x39a4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a4b8) {
            ctx->pc = 0x39A500u;
            goto label_39a500;
        }
    }
    ctx->pc = 0x39A4C0u;
    // 0x39a4c0: 0x82252b22  lb          $a1, 0x2B22($s1)
    ctx->pc = 0x39a4c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11042)));
    // 0x39a4c4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x39a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39a4c8: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39A4C8u;
    {
        const bool branch_taken_0x39a4c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x39a4c8) {
            ctx->pc = 0x39A4E0u;
            goto label_39a4e0;
        }
    }
    ctx->pc = 0x39A4D0u;
    // 0x39a4d0: 0x82232b23  lb          $v1, 0x2B23($s1)
    ctx->pc = 0x39a4d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11043)));
    // 0x39a4d4: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x39A4D4u;
    {
        const bool branch_taken_0x39a4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x39a4d4) {
            ctx->pc = 0x39A500u;
            goto label_39a500;
        }
    }
    ctx->pc = 0x39A4DCu;
    // 0x39a4dc: 0x0  nop
    ctx->pc = 0x39a4dcu;
    // NOP
label_39a4e0:
    // 0x39a4e0: 0x82232b23  lb          $v1, 0x2B23($s1)
    ctx->pc = 0x39a4e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11043)));
    // 0x39a4e4: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x39a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x39a4e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x39a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x39a4ec: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x39a4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x39a4f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x39a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x39a4f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39a4f8: 0xa0702b2f  sb          $s0, 0x2B2F($v1)
    ctx->pc = 0x39a4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11055), (uint8_t)GPR_U32(ctx, 16));
    // 0x39a4fc: 0x0  nop
    ctx->pc = 0x39a4fcu;
    // NOP
label_39a500:
    // 0x39a500: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39a500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39a504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39a504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a50c: 0x3e00008  jr          $ra
    ctx->pc = 0x39A50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A50Cu;
        // 0x39a510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A514u;
}

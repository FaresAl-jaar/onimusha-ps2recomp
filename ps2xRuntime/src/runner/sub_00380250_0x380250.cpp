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

// Function: sub_00380250
// Address: 0x380250 - 0x380304
void sub_00380250_0x380250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380250_0x380250");
#endif

    switch (ctx->pc) {
        case 0x380294u: goto label_380294;
        case 0x3802a8u: goto label_3802a8;
        case 0x3802b8u: goto label_3802b8;
        case 0x3802d0u: goto label_3802d0;
        default: break;
    }

    ctx->pc = 0x380250u;

    // 0x380250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x380250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x380254: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x380254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x380258: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x380258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38025c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x380260: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x380260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x380264: 0x8c912b80  lw          $s1, 0x2B80($a0)
    ctx->pc = 0x380264u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11136)));
    // 0x380268: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x380268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38026c: 0x80842b8f  lb          $a0, 0x2B8F($a0)
    ctx->pc = 0x38026cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 11151)));
    // 0x380270: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x380270u;
    {
        const bool branch_taken_0x380270 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x380270) {
            ctx->pc = 0x380280u;
            goto label_380280;
        }
    }
    ctx->pc = 0x380278u;
    // 0x380278: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x380278u;
    {
        const bool branch_taken_0x380278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380278u;
        // 0x38027c: 0xa2002b8f  sb          $zero, 0x2B8F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11151), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380278) {
            ctx->pc = 0x3802F0u;
            goto label_3802f0;
        }
    }
    ctx->pc = 0x380280u;
label_380280:
    // 0x380280: 0x82022b8e  lb          $v0, 0x2B8E($s0)
    ctx->pc = 0x380280u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11150)));
    // 0x380284: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x380284u;
    {
        const bool branch_taken_0x380284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x380284) {
            ctx->pc = 0x3802B0u;
            goto label_3802b0;
        }
    }
    ctx->pc = 0x38028Cu;
    // 0x38028c: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x38028Cu;
    SET_GPR_U32(ctx, 31, 0x380294u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x38028Cu, 0x380294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380294u;
label_380294:
    // 0x380294: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x380294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x380298: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x380298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38029c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x38029cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3802a0: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3802A0u;
    SET_GPR_U32(ctx, 31, 0x3802A8u);
    ctx->pc = 0x3802A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3802A0u;
    // 0x3802a4: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3802A0u, 0x3802A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3802A8u;
label_3802a8:
    // 0x3802a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3802A8u;
    {
        const bool branch_taken_0x3802a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3802ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3802A8u;
        // 0x3802ac: 0xa2022b8f  sb          $v0, 0x2B8F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11151), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3802a8) {
            ctx->pc = 0x3802F0u;
            goto label_3802f0;
        }
    }
    ctx->pc = 0x3802B0u;
label_3802b0:
    // 0x3802b0: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3802B0u;
    SET_GPR_U32(ctx, 31, 0x3802B8u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3802B0u, 0x3802B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3802B8u;
label_3802b8:
    // 0x3802b8: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x3802b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3802bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3802bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3802c0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3802c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3802c4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x3802c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3802c8: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3802C8u;
    SET_GPR_U32(ctx, 31, 0x3802D0u);
    ctx->pc = 0x3802CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3802C8u;
    // 0x3802cc: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3802C8u, 0x3802D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3802D0u;
label_3802d0:
    // 0x3802d0: 0xa2022b8f  sb          $v0, 0x2B8F($s0)
    ctx->pc = 0x3802d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11151), (uint8_t)GPR_U32(ctx, 2));
    // 0x3802d4: 0x82042b8f  lb          $a0, 0x2B8F($s0)
    ctx->pc = 0x3802d4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11151)));
    // 0x3802d8: 0x82032b8e  lb          $v1, 0x2B8E($s0)
    ctx->pc = 0x3802d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11150)));
    // 0x3802dc: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x3802dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3802e0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3802E0u;
    {
        const bool branch_taken_0x3802e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3802E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3802E0u;
        // 0x3802e4: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3802e0) {
            ctx->pc = 0x3802F0u;
            goto label_3802f0;
        }
    }
    ctx->pc = 0x3802E8u;
    // 0x3802e8: 0xa2032b8f  sb          $v1, 0x2B8F($s0)
    ctx->pc = 0x3802e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11151), (uint8_t)GPR_U32(ctx, 3));
    // 0x3802ec: 0x0  nop
    ctx->pc = 0x3802ecu;
    // NOP
label_3802f0:
    // 0x3802f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3802f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3802f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3802f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3802f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3802f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3802fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3802FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3802FCu;
        // 0x380300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3802FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380304u;
}

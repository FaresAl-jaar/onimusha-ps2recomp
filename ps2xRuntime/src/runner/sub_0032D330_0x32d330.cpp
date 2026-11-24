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

// Function: sub_0032D330
// Address: 0x32d330 - 0x32d3d0
void sub_0032D330_0x32d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D330_0x32d330");
#endif

    switch (ctx->pc) {
        case 0x32d34cu: goto label_32d34c;
        case 0x32d388u: goto label_32d388;
        case 0x32d3bcu: goto label_32d3bc;
        default: break;
    }

    ctx->pc = 0x32d330u;

    // 0x32d330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32d330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32d334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32d334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32d338: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32d338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32d33c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32d33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d340: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32d340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32d344: 0xc095150  jal         func_254540
    ctx->pc = 0x32D344u;
    SET_GPR_U32(ctx, 31, 0x32D34Cu);
    ctx->pc = 0x32D348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D344u;
    // 0x32d348: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x32D344u, 0x32D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D34Cu;
label_32d34c:
    // 0x32d34c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x32D34Cu;
    {
        const bool branch_taken_0x32d34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d34c) {
            ctx->pc = 0x32D3C0u;
            goto label_32d3c0;
        }
    }
    ctx->pc = 0x32D354u;
    // 0x32d354: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x32d354u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x32d358: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32d358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32d35c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x32d35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x32d360: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x32d360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x32d364: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32d364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d368: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32d368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d36c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32d36cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d370: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x32d370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32d374: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x32d374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x32d378: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x32d378u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x32d37c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x32d37cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x32d380: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x32D380u;
    SET_GPR_U32(ctx, 31, 0x32D388u);
    ctx->pc = 0x32D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D380u;
    // 0x32d384: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x32D380u, 0x32D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D388u;
label_32d388:
    // 0x32d388: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32d388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32d38c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32d38cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32d390: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32d390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32d394: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x32d394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x32d398: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x32d398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x32d39c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32d39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3a0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x32d3a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x32d3a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32d3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32d3a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32d3acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32d3b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3b4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x32D3B4u;
    SET_GPR_U32(ctx, 31, 0x32D3BCu);
    ctx->pc = 0x32D3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D3B4u;
    // 0x32d3b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x32D3B4u, 0x32D3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D3BCu;
label_32d3bc:
    // 0x32d3bc: 0x0  nop
    ctx->pc = 0x32d3bcu;
    // NOP
label_32d3c0:
    // 0x32d3c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32d3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d3c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32d3c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x32D3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D3C8u;
        // 0x32d3cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D3D0u;
}

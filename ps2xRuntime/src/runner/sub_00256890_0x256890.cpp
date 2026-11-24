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

// Function: sub_00256890
// Address: 0x256890 - 0x256954
void sub_00256890_0x256890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256890_0x256890");
#endif

    switch (ctx->pc) {
        case 0x2568b8u: goto label_2568b8;
        case 0x2568e8u: goto label_2568e8;
        case 0x2568f0u: goto label_2568f0;
        case 0x256910u: goto label_256910;
        case 0x256938u: goto label_256938;
        default: break;
    }

    ctx->pc = 0x256890u;

    // 0x256890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x256894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x256898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25689c: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x25689cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2568a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2568a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2568a4: 0xa4400014  sh          $zero, 0x14($v0)
    ctx->pc = 0x2568a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2568a8: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x2568a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2568ac: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2568acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2568b0: 0xc095f80  jal         func_257E00
    ctx->pc = 0x2568B0u;
    SET_GPR_U32(ctx, 31, 0x2568B8u);
    ctx->pc = 0x2568B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2568B0u;
    // 0x2568b4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E00u, 0x2568B0u, 0x2568B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2568B8u;
label_2568b8:
    // 0x2568b8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2568b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2568bc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2568bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2568c0: 0x24840e70  addiu       $a0, $a0, 0xE70
    ctx->pc = 0x2568c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3696));
    // 0x2568c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2568c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2568c8: 0xa462002c  sh          $v0, 0x2C($v1)
    ctx->pc = 0x2568c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x2568cc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2568ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2568d0: 0xa040008a  sb          $zero, 0x8A($v0)
    ctx->pc = 0x2568d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 138), (uint8_t)GPR_U32(ctx, 0));
    // 0x2568d4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2568d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2568d8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2568d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2568dc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2568dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2568e0: 0xc0ca68c  jal         func_329A30
    ctx->pc = 0x2568E0u;
    SET_GPR_U32(ctx, 31, 0x2568E8u);
    ctx->pc = 0x2568E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2568E0u;
    // 0x2568e4: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329A30u, 0x2568E0u, 0x2568E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2568E8u;
label_2568e8:
    // 0x2568e8: 0xc0ca5a4  jal         func_329690
    ctx->pc = 0x2568E8u;
    SET_GPR_U32(ctx, 31, 0x2568F0u);
    ctx->pc = 0x2568ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2568E8u;
    // 0x2568ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329690u, 0x2568E8u, 0x2568F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2568F0u;
label_2568f0:
    // 0x2568f0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2568f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2568f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2568f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2568f8: 0x94490024  lhu         $t1, 0x24($v0)
    ctx->pc = 0x2568f8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2568fc: 0x9046009f  lbu         $a2, 0x9F($v0)
    ctx->pc = 0x2568fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 159)));
    // 0x256900: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x256900u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x256904: 0x8448001a  lh          $t0, 0x1A($v0)
    ctx->pc = 0x256904u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x256908: 0xc095e0c  jal         func_257830
    ctx->pc = 0x256908u;
    SET_GPR_U32(ctx, 31, 0x256910u);
    ctx->pc = 0x25690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256908u;
    // 0x25690c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257830u, 0x256908u, 0x256910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256910u;
label_256910:
    // 0x256910: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x256910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256918: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x256918u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x25691c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x25691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256920: 0x94490028  lhu         $t1, 0x28($v0)
    ctx->pc = 0x256920u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x256924: 0x9046009f  lbu         $a2, 0x9F($v0)
    ctx->pc = 0x256924u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 159)));
    // 0x256928: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x256928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x25692c: 0x8448001c  lh          $t0, 0x1C($v0)
    ctx->pc = 0x25692cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x256930: 0xc095e30  jal         func_2578C0
    ctx->pc = 0x256930u;
    SET_GPR_U32(ctx, 31, 0x256938u);
    ctx->pc = 0x256934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256930u;
    // 0x256934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2578C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2578C0u, 0x256930u, 0x256938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256938u;
label_256938:
    // 0x256938: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x256938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25693c: 0xa4620020  sh          $v0, 0x20($v1)
    ctx->pc = 0x25693cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x256940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x256940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x256944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25694c: 0x3e00008  jr          $ra
    ctx->pc = 0x25694Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25694Cu;
        // 0x256950: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25694Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256954u;
}

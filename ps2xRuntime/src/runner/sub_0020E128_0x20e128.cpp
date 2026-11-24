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

// Function: sub_0020E128
// Address: 0x20e128 - 0x20e1d0
void sub_0020E128_0x20e128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E128_0x20e128");
#endif

    switch (ctx->pc) {
        case 0x20e158u: goto label_20e158;
        case 0x20e170u: goto label_20e170;
        case 0x20e184u: goto label_20e184;
        case 0x20e18cu: goto label_20e18c;
        case 0x20e1a4u: goto label_20e1a4;
        default: break;
    }

    ctx->pc = 0x20e128u;

    // 0x20e128: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20e128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20e12c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x20e12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x20e130: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20e130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e134: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x20e134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x20e138: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20e138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e13c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e140: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x20e140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x20e144: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x20e144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x20e148: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x20e148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e14c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20e14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20e150: 0xc08e730  jal         func_239CC0
    ctx->pc = 0x20E150u;
    SET_GPR_U32(ctx, 31, 0x20E158u);
    ctx->pc = 0x20E154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E150u;
    // 0x20e154: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239CC0u, 0x20E150u, 0x20E158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E158u;
label_20e158:
    // 0x20e158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e15c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20e15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20e160: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x20e160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x20e164: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x20e164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x20e168: 0xc08e810  jal         func_23A040
    ctx->pc = 0x20E168u;
    SET_GPR_U32(ctx, 31, 0x20E170u);
    ctx->pc = 0x20E16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E168u;
    // 0x20e16c: 0xac629fa8  sw          $v0, -0x6058($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942632), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A040u, 0x20E168u, 0x20E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E170u;
label_20e170:
    // 0x20e170: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x20e170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x20e174: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20e174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e178: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20e178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x20e17c: 0xc089ffa  jal         func_227FE8
    ctx->pc = 0x20E17Cu;
    SET_GPR_U32(ctx, 31, 0x20E184u);
    ctx->pc = 0x20E180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E17Cu;
    // 0x20e180: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FE8u, 0x20E17Cu, 0x20E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E184u;
label_20e184:
    // 0x20e184: 0xc08a04e  jal         func_228138
    ctx->pc = 0x20E184u;
    SET_GPR_U32(ctx, 31, 0x20E18Cu);
    ctx->pc = 0x20E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E184u;
    // 0x20e188: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228138u, 0x20E184u, 0x20E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E18Cu;
label_20e18c:
    // 0x20e18c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20e18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e190: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x20e190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20e194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e198: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x20e198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20e19c: 0xc08898a  jal         func_222628
    ctx->pc = 0x20E19Cu;
    SET_GPR_U32(ctx, 31, 0x20E1A4u);
    ctx->pc = 0x20E1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E19Cu;
    // 0x20e1a0: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222628u, 0x20E19Cu, 0x20E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1A4u;
label_20e1a4:
    // 0x20e1a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e1a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x20e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20e1ac: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x20e1acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x20e1b0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x20e1b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e1b4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x20e1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x20e1b8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x20e1b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20e1bc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x20e1bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e1c0: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x20e1c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e1c4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20e1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x20E1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1C8u;
        // 0x20e1cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E1D0u;
}

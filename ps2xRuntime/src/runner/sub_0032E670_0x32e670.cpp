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

// Function: sub_0032E670
// Address: 0x32e670 - 0x32e760
void sub_0032E670_0x32e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E670_0x32e670");
#endif

    switch (ctx->pc) {
        case 0x32e6f8u: goto label_32e6f8;
        case 0x32e740u: goto label_32e740;
        default: break;
    }

    ctx->pc = 0x32e670u;

    // 0x32e670: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x32e670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x32e674: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32e674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x32e678: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x32e678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x32e67c: 0x24429a18  addiu       $v0, $v0, -0x65E8
    ctx->pc = 0x32e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941208));
    // 0x32e680: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32e680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32e684: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x32e684u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x32e688: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32e688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32e68c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x32e68cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32e690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32e694: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x32e694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32e698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32e69c: 0x82e3c  dsll32      $a1, $t0, 24
    ctx->pc = 0x32e69cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 24));
    // 0x32e6a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32e6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32e6a4: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x32e6a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x32e6a8: 0xdc490000  ld          $t1, 0x0($v0)
    ctx->pc = 0x32e6a8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32e6ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x32e6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32e6b0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x32e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x32e6b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x32e6b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e6b8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x32e6b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e6bc: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x32e6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32e6c0: 0x21d1821  addu        $v1, $s0, $sp
    ctx->pc = 0x32e6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x32e6c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x32e6c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e6c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x32e6c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e6cc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x32e6ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e6d0: 0xfd490000  sd          $t1, 0x0($t2)
    ctx->pc = 0x32e6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 9));
    // 0x32e6d4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x32e6d8: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x32e6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x32e6dc: 0x24429870  addiu       $v0, $v0, -0x6790
    ctx->pc = 0x32e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940784));
    // 0x32e6e0: 0x90650060  lbu         $a1, 0x60($v1)
    ctx->pc = 0x32e6e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x32e6e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x32e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x32e6e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32e6ec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x32e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32e6f0: 0xc0cba38  jal         func_32E8E0
    ctx->pc = 0x32E6F0u;
    SET_GPR_U32(ctx, 31, 0x32E6F8u);
    ctx->pc = 0x32E6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E6F0u;
    // 0x32e6f4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E8E0u, 0x32E6F0u, 0x32E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E6F8u;
label_32e6f8:
    // 0x32e6f8: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x32e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x32e6fc: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x32e6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x32e700: 0x90490061  lbu         $t1, 0x61($v0)
    ctx->pc = 0x32e700u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 97)));
    // 0x32e704: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x32e704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x32e708: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32e708u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32e70c: 0x24a59870  addiu       $a1, $a1, -0x6790
    ctx->pc = 0x32e70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940784));
    // 0x32e710: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32e710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e714: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x32e714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e718: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x32e718u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e71c: 0x90420062  lbu         $v0, 0x62($v0)
    ctx->pc = 0x32e71cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 98)));
    // 0x32e720: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x32e720u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x32e724: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x32e724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x32e728: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32e728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32e72c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x32e72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x32e730: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x32e730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e734: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x32e734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x32e738: 0xc0cba38  jal         func_32E8E0
    ctx->pc = 0x32E738u;
    SET_GPR_U32(ctx, 31, 0x32E740u);
    ctx->pc = 0x32E73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E738u;
    // 0x32e73c: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E8E0u, 0x32E738u, 0x32E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E740u;
label_32e740:
    // 0x32e740: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x32e740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32e744: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32e744u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32e748: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32e748u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e74c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32e74cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32e750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32e754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e758: 0x3e00008  jr          $ra
    ctx->pc = 0x32E758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E758u;
        // 0x32e75c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E760u;
}

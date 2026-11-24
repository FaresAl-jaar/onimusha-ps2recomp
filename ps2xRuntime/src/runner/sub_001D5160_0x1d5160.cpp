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

// Function: sub_001D5160
// Address: 0x1d5160 - 0x1d5268
void sub_001D5160_0x1d5160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5160_0x1d5160");
#endif

    switch (ctx->pc) {
        case 0x1d51f8u: goto label_1d51f8;
        case 0x1d5218u: goto label_1d5218;
        default: break;
    }

    ctx->pc = 0x1d5160u;

    // 0x1d5160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d5160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d5164: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x1d5164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1d5168: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d5168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d516c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d516cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d5170: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d5170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d5174: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1d5174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d5178: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d5178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d517c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1d517cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1d5180: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1d5180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5184: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d5184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d5188: 0x341b8  dsll        $t0, $v1, 6
    ctx->pc = 0x1d5188u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 6);
    // 0x1d518c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d518cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d5190: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d5190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d5194: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d5194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d5198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d519c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d519cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d51a0: 0x35080116  ori         $t0, $t0, 0x116
    ctx->pc = 0x1d51a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)278);
    // 0x1d51a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d51a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d51a8: 0x81bfc  dsll32      $v1, $t0, 15
    ctx->pc = 0x1d51a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 15));
    // 0x1d51ac: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x1d51acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1d51b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d51b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d51b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d51b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d51b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d51b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d51bc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1d51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1d51c0: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1d51c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1d51c4: 0x34423531  ori         $v0, $v0, 0x3531
    ctx->pc = 0x1d51c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13617);
    // 0x1d51c8: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1d51c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1d51cc: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x1d51ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x1d51d0: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x1d51d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1d51d4: 0x46007d06  mov.s       $f20, $f15
    ctx->pc = 0x1d51d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    // 0x1d51d8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1d51d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d51dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51e0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x1d51e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x1d51e4: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x1d51e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x1d51e8: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x1d51e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x1d51ec: 0xfc800028  sd          $zero, 0x28($a0)
    ctx->pc = 0x1d51ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 0));
    // 0x1d51f0: 0xc075140  jal         func_1D4500
    ctx->pc = 0x1D51F0u;
    SET_GPR_U32(ctx, 31, 0x1D51F8u);
    ctx->pc = 0x1D51F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51F0u;
    // 0x1d51f4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4500u, 0x1D51F0u, 0x1D51F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51F8u;
label_1d51f8:
    // 0x1d51f8: 0xae120030  sw          $s2, 0x30($s0)
    ctx->pc = 0x1d51f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
    // 0x1d51fc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d51fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1d5200: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x1d5200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
    // 0x1d5204: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1d5204u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1d5208: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d5208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d520c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1d520cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d5210: 0xc075140  jal         func_1D4500
    ctx->pc = 0x1D5210u;
    SET_GPR_U32(ctx, 31, 0x1D5218u);
    ctx->pc = 0x1D5214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5210u;
    // 0x1d5214: 0xfe000038  sd          $zero, 0x38($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4500u, 0x1D5210u, 0x1D5218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5218u;
label_1d5218:
    // 0x1d5218: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x1d5218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d521c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d5220: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1d5220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d5224: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d5224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d5228: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x1d5228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1d522c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d522cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5230: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1d5230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1d5234: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d5234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d5238: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d5238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d523c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d523cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5240: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d5240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5244: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d5244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5248: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1d5248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1d524c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1d524cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1d5250: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d5250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5254: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1d5254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1d5258: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x1d5258u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1d525c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x1d525cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1d5260: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5260u;
        // 0x1d5264: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5268u;
}

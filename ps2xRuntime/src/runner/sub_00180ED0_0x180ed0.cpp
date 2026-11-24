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

// Function: sub_00180ED0
// Address: 0x180ed0 - 0x180fc4
void sub_00180ED0_0x180ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180ED0_0x180ed0");
#endif

    switch (ctx->pc) {
        case 0x180f5cu: goto label_180f5c;
        default: break;
    }

    ctx->pc = 0x180ed0u;

    // 0x180ed0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x180ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x180ed4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x180ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x180ed8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x180ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x180edc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x180edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x180ee0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x180ee0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ee4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x180ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x180ee8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x180ee8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180eec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x180eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x180ef0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x180ef0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ef4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x180ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x180ef8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x180ef8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180efc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x180efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x180f00: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x180f00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x180f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x180f08: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x180f08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x180f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x180f10: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x180f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f14: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x180f14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x180f18: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x180f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f1c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x180f1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x180f20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x180f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f24: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x180f24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x180f28: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x180f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f2c: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x180f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x180f30: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x180f30u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x180f34: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x180f34u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x180f38: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x180f38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f3c: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x180f3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x180f40: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x180f40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f44: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x180f44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f48: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x180f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x180f4c: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x180f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x180f50: 0x87aa00a0  lh          $t2, 0xA0($sp)
    ctx->pc = 0x180f50u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x180f54: 0xc0a84cc  jal         func_2A1330
    ctx->pc = 0x180F54u;
    SET_GPR_U32(ctx, 31, 0x180F5Cu);
    ctx->pc = 0x180F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180F54u;
    // 0x180f58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1330u, 0x180F54u, 0x180F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180F5Cu;
label_180f5c:
    // 0x180f5c: 0xaed5004c  sw          $s5, 0x4C($s6)
    ctx->pc = 0x180f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 76), GPR_U32(ctx, 21));
    // 0x180f60: 0xa2d700cd  sb          $s7, 0xCD($s6)
    ctx->pc = 0x180f60u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 205), (uint8_t)GPR_U32(ctx, 23));
    // 0x180f64: 0xaed30058  sw          $s3, 0x58($s6)
    ctx->pc = 0x180f64u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 88), GPR_U32(ctx, 19));
    // 0x180f68: 0xe6d6005c  swc1        $f22, 0x5C($s6)
    ctx->pc = 0x180f68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 92), bits); }
    // 0x180f6c: 0xe6d50060  swc1        $f21, 0x60($s6)
    ctx->pc = 0x180f6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 96), bits); }
    // 0x180f70: 0xe6d40064  swc1        $f20, 0x64($s6)
    ctx->pc = 0x180f70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 100), bits); }
    // 0x180f74: 0xa6d10068  sh          $s1, 0x68($s6)
    ctx->pc = 0x180f74u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 104), (uint16_t)GPR_U32(ctx, 17));
    // 0x180f78: 0xa6d0006a  sh          $s0, 0x6A($s6)
    ctx->pc = 0x180f78u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 106), (uint16_t)GPR_U32(ctx, 16));
    // 0x180f7c: 0x87a300a0  lh          $v1, 0xA0($sp)
    ctx->pc = 0x180f7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x180f80: 0xa6c3006c  sh          $v1, 0x6C($s6)
    ctx->pc = 0x180f80u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 108), (uint16_t)GPR_U32(ctx, 3));
    // 0x180f84: 0xa2d2006e  sb          $s2, 0x6E($s6)
    ctx->pc = 0x180f84u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 110), (uint8_t)GPR_U32(ctx, 18));
    // 0x180f88: 0xa2d4006f  sb          $s4, 0x6F($s6)
    ctx->pc = 0x180f88u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 111), (uint8_t)GPR_U32(ctx, 20));
    // 0x180f8c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x180f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x180f90: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x180f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x180f94: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x180f94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x180f98: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x180f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x180f9c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x180f9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x180fa0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x180fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x180fa4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x180fa4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180fa8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x180fa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180fac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x180facu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180fb0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x180fb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180fb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x180fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180fb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x180fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x180FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FBCu;
        // 0x180fc0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180FC4u;
}

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

// Function: sub_00102250
// Address: 0x102250 - 0x1022d0
void sub_00102250_0x102250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102250_0x102250");
#endif

    switch (ctx->pc) {
        case 0x1022ccu: goto label_1022cc;
        default: break;
    }

    ctx->pc = 0x102250u;

    // 0x102250: 0x73a01628  paddub      $v0, $sp, $zero
    ctx->pc = 0x102250u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 29), GPR_VEC(ctx, 0)));
    // 0x102254: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x102254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x102258: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x102258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x10225c: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x10225cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x102260: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x102260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x102264: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x102264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x102268: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x102268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x10226c: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x10226cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x102270: 0x7fb60180  sq          $s6, 0x180($sp)
    ctx->pc = 0x102270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 22));
    // 0x102274: 0x7fb70190  sq          $s7, 0x190($sp)
    ctx->pc = 0x102274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 23));
    // 0x102278: 0x7fbe0200  sq          $fp, 0x200($sp)
    ctx->pc = 0x102278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 30));
    // 0x10227c: 0xe7b40288  swc1        $f20, 0x288($sp)
    ctx->pc = 0x10227cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x102280: 0xe7b5028c  swc1        $f21, 0x28C($sp)
    ctx->pc = 0x102280u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
    // 0x102284: 0xe7b60290  swc1        $f22, 0x290($sp)
    ctx->pc = 0x102284u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x102288: 0xe7b70294  swc1        $f23, 0x294($sp)
    ctx->pc = 0x102288u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
    // 0x10228c: 0xe7b80298  swc1        $f24, 0x298($sp)
    ctx->pc = 0x10228cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
    // 0x102290: 0xe7b9029c  swc1        $f25, 0x29C($sp)
    ctx->pc = 0x102290u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 668), bits); }
    // 0x102294: 0xe7ba02a0  swc1        $f26, 0x2A0($sp)
    ctx->pc = 0x102294u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x102298: 0xe7bb02a4  swc1        $f27, 0x2A4($sp)
    ctx->pc = 0x102298u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
    // 0x10229c: 0xe7bc02a8  swc1        $f28, 0x2A8($sp)
    ctx->pc = 0x10229cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x1022a0: 0xe7bd02ac  swc1        $f29, 0x2AC($sp)
    ctx->pc = 0x1022a0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 684), bits); }
    // 0x1022a4: 0xe7be02b0  swc1        $f30, 0x2B0($sp)
    ctx->pc = 0x1022a4u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x1022a8: 0xe7bf02b4  swc1        $f31, 0x2B4($sp)
    ctx->pc = 0x1022a8u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
    // 0x1022ac: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1022acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1022b0: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1022b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1022b4: 0xafbf0010  sw          $ra, 0x10($sp)
    ctx->pc = 0x1022b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 31));
    // 0x1022b8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1022b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1022bc: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1022bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1022c0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1022c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1022c4: 0xc0402e4  jal         func_100B90
    ctx->pc = 0x1022C4u;
    SET_GPR_U32(ctx, 31, 0x1022CCu);
    ctx->pc = 0x1022C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1022C4u;
    // 0x1022c8: 0x73a02628  paddub      $a0, $sp, $zero (Delay Slot)
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 29), GPR_VEC(ctx, 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B90u, 0x1022C4u, 0x1022CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1022CCu;
label_1022cc:
    // 0x1022cc: 0x0  nop
    ctx->pc = 0x1022ccu;
    // NOP
    ctx->pc = 0x1022d0u;
}

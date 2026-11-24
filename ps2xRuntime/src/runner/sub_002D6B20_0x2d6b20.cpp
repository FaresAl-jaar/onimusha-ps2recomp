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

// Function: sub_002D6B20
// Address: 0x2d6b20 - 0x2d6c94
void sub_002D6B20_0x2d6b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6B20_0x2d6b20");
#endif

    switch (ctx->pc) {
        case 0x2d6bd4u: goto label_2d6bd4;
        case 0x2d6c28u: goto label_2d6c28;
        case 0x2d6c7cu: goto label_2d6c7c;
        default: break;
    }

    ctx->pc = 0x2d6b20u;

    // 0x2d6b20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d6b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d6b24: 0x3c02414d  lui         $v0, 0x414D
    ctx->pc = 0x2d6b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16717 << 16));
    // 0x2d6b28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d6b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d6b2c: 0x344220d2  ori         $v0, $v0, 0x20D2
    ctx->pc = 0x2d6b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8402);
    // 0x2d6b30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d6b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d6b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d6b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d6b3c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6b40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d6b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d6b44: 0x68c3c  dsll32      $s1, $a2, 16
    ctx->pc = 0x2d6b44u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d6b48: 0x8c880104  lw          $t0, 0x104($a0)
    ctx->pc = 0x2d6b48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2d6b4c: 0x5843c  dsll32      $s0, $a1, 16
    ctx->pc = 0x2d6b4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d6b50: 0x8c8700a8  lw          $a3, 0xA8($a0)
    ctx->pc = 0x2d6b50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x2d6b54: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d6b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d6b58: 0x84235f78  lh          $v1, 0x5F78($at)
    ctx->pc = 0x2d6b58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 24440)));
    // 0x2d6b5c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2d6b5cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2d6b60: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2d6b60u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2d6b64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d6b64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b68: 0x24a55f74  addiu       $a1, $a1, 0x5F74
    ctx->pc = 0x2d6b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24436));
    // 0x2d6b6c: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d6b6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d6b70: 0x107001a  div         $zero, $t0, $a3
    ctx->pc = 0x2d6b70u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d6b74: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6b78: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d6b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d6b7c: 0x84225f7a  lh          $v0, 0x5F7A($at)
    ctx->pc = 0x2d6b7cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5F7Au));
    // 0x2d6b80: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d6b80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d6b84: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d6b84u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d6b88: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6b8c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d6b90: 0x84295f7e  lh          $t1, 0x5F7E($at)
    ctx->pc = 0x2d6b90u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5F7Eu));
    // 0x2d6b94: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6b98: 0x8c2a5f74  lw          $t2, 0x5F74($at)
    ctx->pc = 0x2d6b98u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5F74u));
    // 0x2d6b9c: 0x4010  mfhi        $t0
    ctx->pc = 0x2d6b9cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x2d6ba0: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d6ba0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6ba4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2d6ba4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2d6ba8: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2d6ba8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6bac: 0x0  nop
    ctx->pc = 0x2d6bacu;
    // NOP
    // 0x2d6bb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d6bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d6bb4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2d6bb4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d6bb8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d6bb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d6bbc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2d6bbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d6bc0: 0x0  nop
    ctx->pc = 0x2d6bc0u;
    // NOP
    // 0x2d6bc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d6bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d6bc8: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2d6bc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6bcc: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D6BCCu;
    SET_GPR_U32(ctx, 31, 0x2D6BD4u);
    ctx->pc = 0x2D6BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6BCCu;
    // 0x2d6bd0: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D6BCCu, 0x2D6BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6BD4u;
label_2d6bd4:
    // 0x2d6bd4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6bd8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d6bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d6bdc: 0x84235af4  lh          $v1, 0x5AF4($at)
    ctx->pc = 0x2d6bdcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E5AF4u));
    // 0x2d6be0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d6be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6be4: 0x24a55af0  addiu       $a1, $a1, 0x5AF0
    ctx->pc = 0x2d6be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23280));
    // 0x2d6be8: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d6be8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d6bec: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6bf0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d6bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d6bf4: 0x84225af6  lh          $v0, 0x5AF6($at)
    ctx->pc = 0x2d6bf4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5AF6u));
    // 0x2d6bf8: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d6bf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d6bfc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d6bfcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d6c00: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6c04: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d6c08: 0x84285af8  lh          $t0, 0x5AF8($at)
    ctx->pc = 0x2d6c08u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E5AF8u));
    // 0x2d6c0c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d6c0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6c10: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6c14: 0x84295afa  lh          $t1, 0x5AFA($at)
    ctx->pc = 0x2d6c14u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5AFAu));
    // 0x2d6c18: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6c1c: 0x8c2a5af0  lw          $t2, 0x5AF0($at)
    ctx->pc = 0x2d6c1cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5AF0u));
    // 0x2d6c20: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D6C20u;
    SET_GPR_U32(ctx, 31, 0x2D6C28u);
    ctx->pc = 0x2D6C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6C20u;
    // 0x2d6c24: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D6C20u, 0x2D6C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C28u;
label_2d6c28:
    // 0x2d6c28: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6c2c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d6c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d6c30: 0x84235b10  lh          $v1, 0x5B10($at)
    ctx->pc = 0x2d6c30u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E5B10u));
    // 0x2d6c34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d6c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c38: 0x24a55b0c  addiu       $a1, $a1, 0x5B0C
    ctx->pc = 0x2d6c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23308));
    // 0x2d6c3c: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d6c3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d6c40: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6c44: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d6c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d6c48: 0x84225b12  lh          $v0, 0x5B12($at)
    ctx->pc = 0x2d6c48u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5B12u));
    // 0x2d6c4c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d6c4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d6c50: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d6c50u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d6c54: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6c58: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d6c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d6c5c: 0x84285b14  lh          $t0, 0x5B14($at)
    ctx->pc = 0x2d6c5cu;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E5B14u));
    // 0x2d6c60: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d6c60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6c64: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6c68: 0x84295b16  lh          $t1, 0x5B16($at)
    ctx->pc = 0x2d6c68u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5B16u));
    // 0x2d6c6c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6c70: 0x8c2a5b0c  lw          $t2, 0x5B0C($at)
    ctx->pc = 0x2d6c70u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5B0Cu));
    // 0x2d6c74: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D6C74u;
    SET_GPR_U32(ctx, 31, 0x2D6C7Cu);
    ctx->pc = 0x2D6C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6C74u;
    // 0x2d6c78: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D6C74u, 0x2D6C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C7Cu;
label_2d6c7c:
    // 0x2d6c7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d6c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6c80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d6c80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6c84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d6c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d6c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C8Cu;
        // 0x2d6c90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6C94u;
}

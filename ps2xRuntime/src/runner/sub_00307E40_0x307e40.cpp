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

// Function: sub_00307E40
// Address: 0x307e40 - 0x308290
void sub_00307E40_0x307e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307E40_0x307e40");
#endif

    switch (ctx->pc) {
        case 0x307e7cu: goto label_307e7c;
        case 0x307ea0u: goto label_307ea0;
        case 0x307eb4u: goto label_307eb4;
        case 0x307ec0u: goto label_307ec0;
        case 0x307ed8u: goto label_307ed8;
        case 0x307eecu: goto label_307eec;
        case 0x307efcu: goto label_307efc;
        case 0x307fb8u: goto label_307fb8;
        case 0x307fc0u: goto label_307fc0;
        case 0x307fd8u: goto label_307fd8;
        case 0x307ff4u: goto label_307ff4;
        case 0x308038u: goto label_308038;
        case 0x30804cu: goto label_30804c;
        case 0x308064u: goto label_308064;
        case 0x308080u: goto label_308080;
        case 0x308088u: goto label_308088;
        case 0x3080acu: goto label_3080ac;
        case 0x3080dcu: goto label_3080dc;
        case 0x30811cu: goto label_30811c;
        case 0x3081ccu: goto label_3081cc;
        case 0x3081e8u: goto label_3081e8;
        case 0x308200u: goto label_308200;
        case 0x308224u: goto label_308224;
        case 0x308244u: goto label_308244;
        case 0x308260u: goto label_308260;
        default: break;
    }

    ctx->pc = 0x307e40u;

    // 0x307e40: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x307e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x307e44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x307e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x307e48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x307e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x307e4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x307e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x307e50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x307e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x307e54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x307e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x307e58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x307e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x307e5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x307e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x307e60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x307e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x307e64: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x307e64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307e68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x307e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x307e6c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x307e6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307e70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x307e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x307e74: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x307E74u;
    SET_GPR_U32(ctx, 31, 0x307E7Cu);
    ctx->pc = 0x307E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E74u;
    // 0x307e78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x307E74u, 0x307E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E7Cu;
label_307e7c:
    // 0x307e7c: 0x938582b0  lbu         $a1, -0x7D50($gp)
    ctx->pc = 0x307e7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935216)));
    // 0x307e80: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x307e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x307e84: 0x938682b1  lbu         $a2, -0x7D4F($gp)
    ctx->pc = 0x307e84u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935217)));
    // 0x307e88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x307e88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307e8c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x307e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x307e90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x307e90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307e94: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x307e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x307e98: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x307E98u;
    SET_GPR_U32(ctx, 31, 0x307EA0u);
    ctx->pc = 0x307E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E98u;
    // 0x307e9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x307E98u, 0x307EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307EA0u;
label_307ea0:
    // 0x307ea0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x307ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x307ea4: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x307ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x307ea8: 0xdc265ae8  ld          $a2, 0x5AE8($at)
    ctx->pc = 0x307ea8u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x665AE8u));
    // 0x307eac: 0xc074648  jal         func_1D1920
    ctx->pc = 0x307EACu;
    SET_GPR_U32(ctx, 31, 0x307EB4u);
    ctx->pc = 0x307EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307EACu;
    // 0x307eb0: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x307EACu, 0x307EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307EB4u;
label_307eb4:
    // 0x307eb4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x307eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x307eb8: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x307EB8u;
    SET_GPR_U32(ctx, 31, 0x307EC0u);
    ctx->pc = 0x307EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307EB8u;
    // 0x307ebc: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x307EB8u, 0x307EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307EC0u;
label_307ec0:
    // 0x307ec0: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x307ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x307ec4: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x307ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x307ec8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x307ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x307ecc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x307eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ed0: 0xc074648  jal         func_1D1920
    ctx->pc = 0x307ED0u;
    SET_GPR_U32(ctx, 31, 0x307ED8u);
    ctx->pc = 0x307ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307ED0u;
    // 0x307ed4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x307ED0u, 0x307ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307ED8u;
label_307ed8:
    // 0x307ed8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x307ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x307edc: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x307edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x307ee0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x307ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x307ee4: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x307EE4u;
    SET_GPR_U32(ctx, 31, 0x307EECu);
    ctx->pc = 0x307EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307EE4u;
    // 0x307ee8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x307EE4u, 0x307EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307EECu;
label_307eec:
    // 0x307eec: 0x26040378  addiu       $a0, $s0, 0x378
    ctx->pc = 0x307eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 888));
    // 0x307ef0: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x307ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x307ef4: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x307EF4u;
    SET_GPR_U32(ctx, 31, 0x307EFCu);
    ctx->pc = 0x307EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307EF4u;
    // 0x307ef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x307EF4u, 0x307EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307EFCu;
label_307efc:
    // 0x307efc: 0x13243c  dsll32      $a0, $s3, 16
    ctx->pc = 0x307efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 16));
    // 0x307f00: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x307f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x307f04: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x307f04u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x307f08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x307f08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x307f0c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x307f0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x307f10: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x307f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x307f14: 0x782cc880  lq          $t4, -0x3780($at)
    ctx->pc = 0x307f14u;
    SET_GPR_VEC(ctx, 12, FAST_READ128(0x67C880u));
    // 0x307f18: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x307f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x307f1c: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x307f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x307f20: 0x27a901a0  addiu       $t1, $sp, 0x1A0
    ctx->pc = 0x307f20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x307f24: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x307f24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x307f28: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x307f28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x307f2c: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x307f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x307f30: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x307f30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x307f34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x307f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x307f38: 0x8fa80184  lw          $t0, 0x184($sp)
    ctx->pc = 0x307f38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x307f3c: 0x41a03  sra         $v1, $a0, 8
    ctx->pc = 0x307f3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 8));
    // 0x307f40: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x307f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x307f44: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x307f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x307f48: 0x8c2bc88c  lw          $t3, -0x3774($at)
    ctx->pc = 0x307f48u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953100)));
    // 0x307f4c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x307f4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x307f50: 0x7fac01a0  sq          $t4, 0x1A0($sp)
    ctx->pc = 0x307f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 12));
    // 0x307f54: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x307f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x307f58: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x307f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x307f5c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x307f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x307f60: 0x44838800  mtc1        $v1, $f17
    ctx->pc = 0x307f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x307f64: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x307f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x307f68: 0x46008c86  mov.s       $f18, $f17
    ctx->pc = 0x307f68u;
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    // 0x307f6c: 0x1631818  mult        $v1, $t3, $v1
    ctx->pc = 0x307f6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x307f70: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x307f70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x307f74: 0xafa301ac  sw          $v1, 0x1AC($sp)
    ctx->pc = 0x307f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 3));
    // 0x307f78: 0x844c0008  lh          $t4, 0x8($v0)
    ctx->pc = 0x307f78u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x307f7c: 0x844b000a  lh          $t3, 0xA($v0)
    ctx->pc = 0x307f7cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x307f80: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x307f80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307f84: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x307f84u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x307f88: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x307f88u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307f8c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x307f8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x307f90: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x307f90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x307f94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x307f94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x307f98: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x307f98u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x307f9c: 0x46011303  div.s       $f12, $f2, $f1
    ctx->pc = 0x307f9cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x307fa0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x307fa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x307fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x307fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307fa8: 0x0  nop
    ctx->pc = 0x307fa8u;
    // NOP
    // 0x307fac: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x307facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x307fb0: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x307FB0u;
    SET_GPR_U32(ctx, 31, 0x307FB8u);
    ctx->pc = 0x307FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307FB0u;
    // 0x307fb4: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x307FB0u, 0x307FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307FB8u;
label_307fb8:
    // 0x307fb8: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x307FB8u;
    SET_GPR_U32(ctx, 31, 0x307FC0u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x307FB8u, 0x307FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307FC0u;
label_307fc0:
    // 0x307fc0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x307fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x307fc4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x307fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x307fc8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x307fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x307fcc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x307fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x307fd0: 0xc09e644  jal         func_279910
    ctx->pc = 0x307FD0u;
    SET_GPR_U32(ctx, 31, 0x307FD8u);
    ctx->pc = 0x307FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307FD0u;
    // 0x307fd4: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279910u, 0x307FD0u, 0x307FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307FD8u;
label_307fd8:
    // 0x307fd8: 0x938582a4  lbu         $a1, -0x7D5C($gp)
    ctx->pc = 0x307fd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935204)));
    // 0x307fdc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x307fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x307fe0: 0x938682a5  lbu         $a2, -0x7D5B($gp)
    ctx->pc = 0x307fe0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935205)));
    // 0x307fe4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x307fe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307fe8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x307fe8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307fec: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x307FECu;
    SET_GPR_U32(ctx, 31, 0x307FF4u);
    ctx->pc = 0x307FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307FECu;
    // 0x307ff0: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x307FECu, 0x307FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307FF4u;
label_307ff4:
    // 0x307ff4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x307ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x307ff8: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x307ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x307ffc: 0x92060374  lbu         $a2, 0x374($s0)
    ctx->pc = 0x307ffcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x308000: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x308000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x308004: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x308004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x308008: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x308008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30800c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x30800cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x308010: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x308010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x308014: 0x2463c870  addiu       $v1, $v1, -0x3790
    ctx->pc = 0x308014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953072));
    // 0x308018: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x308018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x30801c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x30801cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x308020: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x308020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x308024: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x308024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x308028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30802c: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x30802cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x308030: 0xc074648  jal         func_1D1920
    ctx->pc = 0x308030u;
    SET_GPR_U32(ctx, 31, 0x308038u);
    ctx->pc = 0x308034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308030u;
    // 0x308034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x308030u, 0x308038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308038u;
label_308038:
    // 0x308038: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x308038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30803c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x30803cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x308040: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x308040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x308044: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x308044u;
    SET_GPR_U32(ctx, 31, 0x30804Cu);
    ctx->pc = 0x308048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308044u;
    // 0x308048: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x308044u, 0x30804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30804Cu;
label_30804c:
    // 0x30804c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x30804cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x308050: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x308050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x308054: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x308054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308058: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x308058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30805c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x30805Cu;
    SET_GPR_U32(ctx, 31, 0x308064u);
    ctx->pc = 0x308060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30805Cu;
    // 0x308060: 0x2232021  addu        $a0, $s1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x30805Cu, 0x308064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308064u;
label_308064:
    // 0x308064: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x308064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x308068: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x308068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30806c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x30806cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x308070: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x308070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x308074: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x308074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x308078: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x308078u;
    SET_GPR_U32(ctx, 31, 0x308080u);
    ctx->pc = 0x30807Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308078u;
    // 0x30807c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x308078u, 0x308080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308080u;
label_308080:
    // 0x308080: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x308080u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308084: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x308084u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_308088:
    // 0x308088: 0x87c30090  lh          $v1, 0x90($fp)
    ctx->pc = 0x308088u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 144)));
    // 0x30808c: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x30808cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x308090: 0x1062004f  beq         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x308090u;
    {
        const bool branch_taken_0x308090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x308094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308090u;
        // 0x308094: 0x27d40070  addiu       $s4, $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308090) {
            ctx->pc = 0x3081D0u;
            goto label_3081d0;
        }
    }
    ctx->pc = 0x308098u;
    // 0x308098: 0x92860024  lbu         $a2, 0x24($s4)
    ctx->pc = 0x308098u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x30809c: 0x14c0000c  bnez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x30809Cu;
    {
        const bool branch_taken_0x30809c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3080A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30809Cu;
        // 0x3080a0: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30809c) {
            ctx->pc = 0x3080D0u;
            goto label_3080d0;
        }
    }
    ctx->pc = 0x3080A4u;
    // 0x3080a4: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x3080A4u;
    SET_GPR_U32(ctx, 31, 0x3080ACu);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x3080A4u, 0x3080ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3080ACu;
label_3080ac:
    // 0x3080ac: 0x94530004  lhu         $s3, 0x4($v0)
    ctx->pc = 0x3080acu;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3080b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3080b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3080b4: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x3080b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3080b8: 0x94520006  lhu         $s2, 0x6($v0)
    ctx->pc = 0x3080b8u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x3080bc: 0x263b021  addu        $s6, $s3, $v1
    ctx->pc = 0x3080bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x3080c0: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x3080c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x3080c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3080C4u;
    {
        const bool branch_taken_0x3080c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3080C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080C4u;
        // 0x3080c8: 0x242b821  addu        $s7, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080c4) {
            ctx->pc = 0x308100u;
            goto label_308100;
        }
    }
    ctx->pc = 0x3080CCu;
    // 0x3080cc: 0x0  nop
    ctx->pc = 0x3080ccu;
    // NOP
label_3080d0:
    // 0x3080d0: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x3080d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x3080d4: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x3080D4u;
    SET_GPR_U32(ctx, 31, 0x3080DCu);
    ctx->pc = 0x3080D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3080D4u;
    // 0x3080d8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x3080D4u, 0x3080DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3080DCu;
label_3080dc:
    // 0x3080dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3080dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3080e0: 0x8fb300e0  lw          $s3, 0xE0($sp)
    ctx->pc = 0x3080e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3080e4: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x3080e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x3080e8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3080e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3080ec: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x3080ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3080f0: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x3080f0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3080f4: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x3080f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x3080f8: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x3080f8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3080fc: 0x0  nop
    ctx->pc = 0x3080fcu;
    // NOP
label_308100:
    // 0x308100: 0x92030374  lbu         $v1, 0x374($s0)
    ctx->pc = 0x308100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x308104: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x308104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x308108: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x308108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x30810c: 0x2442c830  addiu       $v0, $v0, -0x37D0
    ctx->pc = 0x30810cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953008));
    // 0x308110: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x308110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x308114: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x308114u;
    SET_GPR_U32(ctx, 31, 0x30811Cu);
    ctx->pc = 0x308118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308114u;
    // 0x308118: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x308114u, 0x30811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30811Cu;
label_30811c:
    // 0x30811c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x30811cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x308120: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x308120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x308124: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x308124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x308128: 0x868c0022  lh          $t4, 0x22($s4)
    ctx->pc = 0x308128u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x30812c: 0x920b0374  lbu         $t3, 0x374($s0)
    ctx->pc = 0x30812cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x308130: 0x2463c830  addiu       $v1, $v1, -0x37D0
    ctx->pc = 0x308130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953008));
    // 0x308134: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x308134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x308138: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x308138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x30813c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30813cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308140: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x308140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308144: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x308144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308148: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x308148u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30814c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30814cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308150: 0x27a90130  addiu       $t1, $sp, 0x130
    ctx->pc = 0x308150u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x308154: 0x27aa0120  addiu       $t2, $sp, 0x120
    ctx->pc = 0x308154u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x308158: 0x1826018  mult        $t4, $t4, $v0
    ctx->pc = 0x308158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x30815c: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x30815cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x308160: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x308160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x308164: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x308164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x308168: 0xc1a03  sra         $v1, $t4, 8
    ctx->pc = 0x308168u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 12), 8));
    // 0x30816c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30816cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x308170: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x308170u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x308174: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x308174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x308178: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x308178u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x30817c: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x30817cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x308180: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x308180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x308184: 0x862c0008  lh          $t4, 0x8($s1)
    ctx->pc = 0x308184u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x308188: 0xc6910028  lwc1        $f17, 0x28($s4)
    ctx->pc = 0x308188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x30818c: 0x862b000a  lh          $t3, 0xA($s1)
    ctx->pc = 0x30818cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x308190: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x308190u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x308194: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x308194u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x308198: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x308198u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30819c: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x30819cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3081a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3081a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3081a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3081a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3081a8: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x3081a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3081ac: 0x46011303  div.s       $f12, $f2, $f1
    ctx->pc = 0x3081acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3081b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3081b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3081b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3081b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3081b8: 0x0  nop
    ctx->pc = 0x3081b8u;
    // NOP
    // 0x3081bc: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x3081bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x3081c0: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x3081c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x3081c4: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x3081C4u;
    SET_GPR_U32(ctx, 31, 0x3081CCu);
    ctx->pc = 0x3081C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3081C4u;
    // 0x3081c8: 0x46008c86  mov.s       $f18, $f17 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x3081C4u, 0x3081CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3081CCu;
label_3081cc:
    // 0x3081cc: 0x0  nop
    ctx->pc = 0x3081ccu;
    // NOP
label_3081d0:
    // 0x3081d0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3081d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3081d4: 0x2aa20010  slti        $v0, $s5, 0x10
    ctx->pc = 0x3081d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3081d8: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x3081D8u;
    {
        const bool branch_taken_0x3081d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3081DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081D8u;
        // 0x3081dc: 0x27de0030  addiu       $fp, $fp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081d8) {
            ctx->pc = 0x308088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308088;
        }
    }
    ctx->pc = 0x3081E0u;
    // 0x3081e0: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x3081E0u;
    SET_GPR_U32(ctx, 31, 0x3081E8u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x3081E0u, 0x3081E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3081E8u;
label_3081e8:
    // 0x3081e8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x3081e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3081ec: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3081ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3081f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3081f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3081f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3081f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3081f8: 0xc074138  jal         func_1D04E0
    ctx->pc = 0x3081F8u;
    SET_GPR_U32(ctx, 31, 0x308200u);
    ctx->pc = 0x3081FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3081F8u;
    // 0x3081fc: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E0u, 0x3081F8u, 0x308200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308200u;
label_308200:
    // 0x308200: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x308200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x308204: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x308204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x308208: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x308208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30820c: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x30820cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x308210: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x308210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x308214: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x308214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x308218: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x308218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30821c: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x30821Cu;
    SET_GPR_U32(ctx, 31, 0x308224u);
    ctx->pc = 0x308220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30821Cu;
    // 0x308220: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x30821Cu, 0x308224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308224u;
label_308224:
    // 0x308224: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x308224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x308228: 0x38283  sra         $s0, $v1, 10
    ctx->pc = 0x308228u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 10));
    // 0x30822c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x30822cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x308230: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x308230u;
    {
        const bool branch_taken_0x308230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308230) {
            ctx->pc = 0x308260u;
            goto label_308260;
        }
    }
    ctx->pc = 0x308238u;
    // 0x308238: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x308238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x30823c: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x30823Cu;
    SET_GPR_U32(ctx, 31, 0x308244u);
    ctx->pc = 0x308240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30823Cu;
    // 0x308240: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x30823Cu, 0x308244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308244u;
label_308244:
    // 0x308244: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x308244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x308248: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x308248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x30824c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30824cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x308250: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x308250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x308254: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x308254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x308258: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x308258u;
    SET_GPR_U32(ctx, 31, 0x308260u);
    ctx->pc = 0x30825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308258u;
    // 0x30825c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x308258u, 0x308260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308260u;
label_308260:
    // 0x308260: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x308260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x308264: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x308264u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x308268: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x308268u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30826c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x30826cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x308270: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x308270u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x308274: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x308274u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x308278: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x308278u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30827c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30827cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308280: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x308280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x308284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308288: 0x3e00008  jr          $ra
    ctx->pc = 0x308288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308288u;
        // 0x30828c: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308290u;
}

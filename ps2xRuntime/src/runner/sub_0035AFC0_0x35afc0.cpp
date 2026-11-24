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

// Function: sub_0035AFC0
// Address: 0x35afc0 - 0x35b25c
void sub_0035AFC0_0x35afc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AFC0_0x35afc0");
#endif

    switch (ctx->pc) {
        case 0x35b03cu: goto label_35b03c;
        case 0x35b044u: goto label_35b044;
        case 0x35b088u: goto label_35b088;
        case 0x35b0e4u: goto label_35b0e4;
        case 0x35b140u: goto label_35b140;
        case 0x35b14cu: goto label_35b14c;
        case 0x35b160u: goto label_35b160;
        case 0x35b170u: goto label_35b170;
        case 0x35b178u: goto label_35b178;
        case 0x35b1c0u: goto label_35b1c0;
        case 0x35b1dcu: goto label_35b1dc;
        case 0x35b220u: goto label_35b220;
        case 0x35b234u: goto label_35b234;
        default: break;
    }

    ctx->pc = 0x35afc0u;

    // 0x35afc0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x35afc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x35afc4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x35afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x35afc8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x35afc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x35afcc: 0x24428600  addiu       $v0, $v0, -0x7A00
    ctx->pc = 0x35afccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936064));
    // 0x35afd0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35afd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x35afd4: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x35afd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x35afd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35afd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35afdc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x35afdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35afe0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35afe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35afe4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x35afe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35afe8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35afe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35afec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x35afecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aff0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35aff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35aff4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x35aff4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35aff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35affc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x35affcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b000: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x35b000u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x658600u));
    // 0x35b004: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x35b004u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x35b008: 0x24c68610  addiu       $a2, $a2, -0x79F0
    ctx->pc = 0x35b008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936080));
    // 0x35b00c: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x35b00cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x35b010: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x35b010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x35b014: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35b014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b018: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35b018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b01c: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x35b01cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x35b020: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x35b020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x35b024: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x35b024u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x658610u));
    // 0x35b028: 0x24428620  addiu       $v0, $v0, -0x79E0
    ctx->pc = 0x35b028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936096));
    // 0x35b02c: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x35b02cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x35b030: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x35b030u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x658620u));
    // 0x35b034: 0xc041472  jal         func_1051C8
    ctx->pc = 0x35B034u;
    SET_GPR_U32(ctx, 31, 0x35B03Cu);
    ctx->pc = 0x35B038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B034u;
    // 0x35b038: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x35B034u, 0x35B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B03Cu;
label_35b03c:
    // 0x35b03c: 0xc0967ac  jal         func_259EB0
    ctx->pc = 0x35B03Cu;
    SET_GPR_U32(ctx, 31, 0x35B044u);
    ctx->pc = 0x35B040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B03Cu;
    // 0x35b040: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EB0u, 0x35B03Cu, 0x35B044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B044u;
label_35b044:
    // 0x35b044: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x35b044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x35b048: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x35b048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x35b04c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x35b04cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35b050: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x35b050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x35b054: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x35b054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35b058: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x35b058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x35b05c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x35b05cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x35b060: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x35b060u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x35b064: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35b064u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x35b068: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x35b068u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x35b06c: 0x0  nop
    ctx->pc = 0x35b06cu;
    // NOP
    // 0x35b070: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35b070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35b074: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35b074u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35b078: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x35b078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x35b07c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x35b07cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35b080: 0xc0967ac  jal         func_259EB0
    ctx->pc = 0x35B080u;
    SET_GPR_U32(ctx, 31, 0x35B088u);
    ctx->pc = 0x35B084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B080u;
    // 0x35b084: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EB0u, 0x35B080u, 0x35B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B088u;
label_35b088:
    // 0x35b088: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x35b088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x35b08c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x35b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x35b090: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x35b090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35b094: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x35b094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x35b098: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x35b098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35b09c: 0x0  nop
    ctx->pc = 0x35b09cu;
    // NOP
    // 0x35b0a0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x35b0a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x35b0a4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x35b0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x35b0a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35b0a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35b0ac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x35b0acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x35b0b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35b0b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x35b0b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x35b0b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x35b0b8: 0x0  nop
    ctx->pc = 0x35b0b8u;
    // NOP
    // 0x35b0bc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x35b0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x35b0c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35b0c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35b0c4: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x35b0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x35b0c8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x35b0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x35b0cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35b0ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35b0d0: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x35B0D0u;
    {
        const bool branch_taken_0x35b0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x35B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B0D0u;
        // 0x35b0d4: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b0d0) {
            ctx->pc = 0x35B150u;
            goto label_35b150;
        }
    }
    ctx->pc = 0x35B0D8u;
    // 0x35b0d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x35b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x35b0dc: 0xc0967ac  jal         func_259EB0
    ctx->pc = 0x35B0DCu;
    SET_GPR_U32(ctx, 31, 0x35B0E4u);
    ctx->pc = 0x35B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B0DCu;
    // 0x35b0e0: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EB0u, 0x35B0DCu, 0x35B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B0E4u;
label_35b0e4:
    // 0x35b0e4: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x35b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x35b0e8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x35b0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x35b0ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35b0ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35b0f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35b0f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35b0f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x35b0f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35b0f8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x35b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x35b0fc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x35b0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x35b100: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35b100u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35b104: 0x0  nop
    ctx->pc = 0x35b104u;
    // NOP
    // 0x35b108: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x35b108u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x35b10c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35b10cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x35b110: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x35b110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x35b114: 0x0  nop
    ctx->pc = 0x35b114u;
    // NOP
    // 0x35b118: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x35b118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x35b11c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35b11cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35b120: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x35b120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x35b124: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x35b124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x35b128: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35b128u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35b12c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35B12Cu;
    {
        const bool branch_taken_0x35b12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x35B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B12Cu;
        // 0x35b130: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b12c) {
            ctx->pc = 0x35B150u;
            goto label_35b150;
        }
    }
    ctx->pc = 0x35B134u;
    // 0x35b134: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35b134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b138: 0xc041460  jal         func_105180
    ctx->pc = 0x35B138u;
    SET_GPR_U32(ctx, 31, 0x35B140u);
    ctx->pc = 0x35B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B138u;
    // 0x35b13c: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x35B138u, 0x35B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B140u;
label_35b140:
    // 0x35b140: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x35b140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x35b144: 0xc041472  jal         func_1051C8
    ctx->pc = 0x35B144u;
    SET_GPR_U32(ctx, 31, 0x35B14Cu);
    ctx->pc = 0x35B148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B144u;
    // 0x35b148: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x35B144u, 0x35B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B14Cu;
label_35b14c:
    // 0x35b14c: 0x0  nop
    ctx->pc = 0x35b14cu;
    // NOP
label_35b150:
    // 0x35b150: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35b150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b154: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x35b154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x35b158: 0xc041460  jal         func_105180
    ctx->pc = 0x35B158u;
    SET_GPR_U32(ctx, 31, 0x35B160u);
    ctx->pc = 0x35B15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B158u;
    // 0x35b15c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x35B158u, 0x35B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B160u;
label_35b160:
    // 0x35b160: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x35b160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x35b164: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x35b164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x35b168: 0xc041460  jal         func_105180
    ctx->pc = 0x35B168u;
    SET_GPR_U32(ctx, 31, 0x35B170u);
    ctx->pc = 0x35B16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B168u;
    // 0x35b16c: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x35B168u, 0x35B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B170u;
label_35b170:
    // 0x35b170: 0xc04150c  jal         func_105430
    ctx->pc = 0x35B170u;
    SET_GPR_U32(ctx, 31, 0x35B178u);
    ctx->pc = 0x35B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B170u;
    // 0x35b174: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x35B170u, 0x35B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B178u;
label_35b178:
    // 0x35b178: 0x26890040  addiu       $t1, $s4, 0x40
    ctx->pc = 0x35b178u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x35b17c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x35b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x35b180: 0x784a0000  lq          $t2, 0x0($v0)
    ctx->pc = 0x35b180u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b184: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35b184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b188: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x35b188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x35b18c: 0x26880050  addiu       $t0, $s4, 0x50
    ctx->pc = 0x35b18cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x35b190: 0x26830060  addiu       $v1, $s4, 0x60
    ctx->pc = 0x35b190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x35b194: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x35b194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b198: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x35b198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x35b19c: 0x26850040  addiu       $a1, $s4, 0x40
    ctx->pc = 0x35b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x35b1a0: 0x7d2a0000  sq          $t2, 0x0($t1)
    ctx->pc = 0x35b1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 10));
    // 0x35b1a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b1a8: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x35b1a8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x35b1ac: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x35b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x35b1b0: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x35b1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x35b1b4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x35b1b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b1b8: 0xc0414e2  jal         func_105388
    ctx->pc = 0x35B1B8u;
    SET_GPR_U32(ctx, 31, 0x35B1C0u);
    ctx->pc = 0x35B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B1B8u;
    // 0x35b1bc: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105388u, 0x35B1B8u, 0x35B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B1C0u;
label_35b1c0:
    // 0x35b1c0: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x35b1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x35b1c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b1c8: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x35B1C8u;
    {
        const bool branch_taken_0x35b1c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B1C8u;
        // 0x35b1cc: 0x26840030  addiu       $a0, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b1c8) {
            ctx->pc = 0x35B228u;
            goto label_35b228;
        }
    }
    ctx->pc = 0x35B1D0u;
    // 0x35b1d0: 0x268600c0  addiu       $a2, $s4, 0xC0
    ctx->pc = 0x35b1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x35b1d4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x35B1D4u;
    SET_GPR_U32(ctx, 31, 0x35B1DCu);
    ctx->pc = 0x35B1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B1D4u;
    // 0x35b1d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x35B1D4u, 0x35B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B1DCu;
label_35b1dc:
    // 0x35b1dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x35b1e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35b1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35b1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35b1e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x35b1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b1ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35b1ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35b1f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b1f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b1f4: 0xe680003c  swc1        $f0, 0x3C($s4)
    ctx->pc = 0x35b1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
    // 0x35b1f8: 0x26820080  addiu       $v0, $s4, 0x80
    ctx->pc = 0x35b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x35b1fc: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x35b1fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x35b200: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x35b200u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x35b204: 0x7a830010  lq          $v1, 0x10($s4)
    ctx->pc = 0x35b204u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x35b208: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x35b208u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x35b20c: 0x7a830020  lq          $v1, 0x20($s4)
    ctx->pc = 0x35b20cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x35b210: 0x7c430020  sq          $v1, 0x20($v0)
    ctx->pc = 0x35b210u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 3));
    // 0x35b214: 0x7a830030  lq          $v1, 0x30($s4)
    ctx->pc = 0x35b214u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x35b218: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x35B218u;
    SET_GPR_U32(ctx, 31, 0x35B220u);
    ctx->pc = 0x35B21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B218u;
    // 0x35b21c: 0x7c430030  sq          $v1, 0x30($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x35B218u, 0x35B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B220u;
label_35b220:
    // 0x35b220: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x35B220u;
    {
        const bool branch_taken_0x35b220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b220) {
            ctx->pc = 0x35B238u;
            goto label_35b238;
        }
    }
    ctx->pc = 0x35B228u;
label_35b228:
    // 0x35b228: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35b228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b22c: 0xc0d6bdc  jal         func_35AF70
    ctx->pc = 0x35B22Cu;
    SET_GPR_U32(ctx, 31, 0x35B234u);
    ctx->pc = 0x35B230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B22Cu;
    // 0x35b230: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AF70u, 0x35B22Cu, 0x35B234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B234u;
label_35b234:
    // 0x35b234: 0x0  nop
    ctx->pc = 0x35b234u;
    // NOP
label_35b238:
    // 0x35b238: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x35b238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35b23c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35b23cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35b240: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35b240u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35b244: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35b244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35b248: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35b248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b24c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35b24cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35b250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b254: 0x3e00008  jr          $ra
    ctx->pc = 0x35B254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B254u;
        // 0x35b258: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B25Cu;
}

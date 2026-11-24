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

// Function: sub_0036BCF0
// Address: 0x36bcf0 - 0x36c118
void sub_0036BCF0_0x36bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BCF0_0x36bcf0");
#endif

    switch (ctx->pc) {
        case 0x36bd34u: goto label_36bd34;
        case 0x36bd50u: goto label_36bd50;
        case 0x36bd58u: goto label_36bd58;
        case 0x36bd88u: goto label_36bd88;
        case 0x36bd98u: goto label_36bd98;
        case 0x36bdd4u: goto label_36bdd4;
        case 0x36bde4u: goto label_36bde4;
        case 0x36bdfcu: goto label_36bdfc;
        case 0x36be08u: goto label_36be08;
        case 0x36be10u: goto label_36be10;
        case 0x36be1cu: goto label_36be1c;
        case 0x36bee8u: goto label_36bee8;
        case 0x36bef8u: goto label_36bef8;
        case 0x36bf08u: goto label_36bf08;
        case 0x36bf1cu: goto label_36bf1c;
        case 0x36bf40u: goto label_36bf40;
        case 0x36bfb0u: goto label_36bfb0;
        case 0x36bff4u: goto label_36bff4;
        case 0x36c008u: goto label_36c008;
        case 0x36c010u: goto label_36c010;
        case 0x36c040u: goto label_36c040;
        case 0x36c078u: goto label_36c078;
        case 0x36c080u: goto label_36c080;
        case 0x36c0dcu: goto label_36c0dc;
        case 0x36c0f0u: goto label_36c0f0;
        default: break;
    }

    ctx->pc = 0x36bcf0u;

    // 0x36bcf0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x36bcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x36bcf4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x36bcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x36bcf8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x36bcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x36bcfc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x36bcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x36bd00: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x36bd00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bd04: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x36bd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x36bd08: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x36bd08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bd0c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x36bd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x36bd10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x36bd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x36bd14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36bd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36bd18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36bd18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bd1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36bd1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bd20: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x36bd20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36bd24: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x36bd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x36bd28: 0x8e050518  lw          $a1, 0x518($s0)
    ctx->pc = 0x36bd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x36bd2c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x36BD2Cu;
    SET_GPR_U32(ctx, 31, 0x36BD34u);
    ctx->pc = 0x36BD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BD2Cu;
    // 0x36bd30: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x36BD2Cu, 0x36BD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BD34u;
label_36bd34:
    // 0x36bd34: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x36BD34u;
    {
        const bool branch_taken_0x36bd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BD34u;
        // 0x36bd38: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bd34) {
            ctx->pc = 0x36BF10u;
            goto label_36bf10;
        }
    }
    ctx->pc = 0x36BD3Cu;
    // 0x36bd3c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36bd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36bd40: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x36bd40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x36bd44: 0x260605a0  addiu       $a2, $s0, 0x5A0
    ctx->pc = 0x36bd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x36bd48: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x36BD48u;
    SET_GPR_U32(ctx, 31, 0x36BD50u);
    ctx->pc = 0x36BD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BD48u;
    // 0x36bd4c: 0x7e0205a0  sq          $v0, 0x5A0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 1440), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x36BD48u, 0x36BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BD50u;
label_36bd50:
    // 0x36bd50: 0xc096e44  jal         func_25B910
    ctx->pc = 0x36BD50u;
    SET_GPR_U32(ctx, 31, 0x36BD58u);
    ctx->pc = 0x36BD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BD50u;
    // 0x36bd54: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x36BD50u, 0x36BD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BD58u;
label_36bd58:
    // 0x36bd58: 0x920605e0  lbu         $a2, 0x5E0($s0)
    ctx->pc = 0x36bd58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1504)));
    // 0x36bd5c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x36bd5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36bd60: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x36bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x36bd64: 0x860405e2  lh          $a0, 0x5E2($s0)
    ctx->pc = 0x36bd64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1506)));
    // 0x36bd68: 0x244218b4  addiu       $v0, $v0, 0x18B4
    ctx->pc = 0x36bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6324));
    // 0x36bd6c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x36bd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x36bd70: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x36bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x36bd74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36bd74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36bd78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36bd7c: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x36bd7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36bd80: 0xc097498  jal         func_25D260
    ctx->pc = 0x36BD80u;
    SET_GPR_U32(ctx, 31, 0x36BD88u);
    ctx->pc = 0x36BD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BD80u;
    // 0x36bd84: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x36BD80u, 0x36BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BD88u;
label_36bd88:
    // 0x36bd88: 0xa60205e2  sh          $v0, 0x5E2($s0)
    ctx->pc = 0x36bd88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 2));
    // 0x36bd8c: 0x860505e2  lh          $a1, 0x5E2($s0)
    ctx->pc = 0x36bd8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1506)));
    // 0x36bd90: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x36BD90u;
    SET_GPR_U32(ctx, 31, 0x36BD98u);
    ctx->pc = 0x36BD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BD90u;
    // 0x36bd94: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x36BD90u, 0x36BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BD98u;
label_36bd98:
    // 0x36bd98: 0x920605e0  lbu         $a2, 0x5E0($s0)
    ctx->pc = 0x36bd98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1504)));
    // 0x36bd9c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x36bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x36bda0: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x36bda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x36bda4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x36bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x36bda8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36bda8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36bdac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36bdb0: 0x246318c0  addiu       $v1, $v1, 0x18C0
    ctx->pc = 0x36bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6336));
    // 0x36bdb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x36bdb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bdb8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x36bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x36bdbc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x36bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x36bdc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x36bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36bdc4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x36bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36bdc8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36bdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bdcc: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x36BDCCu;
    SET_GPR_U32(ctx, 31, 0x36BDD4u);
    ctx->pc = 0x36BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BDCCu;
    // 0x36bdd0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x36BDCCu, 0x36BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BDD4u;
label_36bdd4:
    // 0x36bdd4: 0x260405a0  addiu       $a0, $s0, 0x5A0
    ctx->pc = 0x36bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x36bdd8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x36bdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36bddc: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x36BDDCu;
    SET_GPR_U32(ctx, 31, 0x36BDE4u);
    ctx->pc = 0x36BDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BDDCu;
    // 0x36bde0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x36BDDCu, 0x36BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BDE4u;
label_36bde4:
    // 0x36bde4: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x36bde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bde8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36bde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36bdec: 0x260505a0  addiu       $a1, $s0, 0x5A0
    ctx->pc = 0x36bdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x36bdf0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x36bdf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bdf4: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x36BDF4u;
    SET_GPR_U32(ctx, 31, 0x36BDFCu);
    ctx->pc = 0x36BDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BDF4u;
    // 0x36bdf8: 0xe60005a4  swc1        $f0, 0x5A4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1444), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x36BDF4u, 0x36BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BDFCu;
label_36bdfc:
    // 0x36bdfc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36bdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36be00: 0xc07665c  jal         func_1D9970
    ctx->pc = 0x36BE00u;
    SET_GPR_U32(ctx, 31, 0x36BE08u);
    ctx->pc = 0x36BE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BE00u;
    // 0x36be04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9970u, 0x36BE00u, 0x36BE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE08u;
label_36be08:
    // 0x36be08: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x36BE08u;
    SET_GPR_U32(ctx, 31, 0x36BE10u);
    ctx->pc = 0x36BE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BE08u;
    // 0x36be0c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x36BE08u, 0x36BE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE10u;
label_36be10:
    // 0x36be10: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36be10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36be14: 0xc096e44  jal         func_25B910
    ctx->pc = 0x36BE14u;
    SET_GPR_U32(ctx, 31, 0x36BE1Cu);
    ctx->pc = 0x36BE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BE14u;
    // 0x36be18: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x36BE14u, 0x36BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE1Cu;
label_36be1c:
    // 0x36be1c: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x36be1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x36be20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x36be20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36be24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36be24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x36be28: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x36be28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36be2c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x36be2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36be30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36be30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x36be34: 0x28410801  slti        $at, $v0, 0x801
    ctx->pc = 0x36be34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x36be38: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BE38u;
    {
        const bool branch_taken_0x36be38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BE38u;
        // 0x36be3c: 0x2841f800  slti        $at, $v0, -0x800 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294965248) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36be38) {
            ctx->pc = 0x36BE48u;
            goto label_36be48;
        }
    }
    ctx->pc = 0x36BE40u;
    // 0x36be40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x36BE40u;
    {
        const bool branch_taken_0x36be40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BE40u;
        // 0x36be44: 0x2442f000  addiu       $v0, $v0, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36be40) {
            ctx->pc = 0x36BE58u;
            goto label_36be58;
        }
    }
    ctx->pc = 0x36BE48u;
label_36be48:
    // 0x36be48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BE48u;
    {
        const bool branch_taken_0x36be48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36be48) {
            ctx->pc = 0x36BE58u;
            goto label_36be58;
        }
    }
    ctx->pc = 0x36BE50u;
    // 0x36be50: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x36BE50u;
    {
        const bool branch_taken_0x36be50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BE50u;
        // 0x36be54: 0x24421000  addiu       $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36be50) {
            ctx->pc = 0x36BE58u;
            goto label_36be58;
        }
    }
    ctx->pc = 0x36BE58u;
label_36be58:
    // 0x36be58: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x36be58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36be5c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x36be5cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x36be60: 0x28a1fc01  slti        $at, $a1, -0x3FF
    ctx->pc = 0x36be60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966273) ? 1 : 0);
    // 0x36be64: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x36BE64u;
    {
        const bool branch_taken_0x36be64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36be64) {
            ctx->pc = 0x36BE70u;
            goto label_36be70;
        }
    }
    ctx->pc = 0x36BE6Cu;
    // 0x36be6c: 0x2405fc00  addiu       $a1, $zero, -0x400
    ctx->pc = 0x36be6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
label_36be70:
    // 0x36be70: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x36be70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x36be74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36be74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x36be78: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x36be78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x36be7c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36BE7Cu;
    {
        const bool branch_taken_0x36be7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36be7c) {
            ctx->pc = 0x36BE88u;
            goto label_36be88;
        }
    }
    ctx->pc = 0x36BE84u;
    // 0x36be84: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x36be84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_36be88:
    // 0x36be88: 0x920405e0  lbu         $a0, 0x5E0($s0)
    ctx->pc = 0x36be88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1504)));
    // 0x36be8c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x36be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x36be90: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x36be90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36be94: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x36be94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x36be98: 0x244218bc  addiu       $v0, $v0, 0x18BC
    ctx->pc = 0x36be98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6332));
    // 0x36be9c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x36be9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36bea0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36bea4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36bea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36beac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36beacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36beb0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x36beb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36beb4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x36BEB4u;
    {
        const bool branch_taken_0x36beb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x36BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BEB4u;
        // 0x36beb8: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36beb4) {
            ctx->pc = 0x36BEC0u;
            goto label_36bec0;
        }
    }
    ctx->pc = 0x36BEBCu;
    // 0x36bebc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36bebcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_36bec0:
    // 0x36bec0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x36bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x36bec4: 0x244218b8  addiu       $v0, $v0, 0x18B8
    ctx->pc = 0x36bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6328));
    // 0x36bec8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36becc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36beccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bed0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x36bed0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36bed4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x36BED4u;
    {
        const bool branch_taken_0x36bed4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36bed4) {
            ctx->pc = 0x36BEE0u;
            goto label_36bee0;
        }
    }
    ctx->pc = 0x36BEDCu;
    // 0x36bedc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36bedcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_36bee0:
    // 0x36bee0: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x36BEE0u;
    SET_GPR_U32(ctx, 31, 0x36BEE8u);
    ctx->pc = 0x36BEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BEE0u;
    // 0x36bee4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x36BEE0u, 0x36BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BEE8u;
label_36bee8:
    // 0x36bee8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36bee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36beec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36beecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36bef0: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x36BEF0u;
    SET_GPR_U32(ctx, 31, 0x36BEF8u);
    ctx->pc = 0x36BEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BEF0u;
    // 0x36bef4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x36BEF0u, 0x36BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BEF8u;
label_36bef8:
    // 0x36bef8: 0x260405a0  addiu       $a0, $s0, 0x5A0
    ctx->pc = 0x36bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x36befc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x36befcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bf00: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x36BF00u;
    SET_GPR_U32(ctx, 31, 0x36BF08u);
    ctx->pc = 0x36BF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BF00u;
    // 0x36bf04: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x36BF00u, 0x36BF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF08u;
label_36bf08:
    // 0x36bf08: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x36bf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bf0c: 0xe60005a4  swc1        $f0, 0x5A4($s0)
    ctx->pc = 0x36bf0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1444), bits); }
label_36bf10:
    // 0x36bf10: 0x8e0405c0  lw          $a0, 0x5C0($s0)
    ctx->pc = 0x36bf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1472)));
    // 0x36bf14: 0xc096c80  jal         func_25B200
    ctx->pc = 0x36BF14u;
    SET_GPR_U32(ctx, 31, 0x36BF1Cu);
    ctx->pc = 0x36BF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BF14u;
    // 0x36bf18: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x36BF14u, 0x36BF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF1Cu;
label_36bf1c:
    // 0x36bf1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36BF1Cu;
    {
        const bool branch_taken_0x36bf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bf1c) {
            ctx->pc = 0x36BF38u;
            goto label_36bf38;
        }
    }
    ctx->pc = 0x36BF24u;
    // 0x36bf24: 0x7aa40000  lq          $a0, 0x0($s5)
    ctx->pc = 0x36bf24u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x36bf28: 0x36430001  ori         $v1, $s2, 0x1
    ctx->pc = 0x36bf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
    // 0x36bf2c: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x36bf2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36bf30: 0x7c440040  sq          $a0, 0x40($v0)
    ctx->pc = 0x36bf30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 4));
    // 0x36bf34: 0x0  nop
    ctx->pc = 0x36bf34u;
    // NOP
label_36bf38:
    // 0x36bf38: 0xc096c80  jal         func_25B200
    ctx->pc = 0x36BF38u;
    SET_GPR_U32(ctx, 31, 0x36BF40u);
    ctx->pc = 0x36BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BF38u;
    // 0x36bf3c: 0x8e0405c4  lw          $a0, 0x5C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x36BF38u, 0x36BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF40u;
label_36bf40:
    // 0x36bf40: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x36BF40u;
    {
        const bool branch_taken_0x36bf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bf40) {
            ctx->pc = 0x36C000u;
            goto label_36c000;
        }
    }
    ctx->pc = 0x36BF48u;
    // 0x36bf48: 0x7a840000  lq          $a0, 0x0($s4)
    ctx->pc = 0x36bf48u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x36bf4c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x36bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36bf50: 0x7c440040  sq          $a0, 0x40($v0)
    ctx->pc = 0x36bf50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 4));
    // 0x36bf54: 0x86020510  lh          $v0, 0x510($s0)
    ctx->pc = 0x36bf54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x36bf58: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x36bf58u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x36bf5c: 0x0  nop
    ctx->pc = 0x36bf5cu;
    // NOP
    // 0x36bf60: 0x0  nop
    ctx->pc = 0x36bf60u;
    // NOP
    // 0x36bf64: 0x1010  mfhi        $v0
    ctx->pc = 0x36bf64u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x36bf68: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x36BF68u;
    {
        const bool branch_taken_0x36bf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36bf68) {
            ctx->pc = 0x36BFF8u;
            goto label_36bff8;
        }
    }
    ctx->pc = 0x36BF70u;
    // 0x36bf70: 0x920205e0  lbu         $v0, 0x5E0($s0)
    ctx->pc = 0x36bf70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1504)));
    // 0x36bf74: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x36BF74u;
    {
        const bool branch_taken_0x36bf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36bf74) {
            ctx->pc = 0x36BFB0u;
            goto label_36bfb0;
        }
    }
    ctx->pc = 0x36BF7Cu;
    // 0x36bf7c: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x36bf7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x36bf80: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36bf80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36bf84: 0x3c022500  lui         $v0, 0x2500
    ctx->pc = 0x36bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9472 << 16));
    // 0x36bf88: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36bf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36bf8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36bf8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bf90: 0x34458602  ori         $a1, $v0, 0x8602
    ctx->pc = 0x36bf90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34306);
    // 0x36bf94: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x36bf94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bf98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36bf98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bf9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36bf9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bfa0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36bfa0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bfa4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x36bfa4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bfa8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36BFA8u;
    SET_GPR_U32(ctx, 31, 0x36BFB0u);
    ctx->pc = 0x36BFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BFA8u;
    // 0x36bfac: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36BFA8u, 0x36BFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BFB0u;
label_36bfb0:
    // 0x36bfb0: 0x920305e0  lbu         $v1, 0x5E0($s0)
    ctx->pc = 0x36bfb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1504)));
    // 0x36bfb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bfb8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x36BFB8u;
    {
        const bool branch_taken_0x36bfb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x36bfb8) {
            ctx->pc = 0x36BFF8u;
            goto label_36bff8;
        }
    }
    ctx->pc = 0x36BFC0u;
    // 0x36bfc0: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x36bfc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x36bfc4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36bfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36bfc8: 0x3c022500  lui         $v0, 0x2500
    ctx->pc = 0x36bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9472 << 16));
    // 0x36bfcc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36bfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36bfd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36bfd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bfd4: 0x34458702  ori         $a1, $v0, 0x8702
    ctx->pc = 0x36bfd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
    // 0x36bfd8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x36bfd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bfdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36bfdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bfe0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36bfe0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bfe4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36bfe4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bfe8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x36bfe8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bfec: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36BFECu;
    SET_GPR_U32(ctx, 31, 0x36BFF4u);
    ctx->pc = 0x36BFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BFECu;
    // 0x36bff0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36BFECu, 0x36BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BFF4u;
label_36bff4:
    // 0x36bff4: 0x0  nop
    ctx->pc = 0x36bff4u;
    // NOP
label_36bff8:
    // 0x36bff8: 0x36420001  ori         $v0, $s2, 0x1
    ctx->pc = 0x36bff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
    // 0x36bffc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x36bffcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36c000:
    // 0x36c000: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x36c000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c004: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x36c004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36c008:
    // 0x36c008: 0xc096c80  jal         func_25B200
    ctx->pc = 0x36C008u;
    SET_GPR_U32(ctx, 31, 0x36C010u);
    ctx->pc = 0x36C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C008u;
    // 0x36c00c: 0x8e2405b0  lw          $a0, 0x5B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x36C008u, 0x36C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C010u;
label_36c010:
    // 0x36c010: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36C010u;
    {
        const bool branch_taken_0x36c010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c010) {
            ctx->pc = 0x36C028u;
            goto label_36c028;
        }
    }
    ctx->pc = 0x36C018u;
    // 0x36c018: 0x7a840000  lq          $a0, 0x0($s4)
    ctx->pc = 0x36c018u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x36c01c: 0x36430001  ori         $v1, $s2, 0x1
    ctx->pc = 0x36c01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
    // 0x36c020: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x36c020u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36c024: 0x7c440070  sq          $a0, 0x70($v0)
    ctx->pc = 0x36c024u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 4));
label_36c028:
    // 0x36c028: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36c028u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x36c02c: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x36c02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x36c030: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36C030u;
    {
        const bool branch_taken_0x36c030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C030u;
        // 0x36c034: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c030) {
            ctx->pc = 0x36C008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c008;
        }
    }
    ctx->pc = 0x36C038u;
    // 0x36c038: 0xc0c0818  jal         func_302060
    ctx->pc = 0x36C038u;
    SET_GPR_U32(ctx, 31, 0x36C040u);
    ctx->pc = 0x36C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C038u;
    // 0x36c03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x36C038u, 0x36C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C040u;
label_36c040:
    // 0x36c040: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x36C040u;
    {
        const bool branch_taken_0x36c040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c040) {
            ctx->pc = 0x36C078u;
            goto label_36c078;
        }
    }
    ctx->pc = 0x36C048u;
    // 0x36c048: 0x920705d2  lbu         $a3, 0x5D2($s0)
    ctx->pc = 0x36c048u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1490)));
    // 0x36c04c: 0xc60e05c8  lwc1        $f14, 0x5C8($s0)
    ctx->pc = 0x36c04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36c050: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x36c050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x36c054: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x36c054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c058: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36c058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36c05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c060: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x36c060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c064: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36c064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c068: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x36c068u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x36c06c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36c06cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c070: 0xc0c07c4  jal         func_301F10
    ctx->pc = 0x36C070u;
    SET_GPR_U32(ctx, 31, 0x36C078u);
    ctx->pc = 0x36C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C070u;
    // 0x36c074: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301F10u, 0x36C070u, 0x36C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C078u;
label_36c078:
    // 0x36c078: 0xc0c0818  jal         func_302060
    ctx->pc = 0x36C078u;
    SET_GPR_U32(ctx, 31, 0x36C080u);
    ctx->pc = 0x36C07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C078u;
    // 0x36c07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x36C078u, 0x36C080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C080u;
label_36c080:
    // 0x36c080: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x36C080u;
    {
        const bool branch_taken_0x36c080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C080u;
        // 0x36c084: 0x3c010066  lui         $at, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c080) {
            ctx->pc = 0x36C0E0u;
            goto label_36c0e0;
        }
    }
    ctx->pc = 0x36C088u;
    // 0x36c088: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x36c088u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36c08c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x36c08cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
    // 0x36c090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c094: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x36c094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36c098: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36c098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c09c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x36c09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x36c0a0: 0x7fa90090  sq          $t1, 0x90($sp)
    ctx->pc = 0x36c0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 9));
    // 0x36c0a4: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x36c0a4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x36c0a8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x36c0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x36c0ac: 0x7fa600a0  sq          $a2, 0xA0($sp)
    ctx->pc = 0x36c0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 6));
    // 0x36c0b0: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x36c0b0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x36c0b4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x36c0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x36c0b8: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x36c0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x36c0bc: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x36c0bcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x36c0c0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x36c0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x36c0c4: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x36c0c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x36c0c8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x36c0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x36c0cc: 0x920605d3  lbu         $a2, 0x5D3($s0)
    ctx->pc = 0x36c0ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1491)));
    // 0x36c0d0: 0xc60c05c8  lwc1        $f12, 0x5C8($s0)
    ctx->pc = 0x36c0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36c0d4: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x36C0D4u;
    SET_GPR_U32(ctx, 31, 0x36C0DCu);
    ctx->pc = 0x36C0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C0D4u;
    // 0x36c0d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x36C0D4u, 0x36C0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C0DCu;
label_36c0dc:
    // 0x36c0dc: 0x0  nop
    ctx->pc = 0x36c0dcu;
    // NOP
label_36c0e0:
    // 0x36c0e0: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x36C0E0u;
    {
        const bool branch_taken_0x36c0e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C0E0u;
        // 0x36c0e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c0e0) {
            ctx->pc = 0x36C0F0u;
            goto label_36c0f0;
        }
    }
    ctx->pc = 0x36C0E8u;
    // 0x36c0e8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x36C0E8u;
    SET_GPR_U32(ctx, 31, 0x36C0F0u);
    ctx->pc = 0x36C0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C0E8u;
    // 0x36c0ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x36C0E8u, 0x36C0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C0F0u;
label_36c0f0:
    // 0x36c0f0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x36c0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36c0f4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x36c0f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36c0f8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x36c0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36c0fc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x36c0fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36c100: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x36c100u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36c104: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x36c104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36c108: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x36c108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36c10c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36c10cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c110: 0x3e00008  jr          $ra
    ctx->pc = 0x36C110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C110u;
        // 0x36c114: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C118u;
}

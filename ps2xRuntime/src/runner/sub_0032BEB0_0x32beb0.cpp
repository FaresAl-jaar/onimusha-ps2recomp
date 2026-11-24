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

// Function: sub_0032BEB0
// Address: 0x32beb0 - 0x32c048
void sub_0032BEB0_0x32beb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BEB0_0x32beb0");
#endif

    switch (ctx->pc) {
        case 0x32bef8u: goto label_32bef8;
        case 0x32bff8u: goto label_32bff8;
        case 0x32c000u: goto label_32c000;
        default: break;
    }

    ctx->pc = 0x32beb0u;

    // 0x32beb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32beb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32beb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32beb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32beb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32bebc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32bebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32bec0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32bec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32bec4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32bec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32bec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32becc: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x32beccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x32bed0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32bed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bed4: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x32bed4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x32bed8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x32bed8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x32bedc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x32bedcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x32bee0: 0xac900018  sw          $s0, 0x18($a0)
    ctx->pc = 0x32bee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 16));
    // 0x32bee4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x32bee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x32bee8: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32BEE8u;
    {
        const bool branch_taken_0x32bee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x32BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BEE8u;
        // 0x32beec: 0xa0800006  sb          $zero, 0x6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bee8) {
            ctx->pc = 0x32BEF8u;
            goto label_32bef8;
        }
    }
    ctx->pc = 0x32BEF0u;
    // 0x32bef0: 0xc0cb648  jal         func_32D920
    ctx->pc = 0x32BEF0u;
    SET_GPR_U32(ctx, 31, 0x32BEF8u);
    ctx->pc = 0x32D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D920u, 0x32BEF0u, 0x32BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BEF8u;
label_32bef8:
    // 0x32bef8: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32BEF8u;
    {
        const bool branch_taken_0x32bef8 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x32BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BEF8u;
        // 0x32befc: 0xa2400009  sb          $zero, 0x9($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bef8) {
            ctx->pc = 0x32BF18u;
            goto label_32bf18;
        }
    }
    ctx->pc = 0x32BF00u;
    // 0x32bf00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32bf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bf04: 0x3203000f  andi        $v1, $s0, 0xF
    ctx->pc = 0x32bf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x32bf08: 0xa2440007  sb          $a0, 0x7($s2)
    ctx->pc = 0x32bf08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x32bf0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32BF0Cu;
    {
        const bool branch_taken_0x32bf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BF0Cu;
        // 0x32bf10: 0xa2430004  sb          $v1, 0x4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bf0c) {
            ctx->pc = 0x32BF20u;
            goto label_32bf20;
        }
    }
    ctx->pc = 0x32BF14u;
    // 0x32bf14: 0x0  nop
    ctx->pc = 0x32bf14u;
    // NOP
label_32bf18:
    // 0x32bf18: 0xa2400007  sb          $zero, 0x7($s2)
    ctx->pc = 0x32bf18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x32bf1c: 0xa2500009  sb          $s0, 0x9($s2)
    ctx->pc = 0x32bf1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 16));
label_32bf20:
    // 0x32bf20: 0x92430009  lbu         $v1, 0x9($s2)
    ctx->pc = 0x32bf20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x32bf24: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x32BF24u;
    {
        const bool branch_taken_0x32bf24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32bf24) {
            ctx->pc = 0x32C030u;
            goto label_32c030;
        }
    }
    ctx->pc = 0x32BF2Cu;
    // 0x32bf2c: 0xa2400008  sb          $zero, 0x8($s2)
    ctx->pc = 0x32bf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x32bf30: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x32bf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x32bf34: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x32bf34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x32bf38: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x32bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x32bf3c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x32bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32bf40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32bf44: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x32bf44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32bf48: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x32BF48u;
    {
        const bool branch_taken_0x32bf48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bf48) {
            ctx->pc = 0x32BF88u;
            goto label_32bf88;
        }
    }
    ctx->pc = 0x32BF50u;
    // 0x32bf50: 0x90c529d0  lbu         $a1, 0x29D0($a2)
    ctx->pc = 0x32bf50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10704)));
    // 0x32bf54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32bf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bf58: 0x92430008  lbu         $v1, 0x8($s2)
    ctx->pc = 0x32bf58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x32bf5c: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x32bf5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x32bf60: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x32bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x32bf64: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x32bf64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x32bf68: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32bf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32bf6c: 0xa2430008  sb          $v1, 0x8($s2)
    ctx->pc = 0x32bf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x32bf70: 0x92430007  lbu         $v1, 0x7($s2)
    ctx->pc = 0x32bf70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x32bf74: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32BF74u;
    {
        const bool branch_taken_0x32bf74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32bf74) {
            ctx->pc = 0x32BF88u;
            goto label_32bf88;
        }
    }
    ctx->pc = 0x32BF7Cu;
    // 0x32bf7c: 0x90c329d0  lbu         $v1, 0x29D0($a2)
    ctx->pc = 0x32bf7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10704)));
    // 0x32bf80: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x32bf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x32bf84: 0xa2430004  sb          $v1, 0x4($s2)
    ctx->pc = 0x32bf84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 3));
label_32bf88:
    // 0x32bf88: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x32bf88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x32bf8c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x32bf8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x32bf90: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x32bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x32bf94: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x32bf94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x32bf98: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x32bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32bf9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32bfa0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32bfa4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x32BFA4u;
    {
        const bool branch_taken_0x32bfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bfa4) {
            ctx->pc = 0x32BFD0u;
            goto label_32bfd0;
        }
    }
    ctx->pc = 0x32BFACu;
    // 0x32bfac: 0x906529d0  lbu         $a1, 0x29D0($v1)
    ctx->pc = 0x32bfacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10704)));
    // 0x32bfb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32bfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bfb4: 0x92430008  lbu         $v1, 0x8($s2)
    ctx->pc = 0x32bfb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x32bfb8: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x32bfb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x32bfbc: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x32bfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x32bfc0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x32bfc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x32bfc4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32bfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32bfc8: 0xa2430008  sb          $v1, 0x8($s2)
    ctx->pc = 0x32bfc8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x32bfcc: 0x0  nop
    ctx->pc = 0x32bfccu;
    // NOP
label_32bfd0:
    // 0x32bfd0: 0x938382f4  lbu         $v1, -0x7D0C($gp)
    ctx->pc = 0x32bfd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935284)));
    // 0x32bfd4: 0xc78082f0  lwc1        $f0, -0x7D10($gp)
    ctx->pc = 0x32bfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bfd8: 0x27b00048  addiu       $s0, $sp, 0x48
    ctx->pc = 0x32bfd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x32bfdc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32bfdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32bfe0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x32bfe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x32bfe4: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x32bfe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x32bfe8: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x32bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x32bfec: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x32bfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x32bff0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x32BFF0u;
    {
        const bool branch_taken_0x32bff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BFF0u;
        // 0x32bff4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bff0) {
            ctx->pc = 0x32C030u;
            goto label_32c030;
        }
    }
    ctx->pc = 0x32BFF8u;
label_32bff8:
    // 0x32bff8: 0xc0d3518  jal         func_34D460
    ctx->pc = 0x32BFF8u;
    SET_GPR_U32(ctx, 31, 0x32C000u);
    ctx->pc = 0x32BFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BFF8u;
    // 0x32bffc: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D460u, 0x32BFF8u, 0x32C000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C000u;
label_32c000:
    // 0x32c000: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32C000u;
    {
        const bool branch_taken_0x32c000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c000) {
            ctx->pc = 0x32C020u;
            goto label_32c020;
        }
    }
    ctx->pc = 0x32C008u;
    // 0x32c008: 0x92430008  lbu         $v1, 0x8($s2)
    ctx->pc = 0x32c008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x32c00c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c010: 0x2242004  sllv        $a0, $a0, $s1
    ctx->pc = 0x32c010u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
    // 0x32c014: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x32c014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x32c018: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32c018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32c01c: 0xa2430008  sb          $v1, 0x8($s2)
    ctx->pc = 0x32c01cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 3));
label_32c020:
    // 0x32c020: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32c020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32c024: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x32c024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x32c028: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x32C028u;
    {
        const bool branch_taken_0x32c028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C028u;
        // 0x32c02c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c028) {
            ctx->pc = 0x32BFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32bff8;
        }
    }
    ctx->pc = 0x32C030u;
label_32c030:
    // 0x32c030: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32c030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32c034: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32c034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32c038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c03c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c040: 0x3e00008  jr          $ra
    ctx->pc = 0x32C040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C040u;
        // 0x32c044: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C048u;
}

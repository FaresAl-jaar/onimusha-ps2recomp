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

// Function: sub_0025EAF0
// Address: 0x25eaf0 - 0x25ec60
void sub_0025EAF0_0x25eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EAF0_0x25eaf0");
#endif

    switch (ctx->pc) {
        case 0x25eb50u: goto label_25eb50;
        case 0x25eba8u: goto label_25eba8;
        case 0x25ebecu: goto label_25ebec;
        case 0x25ec0cu: goto label_25ec0c;
        default: break;
    }

    ctx->pc = 0x25eaf0u;

    // 0x25eaf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25eaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x25eaf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25eaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25eaf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25eaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25eafc: 0x10a00052  beqz        $a1, . + 4 + (0x52 << 2)
    ctx->pc = 0x25EAFCu;
    {
        const bool branch_taken_0x25eafc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAFCu;
        // 0x25eb00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eafc) {
            ctx->pc = 0x25EC48u;
            goto label_25ec48;
        }
    }
    ctx->pc = 0x25EB04u;
    // 0x25eb04: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x25eb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x25eb08: 0x8ca4004c  lw          $a0, 0x4C($a1)
    ctx->pc = 0x25eb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x25eb0c: 0x78235c20  lq          $v1, 0x5C20($at)
    ctx->pc = 0x25eb0cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C20u));
    // 0x25eb10: 0x7e030070  sq          $v1, 0x70($s0)
    ctx->pc = 0x25eb10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 3));
    // 0x25eb14: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x25eb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x25eb18: 0x78235c30  lq          $v1, 0x5C30($at)
    ctx->pc = 0x25eb18u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C30u));
    // 0x25eb1c: 0x7e030080  sq          $v1, 0x80($s0)
    ctx->pc = 0x25eb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 3));
    // 0x25eb20: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x25eb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x25eb24: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x25eb24u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x25eb28: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x25eb28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x25eb2c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x25eb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x25eb30: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x25eb30u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x25eb34: 0x7e0300a0  sq          $v1, 0xA0($s0)
    ctx->pc = 0x25eb34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 3));
    // 0x25eb38: 0x920300b1  lbu         $v1, 0xB1($s0)
    ctx->pc = 0x25eb38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 177)));
    // 0x25eb3c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x25eb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x25eb40: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25EB40u;
    {
        const bool branch_taken_0x25eb40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25eb40) {
            ctx->pc = 0x25EB58u;
            goto label_25eb58;
        }
    }
    ctx->pc = 0x25EB48u;
    // 0x25eb48: 0xc096d04  jal         func_25B410
    ctx->pc = 0x25EB48u;
    SET_GPR_U32(ctx, 31, 0x25EB50u);
    ctx->pc = 0x25EB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EB48u;
    // 0x25eb4c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B410u, 0x25EB48u, 0x25EB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB50u;
label_25eb50:
    // 0x25eb50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25EB50u;
    {
        const bool branch_taken_0x25eb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25eb50) {
            ctx->pc = 0x25EB88u;
            goto label_25eb88;
        }
    }
    ctx->pc = 0x25EB58u;
label_25eb58:
    // 0x25eb58: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x25eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x25eb5c: 0x920400b0  lbu         $a0, 0xB0($s0)
    ctx->pc = 0x25eb5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x25eb60: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x25eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x25eb64: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x25eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25eb68: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x25eb68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25eb6c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x25eb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x25eb70: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x25eb70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25eb74: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x25eb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x25eb78: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x25eb78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25eb7c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x25eb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x25eb80: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x25eb80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x25eb84: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x25eb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_25eb88:
    // 0x25eb88: 0x920400b1  lbu         $a0, 0xB1($s0)
    ctx->pc = 0x25eb88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 177)));
    // 0x25eb8c: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x25eb8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x25eb90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25EB90u;
    {
        const bool branch_taken_0x25eb90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25eb90) {
            ctx->pc = 0x25EBB0u;
            goto label_25ebb0;
        }
    }
    ctx->pc = 0x25EB98u;
    // 0x25eb98: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x25eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x25eb9c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x25eb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25eba0: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x25EBA0u;
    SET_GPR_U32(ctx, 31, 0x25EBA8u);
    ctx->pc = 0x25EBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EBA0u;
    // 0x25eba4: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x25EBA0u, 0x25EBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EBA8u;
label_25eba8:
    // 0x25eba8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25EBA8u;
    {
        const bool branch_taken_0x25eba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25eba8) {
            ctx->pc = 0x25EBF0u;
            goto label_25ebf0;
        }
    }
    ctx->pc = 0x25EBB0u;
label_25ebb0:
    // 0x25ebb0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x25ebb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x25ebb4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EBB4u;
    {
        const bool branch_taken_0x25ebb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ebb4) {
            ctx->pc = 0x25EBC8u;
            goto label_25ebc8;
        }
    }
    ctx->pc = 0x25EBBCu;
    // 0x25ebbc: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x25ebbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25ebc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25EBC0u;
    {
        const bool branch_taken_0x25ebc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBC0u;
        // 0x25ebc4: 0x7e030040  sq          $v1, 0x40($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebc0) {
            ctx->pc = 0x25EBF0u;
            goto label_25ebf0;
        }
    }
    ctx->pc = 0x25EBC8u;
label_25ebc8:
    // 0x25ebc8: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x25ebc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x25ebcc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25EBCCu;
    {
        const bool branch_taken_0x25ebcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ebcc) {
            ctx->pc = 0x25EBF0u;
            goto label_25ebf0;
        }
    }
    ctx->pc = 0x25EBD4u;
    // 0x25ebd4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x25ebd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25ebd8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x25ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x25ebdc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25ebdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ebe0: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x25ebe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x25ebe4: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x25EBE4u;
    SET_GPR_U32(ctx, 31, 0x25EBECu);
    ctx->pc = 0x25EBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EBE4u;
    // 0x25ebe8: 0x7e020040  sq          $v0, 0x40($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x25EBE4u, 0x25EBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EBECu;
label_25ebec:
    // 0x25ebec: 0x0  nop
    ctx->pc = 0x25ebecu;
    // NOP
label_25ebf0:
    // 0x25ebf0: 0x920300b1  lbu         $v1, 0xB1($s0)
    ctx->pc = 0x25ebf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 177)));
    // 0x25ebf4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x25ebf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x25ebf8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25EBF8u;
    {
        const bool branch_taken_0x25ebf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBF8u;
        // 0x25ebfc: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebf8) {
            ctx->pc = 0x25EC20u;
            goto label_25ec20;
        }
    }
    ctx->pc = 0x25EC00u;
    // 0x25ec00: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x25ec00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x25ec04: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x25EC04u;
    SET_GPR_U32(ctx, 31, 0x25EC0Cu);
    ctx->pc = 0x25EC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC04u;
    // 0x25ec08: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x25EC04u, 0x25EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC0Cu;
label_25ec0c:
    // 0x25ec0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EC0Cu;
    {
        const bool branch_taken_0x25ec0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ec0c) {
            ctx->pc = 0x25EC20u;
            goto label_25ec20;
        }
    }
    ctx->pc = 0x25EC14u;
    // 0x25ec14: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x25ec14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec18: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x25ec18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x25ec1c: 0x0  nop
    ctx->pc = 0x25ec1cu;
    // NOP
label_25ec20:
    // 0x25ec20: 0x920300b1  lbu         $v1, 0xB1($s0)
    ctx->pc = 0x25ec20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 177)));
    // 0x25ec24: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25ec24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25ec28: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25EC28u;
    {
        const bool branch_taken_0x25ec28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ec28) {
            ctx->pc = 0x25EC48u;
            goto label_25ec48;
        }
    }
    ctx->pc = 0x25EC30u;
    // 0x25ec30: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x25ec30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ec34: 0x7e030070  sq          $v1, 0x70($s0)
    ctx->pc = 0x25ec34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 3));
    // 0x25ec38: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x25ec38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ec3c: 0x7e030080  sq          $v1, 0x80($s0)
    ctx->pc = 0x25ec3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 3));
    // 0x25ec40: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x25ec40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25ec44: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x25ec44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
label_25ec48:
    // 0x25ec48: 0x7a030040  lq          $v1, 0x40($s0)
    ctx->pc = 0x25ec48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25ec4c: 0x7e0300a0  sq          $v1, 0xA0($s0)
    ctx->pc = 0x25ec4cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 3));
    // 0x25ec50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25ec50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ec54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ec54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ec58: 0x3e00008  jr          $ra
    ctx->pc = 0x25EC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC58u;
        // 0x25ec5c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EC60u;
}

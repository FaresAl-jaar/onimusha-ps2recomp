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

// Function: sub_003F6EB0
// Address: 0x3f6eb0 - 0x3f7228
void sub_003F6EB0_0x3f6eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6EB0_0x3f6eb0");
#endif

    switch (ctx->pc) {
        case 0x3f6ec4u: goto label_3f6ec4;
        case 0x3f6f14u: goto label_3f6f14;
        case 0x3f6f1cu: goto label_3f6f1c;
        case 0x3f6f84u: goto label_3f6f84;
        case 0x3f7000u: goto label_3f7000;
        case 0x3f7030u: goto label_3f7030;
        case 0x3f70ccu: goto label_3f70cc;
        case 0x3f710cu: goto label_3f710c;
        case 0x3f7114u: goto label_3f7114;
        case 0x3f713cu: goto label_3f713c;
        case 0x3f7160u: goto label_3f7160;
        case 0x3f7174u: goto label_3f7174;
        case 0x3f7184u: goto label_3f7184;
        case 0x3f71bcu: goto label_3f71bc;
        case 0x3f71dcu: goto label_3f71dc;
        case 0x3f71ecu: goto label_3f71ec;
        case 0x3f7204u: goto label_3f7204;
        default: break;
    }

    ctx->pc = 0x3f6eb0u;

    // 0x3f6eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f6eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f6eb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f6eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f6eb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f6eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3f6ebc: 0xc0fdc8c  jal         func_3F7230
    ctx->pc = 0x3F6EBCu;
    SET_GPR_U32(ctx, 31, 0x3F6EC4u);
    ctx->pc = 0x3F6EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6EBCu;
    // 0x3f6ec0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F7230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F7230u, 0x3F6EBCu, 0x3F6EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6EC4u;
label_3f6ec4:
    // 0x3f6ec4: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3f6ec4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3f6ec8: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F6EC8u;
    {
        const bool branch_taken_0x3f6ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6EC8u;
        // 0x3f6ecc: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6ec8) {
            ctx->pc = 0x3F6F28u;
            goto label_3f6f28;
        }
    }
    ctx->pc = 0x3F6ED0u;
    // 0x3f6ed0: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x3f6ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
    // 0x3f6ed4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3f6ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3f6ed8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3F6ED8u;
    {
        const bool branch_taken_0x3f6ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6ed8) {
            ctx->pc = 0x3F6F28u;
            goto label_3f6f28;
        }
    }
    ctx->pc = 0x3F6EE0u;
    // 0x3f6ee0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f6ee4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f6ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f6ee8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3f6ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3f6eec: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3f6eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3f6ef0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3f6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3f6ef4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f6ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6ef8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3f6ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3f6efc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f6efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6f00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3f6f00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6f04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f6f04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6f08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f6f08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6f0c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3F6F0Cu;
    SET_GPR_U32(ctx, 31, 0x3F6F14u);
    ctx->pc = 0x3F6F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6F0Cu;
    // 0x3f6f10: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3F6F0Cu, 0x3F6F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6F14u;
label_3f6f14:
    // 0x3f6f14: 0xc0fdb78  jal         func_3F6DE0
    ctx->pc = 0x3F6F14u;
    SET_GPR_U32(ctx, 31, 0x3F6F1Cu);
    ctx->pc = 0x3F6F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6F14u;
    // 0x3f6f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6DE0u, 0x3F6F14u, 0x3F6F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6F1Cu;
label_3f6f1c:
    // 0x3f6f1c: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x3F6F1Cu;
    {
        const bool branch_taken_0x3f6f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6f1c) {
            ctx->pc = 0x3F7218u;
            goto label_3f7218;
        }
    }
    ctx->pc = 0x3F6F24u;
    // 0x3f6f24: 0x0  nop
    ctx->pc = 0x3f6f24u;
    // NOP
label_3f6f28:
    // 0x3f6f28: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3f6f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3f6f2c: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3f6f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3f6f30: 0x108300a7  beq         $a0, $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x3F6F30u;
    {
        const bool branch_taken_0x3f6f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F6F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F30u;
        // 0x3f6f34: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6f30) {
            ctx->pc = 0x3F71D0u;
            goto label_3f71d0;
        }
    }
    ctx->pc = 0x3F6F38u;
    // 0x3f6f38: 0x1083008b  beq         $a0, $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x3F6F38u;
    {
        const bool branch_taken_0x3f6f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f6f38) {
            ctx->pc = 0x3F7168u;
            goto label_3f7168;
        }
    }
    ctx->pc = 0x3F6F40u;
    // 0x3f6f40: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3f6f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3f6f44: 0x10830076  beq         $a0, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x3F6F44u;
    {
        const bool branch_taken_0x3f6f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F6F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6F44u;
        // 0x3f6f48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6f44) {
            ctx->pc = 0x3F7120u;
            goto label_3f7120;
        }
    }
    ctx->pc = 0x3F6F4Cu;
    // 0x3f6f4c: 0x10860010  beq         $a0, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F6F4Cu;
    {
        const bool branch_taken_0x3f6f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x3f6f4c) {
            ctx->pc = 0x3F6F90u;
            goto label_3f6f90;
        }
    }
    ctx->pc = 0x3F6F54u;
    // 0x3f6f54: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F6F54u;
    {
        const bool branch_taken_0x3f6f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6f54) {
            ctx->pc = 0x3F6F68u;
            goto label_3f6f68;
        }
    }
    ctx->pc = 0x3F6F5Cu;
    // 0x3f6f5c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x3F6F5Cu;
    {
        const bool branch_taken_0x3f6f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6f5c) {
            ctx->pc = 0x3F7218u;
            goto label_3f7218;
        }
    }
    ctx->pc = 0x3F6F64u;
    // 0x3f6f64: 0x0  nop
    ctx->pc = 0x3f6f64u;
    // NOP
label_3f6f68:
    // 0x3f6f68: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3f6f68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3f6f6c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3f6f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3f6f70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f6f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6f74: 0x24847180  addiu       $a0, $a0, 0x7180
    ctx->pc = 0x3f6f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    // 0x3f6f78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f6f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f6f7c: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x3F6F7Cu;
    SET_GPR_U32(ctx, 31, 0x3F6F84u);
    ctx->pc = 0x3F6F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6F7Cu;
    // 0x3f6f80: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x3F6F7Cu, 0x3F6F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6F84u;
label_3f6f84:
    // 0x3f6f84: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x3F6F84u;
    {
        const bool branch_taken_0x3f6f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6f84) {
            ctx->pc = 0x3F7218u;
            goto label_3f7218;
        }
    }
    ctx->pc = 0x3F6F8Cu;
    // 0x3f6f8c: 0x0  nop
    ctx->pc = 0x3f6f8cu;
    // NOP
label_3f6f90:
    // 0x3f6f90: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3f6f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3f6f94: 0x8c25ea28  lw          $a1, -0x15D8($at)
    ctx->pc = 0x3f6f94u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3f6f98: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x3f6f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x3f6f9c: 0x34630050  ori         $v1, $v1, 0x50
    ctx->pc = 0x3f6f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)80);
    // 0x3f6fa0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3f6fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3f6fa4: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3F6FA4u;
    {
        const bool branch_taken_0x3f6fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6fa4) {
            ctx->pc = 0x3F7030u;
            goto label_3f7030;
        }
    }
    ctx->pc = 0x3F6FACu;
    // 0x3f6fac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3f6facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3f6fb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3f6fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3f6fb4: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x3f6fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3f6fb8: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x3f6fb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3f6fbc: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x3f6fbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x3f6fc0: 0xc5180a  movz        $v1, $a2, $a1
    ctx->pc = 0x3f6fc0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x3f6fc4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3f6fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3f6fc8: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x3f6fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x3f6fcc: 0x24847180  addiu       $a0, $a0, 0x7180
    ctx->pc = 0x3f6fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    // 0x3f6fd0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3f6fd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3f6fd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f6fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f6fd8: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x3f6fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f6fdc: 0x82030003  lb          $v1, 0x3($s0)
    ctx->pc = 0x3f6fdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3f6fe0: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x3f6fe0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3f6fe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f6fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f6fe8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3f6fe8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3f6fec: 0x0  nop
    ctx->pc = 0x3f6fecu;
    // NOP
    // 0x3f6ff0: 0x0  nop
    ctx->pc = 0x3f6ff0u;
    // NOP
    // 0x3f6ff4: 0x1010  mfhi        $v0
    ctx->pc = 0x3f6ff4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3f6ff8: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x3F6FF8u;
    SET_GPR_U32(ctx, 31, 0x3F7000u);
    ctx->pc = 0x3F6FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6FF8u;
    // 0x3f6ffc: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x3F6FF8u, 0x3F7000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7000u;
label_3f7000:
    // 0x3f7000: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f7000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f7004: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f7004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f7008: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3f7008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3f700c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3f700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3f7010: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3f7010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3f7014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f7014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7018: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f7018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f701c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3f701cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7020: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f7020u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7024: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f7024u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7028: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3F7028u;
    SET_GPR_U32(ctx, 31, 0x3F7030u);
    ctx->pc = 0x3F702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7028u;
    // 0x3f702c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3F7028u, 0x3F7030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7030u;
label_3f7030:
    // 0x3f7030: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3f7030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3f7034: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x3f7034u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3f7038: 0x30836000  andi        $v1, $a0, 0x6000
    ctx->pc = 0x3f7038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)24576);
    // 0x3f703c: 0x10600076  beqz        $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x3F703Cu;
    {
        const bool branch_taken_0x3f703c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F703Cu;
        // 0x3f7040: 0x30832000  andi        $v1, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f703c) {
            ctx->pc = 0x3F7218u;
            goto label_3f7218;
        }
    }
    ctx->pc = 0x3F7044u;
    // 0x3f7044: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F7044u;
    {
        const bool branch_taken_0x3f7044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7044) {
            ctx->pc = 0x3F7064u;
            goto label_3f7064;
        }
    }
    ctx->pc = 0x3F704Cu;
    // 0x3f704c: 0x82040004  lb          $a0, 0x4($s0)
    ctx->pc = 0x3f704cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3f7050: 0x278384b0  addiu       $v1, $gp, -0x7B50
    ctx->pc = 0x3f7050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935728));
    // 0x3f7054: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3f7054u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3f7058: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f7058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3f705c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F705Cu;
    {
        const bool branch_taken_0x3f705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F705Cu;
        // 0x3f7060: 0x94630000  lhu         $v1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f705c) {
            ctx->pc = 0x3F7068u;
            goto label_3f7068;
        }
    }
    ctx->pc = 0x3F7064u;
label_3f7064:
    // 0x3f7064: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x3f7064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_3f7068:
    // 0x3f7068: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3f7068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3f706c: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x3f706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3f7070: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3F7070u;
    {
        const bool branch_taken_0x3f7070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f7070) {
            ctx->pc = 0x3F70D8u;
            goto label_3f70d8;
        }
    }
    ctx->pc = 0x3F7078u;
    // 0x3f7078: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x3f7078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x3f707c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F707Cu;
    {
        const bool branch_taken_0x3f707c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f707c) {
            ctx->pc = 0x3F7090u;
            goto label_3f7090;
        }
    }
    ctx->pc = 0x3F7084u;
    // 0x3f7084: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x3F7084u;
    {
        const bool branch_taken_0x3f7084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7084) {
            ctx->pc = 0x3F7218u;
            goto label_3f7218;
        }
    }
    ctx->pc = 0x3F708Cu;
    // 0x3f708c: 0x0  nop
    ctx->pc = 0x3f708cu;
    // NOP
label_3f7090:
    // 0x3f7090: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3f7090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3f7094: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3f7094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f7098: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f7098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f709c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f709cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f70a0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3f70a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3f70a4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3f70a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3f70a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f70a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f70ac: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3f70acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3f70b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f70b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f70b4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3f70b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3f70b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3f70b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f70bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f70bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f70c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f70c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f70c4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3F70C4u;
    SET_GPR_U32(ctx, 31, 0x3F70CCu);
    ctx->pc = 0x3F70C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F70C4u;
    // 0x3f70c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3F70C4u, 0x3F70CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F70CCu;
label_3f70cc:
    // 0x3f70cc: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x3F70CCu;
    {
        const bool branch_taken_0x3f70cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f70cc) {
            ctx->pc = 0x3F7218u;
            goto label_3f7218;
        }
    }
    ctx->pc = 0x3F70D4u;
    // 0x3f70d4: 0x0  nop
    ctx->pc = 0x3f70d4u;
    // NOP
label_3f70d8:
    // 0x3f70d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f70dc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3f70dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3f70e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f70e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f70e4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3f70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3f70e8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3f70e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3f70ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f70ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f70f0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3f70f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3f70f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f70f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f70f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3f70f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f70fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f70fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7100: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f7100u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7104: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3F7104u;
    SET_GPR_U32(ctx, 31, 0x3F710Cu);
    ctx->pc = 0x3F7108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7104u;
    // 0x3f7108: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3F7104u, 0x3F710Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F710Cu;
label_3f710c:
    // 0x3f710c: 0xc0fdb78  jal         func_3F6DE0
    ctx->pc = 0x3F710Cu;
    SET_GPR_U32(ctx, 31, 0x3F7114u);
    ctx->pc = 0x3F7110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F710Cu;
    // 0x3f7110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6DE0u, 0x3F710Cu, 0x3F7114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7114u;
label_3f7114:
    // 0x3f7114: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3F7114u;
    {
        const bool branch_taken_0x3f7114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7114) {
            ctx->pc = 0x3F7218u;
            goto label_3f7218;
        }
    }
    ctx->pc = 0x3F711Cu;
    // 0x3f711c: 0x0  nop
    ctx->pc = 0x3f711cu;
    // NOP
label_3f7120:
    // 0x3f7120: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3f7120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3f7124: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3f7124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3f7128: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f7128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f712c: 0x24847180  addiu       $a0, $a0, 0x7180
    ctx->pc = 0x3f712cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    // 0x3f7130: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f7130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f7134: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x3F7134u;
    SET_GPR_U32(ctx, 31, 0x3F713Cu);
    ctx->pc = 0x3F7138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7134u;
    // 0x3f7138: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x3F7134u, 0x3F713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F713Cu;
label_3f713c:
    // 0x3f713c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3f713cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3f7140: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3f7140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3f7144: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3f7144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3f7148: 0x34450007  ori         $a1, $v0, 0x7
    ctx->pc = 0x3f7148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x3f714c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3f714cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3f7150: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x3f7150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3f7154: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3f7154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f7158: 0xc09565c  jal         func_255970
    ctx->pc = 0x3F7158u;
    SET_GPR_U32(ctx, 31, 0x3F7160u);
    ctx->pc = 0x3F715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7158u;
    // 0x3f715c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x3F7158u, 0x3F7160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7160u;
label_3f7160:
    // 0x3f7160: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3F7160u;
    {
        const bool branch_taken_0x3f7160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7160) {
            ctx->pc = 0x3F7218u;
            goto label_3f7218;
        }
    }
    ctx->pc = 0x3F7168u;
label_3f7168:
    // 0x3f7168: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3f7168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3f716c: 0xc095150  jal         func_254540
    ctx->pc = 0x3F716Cu;
    SET_GPR_U32(ctx, 31, 0x3F7174u);
    ctx->pc = 0x3F7170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F716Cu;
    // 0x3f7170: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3F716Cu, 0x3F7174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7174u;
label_3f7174:
    // 0x3f7174: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3F7174u;
    {
        const bool branch_taken_0x3f7174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7174u;
        // 0x3f7178: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7174) {
            ctx->pc = 0x3F7218u;
            goto label_3f7218;
        }
    }
    ctx->pc = 0x3F717Cu;
    // 0x3f717c: 0xc095154  jal         func_254550
    ctx->pc = 0x3F717Cu;
    SET_GPR_U32(ctx, 31, 0x3F7184u);
    ctx->pc = 0x3F7180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F717Cu;
    // 0x3f7180: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x3F717Cu, 0x3F7184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7184u;
label_3f7184:
    // 0x3f7184: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F7184u;
    {
        const bool branch_taken_0x3f7184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f7184) {
            ctx->pc = 0x3F71C8u;
            goto label_3f71c8;
        }
    }
    ctx->pc = 0x3F718Cu;
    // 0x3f718c: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3f718cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3f7190: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3f7190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3f7194: 0x34450008  ori         $a1, $v0, 0x8
    ctx->pc = 0x3f7194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3f7198: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3f7198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3f719c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3f719cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3f71a0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3f71a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3f71a4: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x3f71a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3f71a8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3f71a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f71ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f71acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f71b0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3f71b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f71b4: 0xc09565c  jal         func_255970
    ctx->pc = 0x3F71B4u;
    SET_GPR_U32(ctx, 31, 0x3F71BCu);
    ctx->pc = 0x3F71B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F71B4u;
    // 0x3f71b8: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x3F71B4u, 0x3F71BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F71BCu;
label_3f71bc:
    // 0x3f71bc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3F71BCu;
    {
        const bool branch_taken_0x3f71bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f71bc) {
            ctx->pc = 0x3F7218u;
            goto label_3f7218;
        }
    }
    ctx->pc = 0x3F71C4u;
    // 0x3f71c4: 0x0  nop
    ctx->pc = 0x3f71c4u;
    // NOP
label_3f71c8:
    // 0x3f71c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3F71C8u;
    {
        const bool branch_taken_0x3f71c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F71C8u;
        // 0x3f71cc: 0xa2000002  sb          $zero, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f71c8) {
            ctx->pc = 0x3F7218u;
            goto label_3f7218;
        }
    }
    ctx->pc = 0x3F71D0u;
label_3f71d0:
    // 0x3f71d0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3f71d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3f71d4: 0xc095150  jal         func_254540
    ctx->pc = 0x3F71D4u;
    SET_GPR_U32(ctx, 31, 0x3F71DCu);
    ctx->pc = 0x3F71D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F71D4u;
    // 0x3f71d8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3F71D4u, 0x3F71DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F71DCu;
label_3f71dc:
    // 0x3f71dc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3F71DCu;
    {
        const bool branch_taken_0x3f71dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F71E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F71DCu;
        // 0x3f71e0: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f71dc) {
            ctx->pc = 0x3F7218u;
            goto label_3f7218;
        }
    }
    ctx->pc = 0x3F71E4u;
    // 0x3f71e4: 0xc095154  jal         func_254550
    ctx->pc = 0x3F71E4u;
    SET_GPR_U32(ctx, 31, 0x3F71ECu);
    ctx->pc = 0x3F71E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F71E4u;
    // 0x3f71e8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x3F71E4u, 0x3F71ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F71ECu;
label_3f71ec:
    // 0x3f71ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F71ECu;
    {
        const bool branch_taken_0x3f71ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f71ec) {
            ctx->pc = 0x3F7210u;
            goto label_3f7210;
        }
    }
    ctx->pc = 0x3F71F4u;
    // 0x3f71f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f71f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f71f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f71fc: 0xc0fdb78  jal         func_3F6DE0
    ctx->pc = 0x3F71FCu;
    SET_GPR_U32(ctx, 31, 0x3F7204u);
    ctx->pc = 0x3F7200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F71FCu;
    // 0x3f7200: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6DE0u, 0x3F71FCu, 0x3F7204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7204u;
label_3f7204:
    // 0x3f7204: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F7204u;
    {
        const bool branch_taken_0x3f7204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7204) {
            ctx->pc = 0x3F7218u;
            goto label_3f7218;
        }
    }
    ctx->pc = 0x3F720Cu;
    // 0x3f720c: 0x0  nop
    ctx->pc = 0x3f720cu;
    // NOP
label_3f7210:
    // 0x3f7210: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3f7210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f7214: 0x0  nop
    ctx->pc = 0x3f7214u;
    // NOP
label_3f7218:
    // 0x3f7218: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f7218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f721c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f721cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f7220: 0x3e00008  jr          $ra
    ctx->pc = 0x3F7220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F7224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7220u;
        // 0x3f7224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F7228u;
}

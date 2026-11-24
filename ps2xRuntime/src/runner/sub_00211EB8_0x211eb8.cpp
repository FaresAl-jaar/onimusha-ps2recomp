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

// Function: sub_00211EB8
// Address: 0x211eb8 - 0x212050
void sub_00211EB8_0x211eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211EB8_0x211eb8");
#endif

    switch (ctx->pc) {
        case 0x211efcu: goto label_211efc;
        case 0x211f14u: goto label_211f14;
        case 0x211f2cu: goto label_211f2c;
        case 0x211f54u: goto label_211f54;
        case 0x211f68u: goto label_211f68;
        case 0x211f98u: goto label_211f98;
        case 0x211fb0u: goto label_211fb0;
        case 0x211fc8u: goto label_211fc8;
        case 0x211fe0u: goto label_211fe0;
        case 0x211ff8u: goto label_211ff8;
        case 0x212010u: goto label_212010;
        case 0x212028u: goto label_212028;
        default: break;
    }

    ctx->pc = 0x211eb8u;

    // 0x211eb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x211eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x211ebc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x211ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x211ec0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x211ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x211ec4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x211ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ec8: 0x244647c8  addiu       $a2, $v0, 0x47C8
    ctx->pc = 0x211ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 18376));
    // 0x211ecc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x211eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x211ed0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x211ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x211ed4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x211ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ed8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x211ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x211edc: 0x26130008  addiu       $s3, $s0, 0x8
    ctx->pc = 0x211edcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x211ee0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x211ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x211ee4: 0x2614000c  addiu       $s4, $s0, 0xC
    ctx->pc = 0x211ee4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x211ee8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x211ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x211eec: 0x325500ff  andi        $s5, $s2, 0xFF
    ctx->pc = 0x211eecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x211ef0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x211ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x211ef4: 0xc084822  jal         func_212088
    ctx->pc = 0x211EF4u;
    SET_GPR_U32(ctx, 31, 0x211EFCu);
    ctx->pc = 0x211EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211EF4u;
    // 0x211ef8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212088u, 0x211EF4u, 0x211EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211EFCu;
label_211efc:
    // 0x211efc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x211efcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x211f00: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x211f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x211f04: 0x24c64838  addiu       $a2, $a2, 0x4838
    ctx->pc = 0x211f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18488));
    // 0x211f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f0c: 0xc084822  jal         func_212088
    ctx->pc = 0x211F0Cu;
    SET_GPR_U32(ctx, 31, 0x211F14u);
    ctx->pc = 0x211F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211F0Cu;
    // 0x211f10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212088u, 0x211F0Cu, 0x211F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211F14u;
label_211f14:
    // 0x211f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f18: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x211f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x211f1c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x211f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f20: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x211f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f24: 0xc08922c  jal         func_2248B0
    ctx->pc = 0x211F24u;
    SET_GPR_U32(ctx, 31, 0x211F2Cu);
    ctx->pc = 0x211F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211F24u;
    // 0x211f28: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2248B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2248B0u, 0x211F24u, 0x211F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211F2Cu;
label_211f2c:
    // 0x211f2c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x211f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x211f30: 0x24c64960  addiu       $a2, $a2, 0x4960
    ctx->pc = 0x211f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18784));
    // 0x211f34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x211f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211F3Cu;
    {
        const bool branch_taken_0x211f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F3Cu;
        // 0x211f40: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f3c) {
            ctx->pc = 0x211F4Cu;
            goto label_211f4c;
        }
    }
    ctx->pc = 0x211F44u;
    // 0x211f44: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x211f44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x211f48: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x211f48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_211f4c:
    // 0x211f4c: 0xc084822  jal         func_212088
    ctx->pc = 0x211F4Cu;
    SET_GPR_U32(ctx, 31, 0x211F54u);
    ctx->pc = 0x212088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212088u, 0x211F4Cu, 0x211F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211F54u;
label_211f54:
    // 0x211f54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f58: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x211f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x211f5c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x211f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f60: 0xc088ed2  jal         func_223B48
    ctx->pc = 0x211F60u;
    SET_GPR_U32(ctx, 31, 0x211F68u);
    ctx->pc = 0x211F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211F60u;
    // 0x211f64: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x211F60u, 0x211F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211F68u;
label_211f68:
    // 0x211f68: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x211f68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x211f6c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x211f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211f70: 0x24c649d0  addiu       $a2, $a2, 0x49D0
    ctx->pc = 0x211f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18896));
    // 0x211f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x211f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f7c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x211f7cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x211f80: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x211f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x211f84: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x211f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x211f88: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x211F88u;
    {
        const bool branch_taken_0x211f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F88u;
        // 0x211f8c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f88) {
            ctx->pc = 0x21202Cu;
            goto label_21202c;
        }
    }
    ctx->pc = 0x211F90u;
    // 0x211f90: 0xc084822  jal         func_212088
    ctx->pc = 0x211F90u;
    SET_GPR_U32(ctx, 31, 0x211F98u);
    ctx->pc = 0x212088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212088u, 0x211F90u, 0x211F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211F98u;
label_211f98:
    // 0x211f98: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x211f98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x211f9c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x211f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x211fa0: 0x24c64a40  addiu       $a2, $a2, 0x4A40
    ctx->pc = 0x211fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19008));
    // 0x211fa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211fa8: 0xc084822  jal         func_212088
    ctx->pc = 0x211FA8u;
    SET_GPR_U32(ctx, 31, 0x211FB0u);
    ctx->pc = 0x211FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211FA8u;
    // 0x211fac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212088u, 0x211FA8u, 0x211FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211FB0u;
label_211fb0:
    // 0x211fb0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x211fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x211fb4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x211fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x211fb8: 0x24c64ab0  addiu       $a2, $a2, 0x4AB0
    ctx->pc = 0x211fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19120));
    // 0x211fbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211fc0: 0xc084822  jal         func_212088
    ctx->pc = 0x211FC0u;
    SET_GPR_U32(ctx, 31, 0x211FC8u);
    ctx->pc = 0x211FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211FC0u;
    // 0x211fc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212088u, 0x211FC0u, 0x211FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211FC8u;
label_211fc8:
    // 0x211fc8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x211fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x211fcc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x211fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x211fd0: 0x24c64b20  addiu       $a2, $a2, 0x4B20
    ctx->pc = 0x211fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19232));
    // 0x211fd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211fd8: 0xc084822  jal         func_212088
    ctx->pc = 0x211FD8u;
    SET_GPR_U32(ctx, 31, 0x211FE0u);
    ctx->pc = 0x211FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211FD8u;
    // 0x211fdc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212088u, 0x211FD8u, 0x211FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211FE0u;
label_211fe0:
    // 0x211fe0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x211fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x211fe4: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x211fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x211fe8: 0x24c64b98  addiu       $a2, $a2, 0x4B98
    ctx->pc = 0x211fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19352));
    // 0x211fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ff0: 0xc084822  jal         func_212088
    ctx->pc = 0x211FF0u;
    SET_GPR_U32(ctx, 31, 0x211FF8u);
    ctx->pc = 0x211FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211FF0u;
    // 0x211ff4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212088u, 0x211FF0u, 0x211FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211FF8u;
label_211ff8:
    // 0x211ff8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x211ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x211ffc: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x211ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x212000: 0x24c64c08  addiu       $a2, $a2, 0x4C08
    ctx->pc = 0x212000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19464));
    // 0x212004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212008: 0xc084822  jal         func_212088
    ctx->pc = 0x212008u;
    SET_GPR_U32(ctx, 31, 0x212010u);
    ctx->pc = 0x21200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212008u;
    // 0x21200c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212088u, 0x212008u, 0x212010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212010u;
label_212010:
    // 0x212010: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x212010u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x212014: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x212014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x212018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21201c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21201cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212020: 0xc084822  jal         func_212088
    ctx->pc = 0x212020u;
    SET_GPR_U32(ctx, 31, 0x212028u);
    ctx->pc = 0x212024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212020u;
    // 0x212024: 0x24c64c90  addiu       $a2, $a2, 0x4C90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212088u, 0x212020u, 0x212028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212028u;
label_212028:
    // 0x212028: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x212028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_21202c:
    // 0x21202c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21202cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212030: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x212030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212034: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x212034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212038: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x212038u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21203c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21203cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212040: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x212040u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x212044: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x212044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212048: 0x3e00008  jr          $ra
    ctx->pc = 0x212048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212048u;
        // 0x21204c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212050u;
}

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

// Function: sub_00211B08
// Address: 0x211b08 - 0x211c60
void sub_00211B08_0x211b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211B08_0x211b08");
#endif

    switch (ctx->pc) {
        case 0x211b2cu: goto label_211b2c;
        case 0x211b50u: goto label_211b50;
        case 0x211b94u: goto label_211b94;
        case 0x211bc4u: goto label_211bc4;
        case 0x211bd0u: goto label_211bd0;
        case 0x211be0u: goto label_211be0;
        case 0x211bf4u: goto label_211bf4;
        case 0x211c08u: goto label_211c08;
        case 0x211c1cu: goto label_211c1c;
        case 0x211c30u: goto label_211c30;
        case 0x211c40u: goto label_211c40;
        default: break;
    }

    ctx->pc = 0x211b08u;

    // 0x211b08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x211b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x211b0c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x211b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x211b10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x211b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211b14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x211b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211b18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x211b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x211b1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x211b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x211b20: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x211b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x211b24: 0xc088e7a  jal         func_2239E8
    ctx->pc = 0x211B24u;
    SET_GPR_U32(ctx, 31, 0x211B2Cu);
    ctx->pc = 0x211B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211B24u;
    // 0x211b28: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E8u, 0x211B24u, 0x211B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211B2Cu;
label_211b2c:
    // 0x211b2c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x211b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211b30: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x211b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x211b34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211b38: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x211b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x211b3c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x211b3cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x211b40: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x211B40u;
    {
        const bool branch_taken_0x211b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B40u;
        // 0x211b44: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211b40) {
            ctx->pc = 0x211C48u;
            goto label_211c48;
        }
    }
    ctx->pc = 0x211B48u;
    // 0x211b48: 0xc088f76  jal         func_223DD8
    ctx->pc = 0x211B48u;
    SET_GPR_U32(ctx, 31, 0x211B50u);
    ctx->pc = 0x223DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DD8u, 0x211B48u, 0x211B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211B50u;
label_211b50:
    // 0x211b50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x211B50u;
    {
        const bool branch_taken_0x211b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B50u;
        // 0x211b54: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211b50) {
            ctx->pc = 0x211B64u;
            goto label_211b64;
        }
    }
    ctx->pc = 0x211B58u;
    // 0x211b58: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x211b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x211b5c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x211b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x211b60: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x211b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_211b64:
    // 0x211b64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211b68: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x211b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211b6c: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x211b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x211b70: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x211b70u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x211b74: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x211b74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x211b78: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x211b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x211b7c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x211b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x211b80: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x211b80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x211b84: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x211b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x211b88: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x211b88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x211b8c: 0xc0890ba  jal         func_2242E8
    ctx->pc = 0x211B8Cu;
    SET_GPR_U32(ctx, 31, 0x211B94u);
    ctx->pc = 0x211B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211B8Cu;
    // 0x211b90: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2242E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2242E8u, 0x211B8Cu, 0x211B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211B94u;
label_211b94:
    // 0x211b94: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x211b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x211b98: 0x2a10006e  slti        $s0, $s0, 0x6E
    ctx->pc = 0x211b98u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x211b9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x211b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ba4: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x211ba4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x211ba8: 0x31023  negu        $v0, $v1
    ctx->pc = 0x211ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x211bac: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x211BACu;
    {
        const bool branch_taken_0x211bac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x211BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BACu;
        // 0x211bb0: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211bac) {
            ctx->pc = 0x211BB8u;
            goto label_211bb8;
        }
    }
    ctx->pc = 0x211BB4u;
    // 0x211bb4: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x211bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_211bb8:
    // 0x211bb8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x211bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x211bbc: 0xc084718  jal         func_211C60
    ctx->pc = 0x211BBCu;
    SET_GPR_U32(ctx, 31, 0x211BC4u);
    ctx->pc = 0x211BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211BBCu;
    // 0x211bc0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211C60u, 0x211BBCu, 0x211BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211BC4u;
label_211bc4:
    // 0x211bc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211bc8: 0xc08473c  jal         func_211CF0
    ctx->pc = 0x211BC8u;
    SET_GPR_U32(ctx, 31, 0x211BD0u);
    ctx->pc = 0x211BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211BC8u;
    // 0x211bcc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211CF0u, 0x211BC8u, 0x211BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211BD0u;
label_211bd0:
    // 0x211bd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211bd4: 0x240500bd  addiu       $a1, $zero, 0xBD
    ctx->pc = 0x211bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x211bd8: 0xc08476a  jal         func_211DA8
    ctx->pc = 0x211BD8u;
    SET_GPR_U32(ctx, 31, 0x211BE0u);
    ctx->pc = 0x211BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211BD8u;
    // 0x211bdc: 0x240600bd  addiu       $a2, $zero, 0xBD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DA8u, 0x211BD8u, 0x211BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211BE0u;
label_211be0:
    // 0x211be0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211be4: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x211be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x211be8: 0x240500bf  addiu       $a1, $zero, 0xBF
    ctx->pc = 0x211be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x211bec: 0xc08476a  jal         func_211DA8
    ctx->pc = 0x211BECu;
    SET_GPR_U32(ctx, 31, 0x211BF4u);
    ctx->pc = 0x211BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211BECu;
    // 0x211bf0: 0x240600bf  addiu       $a2, $zero, 0xBF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DA8u, 0x211BECu, 0x211BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211BF4u;
label_211bf4:
    // 0x211bf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211bf8: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x211bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x211bfc: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x211bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x211c00: 0xc08476a  jal         func_211DA8
    ctx->pc = 0x211C00u;
    SET_GPR_U32(ctx, 31, 0x211C08u);
    ctx->pc = 0x211C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211C00u;
    // 0x211c04: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DA8u, 0x211C00u, 0x211C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C08u;
label_211c08:
    // 0x211c08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c0c: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x211c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x211c10: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x211c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x211c14: 0xc08476a  jal         func_211DA8
    ctx->pc = 0x211C14u;
    SET_GPR_U32(ctx, 31, 0x211C1Cu);
    ctx->pc = 0x211C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211C14u;
    // 0x211c18: 0x240600ef  addiu       $a2, $zero, 0xEF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DA8u, 0x211C14u, 0x211C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C1Cu;
label_211c1c:
    // 0x211c1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c20: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x211c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x211c24: 0x2626004c  addiu       $a2, $s1, 0x4C
    ctx->pc = 0x211c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x211c28: 0xc084788  jal         func_211E20
    ctx->pc = 0x211C28u;
    SET_GPR_U32(ctx, 31, 0x211C30u);
    ctx->pc = 0x211C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211C28u;
    // 0x211c2c: 0x8e250044  lw          $a1, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E20u, 0x211C28u, 0x211C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C30u;
label_211c30:
    // 0x211c30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c34: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x211c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x211c38: 0xc0847ae  jal         func_211EB8
    ctx->pc = 0x211C38u;
    SET_GPR_U32(ctx, 31, 0x211C40u);
    ctx->pc = 0x211C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211C38u;
    // 0x211c3c: 0x2626005c  addiu       $a2, $s1, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB8u, 0x211C38u, 0x211C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C40u;
label_211c40:
    // 0x211c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x211c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211c44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x211c44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_211c48:
    // 0x211c48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x211c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211c4c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x211c4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x211c50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x211c50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211c54: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x211c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x211c58: 0x3e00008  jr          $ra
    ctx->pc = 0x211C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C58u;
        // 0x211c5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211C60u;
}

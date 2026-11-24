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

// Function: sub_002D1C70
// Address: 0x2d1c70 - 0x2d1ea0
void sub_002D1C70_0x2d1c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1C70_0x2d1c70");
#endif

    switch (ctx->pc) {
        case 0x2d1c98u: goto label_2d1c98;
        case 0x2d1cb4u: goto label_2d1cb4;
        case 0x2d1d60u: goto label_2d1d60;
        case 0x2d1e88u: goto label_2d1e88;
        default: break;
    }

    ctx->pc = 0x2d1c70u;

    // 0x2d1c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d1c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d1c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d1c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d1c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1c7c: 0x9085006e  lbu         $a1, 0x6E($a0)
    ctx->pc = 0x2d1c7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 110)));
    // 0x2d1c80: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x2d1c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x2d1c84: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1C84u;
    {
        const bool branch_taken_0x2d1c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C84u;
        // 0x2d1c88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c84) {
            ctx->pc = 0x2D1CA0u;
            goto label_2d1ca0;
        }
    }
    ctx->pc = 0x2D1C8Cu;
    // 0x2d1c8c: 0x30a200fd  andi        $v0, $a1, 0xFD
    ctx->pc = 0x2d1c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)253);
    // 0x2d1c90: 0xc0b4708  jal         func_2D1C20
    ctx->pc = 0x2D1C90u;
    SET_GPR_U32(ctx, 31, 0x2D1C98u);
    ctx->pc = 0x2D1C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1C90u;
    // 0x2d1c94: 0xa202006e  sb          $v0, 0x6E($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1C20u, 0x2D1C90u, 0x2D1C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1C98u;
label_2d1c98:
    // 0x2d1c98: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2D1C98u;
    {
        const bool branch_taken_0x2d1c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1c98) {
            ctx->pc = 0x2D1E90u;
            goto label_2d1e90;
        }
    }
    ctx->pc = 0x2D1CA0u;
label_2d1ca0:
    // 0x2d1ca0: 0x9203005c  lbu         $v1, 0x5C($s0)
    ctx->pc = 0x2d1ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2d1ca4: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2D1CA4u;
    {
        const bool branch_taken_0x2d1ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ca4) {
            ctx->pc = 0x2D1D40u;
            goto label_2d1d40;
        }
    }
    ctx->pc = 0x2D1CACu;
    // 0x2d1cac: 0xc0b4434  jal         func_2D10D0
    ctx->pc = 0x2D1CACu;
    SET_GPR_U32(ctx, 31, 0x2D1CB4u);
    ctx->pc = 0x2D10D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D10D0u, 0x2D1CACu, 0x2D1CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CB4u;
label_2d1cb4:
    // 0x2d1cb4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2d1cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d1cb8: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x2d1cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x2d1cbc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1CBCu;
    {
        const bool branch_taken_0x2d1cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1cbc) {
            ctx->pc = 0x2D1CCCu;
            goto label_2d1ccc;
        }
    }
    ctx->pc = 0x2D1CC4u;
    // 0x2d1cc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1CC4u;
    {
        const bool branch_taken_0x2d1cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CC4u;
        // 0x2d1cc8: 0x92030016  lbu         $v1, 0x16($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1cc4) {
            ctx->pc = 0x2D1CDCu;
            goto label_2d1cdc;
        }
    }
    ctx->pc = 0x2D1CCCu;
label_2d1ccc:
    // 0x2d1ccc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1CCCu;
    {
        const bool branch_taken_0x2d1ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CCCu;
        // 0x2d1cd0: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ccc) {
            ctx->pc = 0x2D1CDCu;
            goto label_2d1cdc;
        }
    }
    ctx->pc = 0x2D1CD4u;
    // 0x2d1cd4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D1CD4u;
    {
        const bool branch_taken_0x2d1cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CD4u;
        // 0x2d1cd8: 0x90430002  lbu         $v1, 0x2($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1cd4) {
            ctx->pc = 0x2D1CDCu;
            goto label_2d1cdc;
        }
    }
    ctx->pc = 0x2D1CDCu;
label_2d1cdc:
    // 0x2d1cdc: 0x92040014  lbu         $a0, 0x14($s0)
    ctx->pc = 0x2d1cdcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2d1ce0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d1ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d1ce4: 0x1064006a  beq         $v1, $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2D1CE4u;
    {
        const bool branch_taken_0x2d1ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2d1ce4) {
            ctx->pc = 0x2D1E90u;
            goto label_2d1e90;
        }
    }
    ctx->pc = 0x2D1CECu;
    // 0x2d1cec: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2d1cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d1cf0: 0x10830067  beq         $a0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x2D1CF0u;
    {
        const bool branch_taken_0x2d1cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CF0u;
        // 0x2d1cf4: 0x30a30800  andi        $v1, $a1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1cf0) {
            ctx->pc = 0x2D1E90u;
            goto label_2d1e90;
        }
    }
    ctx->pc = 0x2D1CF8u;
    // 0x2d1cf8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1CF8u;
    {
        const bool branch_taken_0x2d1cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1cf8) {
            ctx->pc = 0x2D1D10u;
            goto label_2d1d10;
        }
    }
    ctx->pc = 0x2D1D00u;
    // 0x2d1d00: 0x9203006e  lbu         $v1, 0x6E($s0)
    ctx->pc = 0x2d1d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 110)));
    // 0x2d1d04: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2d1d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2d1d08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D1D08u;
    {
        const bool branch_taken_0x2d1d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D08u;
        // 0x2d1d0c: 0xa203006e  sb          $v1, 0x6E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d08) {
            ctx->pc = 0x2D1D38u;
            goto label_2d1d38;
        }
    }
    ctx->pc = 0x2D1D10u;
label_2d1d10:
    // 0x2d1d10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1d14: 0xa203005c  sb          $v1, 0x5C($s0)
    ctx->pc = 0x2d1d14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1d18: 0xa600005e  sh          $zero, 0x5E($s0)
    ctx->pc = 0x2d1d18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d1d1c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2d1d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d1d20: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x2d1d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x2d1d24: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2d1d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2d1d28: 0x9203006e  lbu         $v1, 0x6E($s0)
    ctx->pc = 0x2d1d28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 110)));
    // 0x2d1d2c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2d1d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2d1d30: 0xa203006e  sb          $v1, 0x6E($s0)
    ctx->pc = 0x2d1d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1d34: 0x0  nop
    ctx->pc = 0x2d1d34u;
    // NOP
label_2d1d38:
    // 0x2d1d38: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2D1D38u;
    {
        const bool branch_taken_0x2d1d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1d38) {
            ctx->pc = 0x2D1E90u;
            goto label_2d1e90;
        }
    }
    ctx->pc = 0x2D1D40u;
label_2d1d40:
    // 0x2d1d40: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x2D1D40u;
    {
        const bool branch_taken_0x2d1d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1d40) {
            ctx->pc = 0x2D1E90u;
            goto label_2d1e90;
        }
    }
    ctx->pc = 0x2D1D48u;
    // 0x2d1d48: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2d1d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d1d4c: 0x3063000b  andi        $v1, $v1, 0xB
    ctx->pc = 0x2d1d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)11);
    // 0x2d1d50: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1D50u;
    {
        const bool branch_taken_0x2d1d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1d50) {
            ctx->pc = 0x2D1D68u;
            goto label_2d1d68;
        }
    }
    ctx->pc = 0x2D1D58u;
    // 0x2d1d58: 0xc0b4708  jal         func_2D1C20
    ctx->pc = 0x2D1D58u;
    SET_GPR_U32(ctx, 31, 0x2D1D60u);
    ctx->pc = 0x2D1C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1C20u, 0x2D1D58u, 0x2D1D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D60u;
label_2d1d60:
    // 0x2d1d60: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2D1D60u;
    {
        const bool branch_taken_0x2d1d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1d60) {
            ctx->pc = 0x2D1E90u;
            goto label_2d1e90;
        }
    }
    ctx->pc = 0x2D1D68u;
label_2d1d68:
    // 0x2d1d68: 0x8606002a  lh          $a2, 0x2A($s0)
    ctx->pc = 0x2d1d68u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x2d1d6c: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2d1d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d1d70: 0x3c054278  lui         $a1, 0x4278
    ctx->pc = 0x2d1d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17016 << 16));
    // 0x2d1d74: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d1d74u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1d78: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2d1d78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d1d7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d1d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d1d80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d1d80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d1d84: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2d1d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x2d1d88: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x2d1d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d1d8c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d1d8cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d1d90: 0x2ca10014  sltiu       $at, $a1, 0x14
    ctx->pc = 0x2d1d90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x2d1d94: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D1D94u;
    {
        const bool branch_taken_0x2d1d94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D94u;
        // 0x2d1d98: 0x46000881  sub.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d94) {
            ctx->pc = 0x2D1DF0u;
            goto label_2d1df0;
        }
    }
    ctx->pc = 0x2D1D9Cu;
    // 0x2d1d9c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1D9Cu;
    {
        const bool branch_taken_0x2d1d9c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2D1DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D9Cu;
        // 0x2d1da0: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d9c) {
            ctx->pc = 0x2D1DB0u;
            goto label_2d1db0;
        }
    }
    ctx->pc = 0x2D1DA4u;
    // 0x2d1da4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d1da4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1da8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1DA8u;
    {
        const bool branch_taken_0x2d1da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DA8u;
        // 0x2d1dac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1da8) {
            ctx->pc = 0x2D1DC8u;
            goto label_2d1dc8;
        }
    }
    ctx->pc = 0x2D1DB0u;
label_2d1db0:
    // 0x2d1db0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2d1db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d1db4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d1db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d1db8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d1db8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1dbc: 0x0  nop
    ctx->pc = 0x2d1dbcu;
    // NOP
    // 0x2d1dc0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2d1dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d1dc4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2d1dc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2d1dc8:
    // 0x2d1dc8: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2d1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2d1dcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d1dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1dd0: 0x0  nop
    ctx->pc = 0x2d1dd0u;
    // NOP
    // 0x2d1dd4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2d1dd4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d1dd8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d1dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d1ddc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d1ddcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d1de0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2d1de0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d1de4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2D1DE4u;
    {
        const bool branch_taken_0x2d1de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DE4u;
        // 0x2d1de8: 0xa603005e  sh          $v1, 0x5E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1de4) {
            ctx->pc = 0x2D1E90u;
            goto label_2d1e90;
        }
    }
    ctx->pc = 0x2D1DECu;
    // 0x2d1dec: 0x0  nop
    ctx->pc = 0x2d1decu;
    // NOP
label_2d1df0:
    // 0x2d1df0: 0x2ca10028  sltiu       $at, $a1, 0x28
    ctx->pc = 0x2d1df0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x2d1df4: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D1DF4u;
    {
        const bool branch_taken_0x2d1df4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DF4u;
        // 0x2d1df8: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1df4) {
            ctx->pc = 0x2D1E80u;
            goto label_2d1e80;
        }
    }
    ctx->pc = 0x2D1DFCu;
    // 0x2d1dfc: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1DFCu;
    {
        const bool branch_taken_0x2d1dfc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d1dfc) {
            ctx->pc = 0x2D1E20u;
            goto label_2d1e20;
        }
    }
    ctx->pc = 0x2D1E04u;
    // 0x2d1e04: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2d1e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d1e08: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x2d1e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x2d1e0c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d1e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d1e10: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2d1e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2d1e14: 0x9203006e  lbu         $v1, 0x6E($s0)
    ctx->pc = 0x2d1e14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 110)));
    // 0x2d1e18: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2d1e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2d1e1c: 0xa203006e  sb          $v1, 0x6E($s0)
    ctx->pc = 0x2d1e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 3));
label_2d1e20:
    // 0x2d1e20: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x2d1e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d1e24: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2d1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2d1e28: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2d1e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d1e2c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1E2Cu;
    {
        const bool branch_taken_0x2d1e2c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2D1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E2Cu;
        // 0x2d1e30: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e2c) {
            ctx->pc = 0x2D1E40u;
            goto label_2d1e40;
        }
    }
    ctx->pc = 0x2D1E34u;
    // 0x2d1e34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d1e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1e38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1E38u;
    {
        const bool branch_taken_0x2d1e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E38u;
        // 0x2d1e3c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e38) {
            ctx->pc = 0x2D1E58u;
            goto label_2d1e58;
        }
    }
    ctx->pc = 0x2D1E40u;
label_2d1e40:
    // 0x2d1e40: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d1e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d1e44: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d1e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d1e48: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d1e48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1e4c: 0x0  nop
    ctx->pc = 0x2d1e4cu;
    // NOP
    // 0x2d1e50: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2d1e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d1e54: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2d1e54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2d1e58:
    // 0x2d1e58: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2d1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2d1e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d1e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1e60: 0x0  nop
    ctx->pc = 0x2d1e60u;
    // NOP
    // 0x2d1e64: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2d1e64u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d1e68: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d1e68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d1e6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d1e6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d1e70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2d1e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d1e74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1E74u;
    {
        const bool branch_taken_0x2d1e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E74u;
        // 0x2d1e78: 0xa603005e  sh          $v1, 0x5E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e74) {
            ctx->pc = 0x2D1E90u;
            goto label_2d1e90;
        }
    }
    ctx->pc = 0x2D1E7Cu;
    // 0x2d1e7c: 0x0  nop
    ctx->pc = 0x2d1e7cu;
    // NOP
label_2d1e80:
    // 0x2d1e80: 0xc0b4708  jal         func_2D1C20
    ctx->pc = 0x2D1E80u;
    SET_GPR_U32(ctx, 31, 0x2D1E88u);
    ctx->pc = 0x2D1C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1C20u, 0x2D1E80u, 0x2D1E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1E88u;
label_2d1e88:
    // 0x2d1e88: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D1E88u;
    {
        const bool branch_taken_0x2d1e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1e88) {
            ctx->pc = 0x2D1E90u;
            goto label_2d1e90;
        }
    }
    ctx->pc = 0x2D1E90u;
label_2d1e90:
    // 0x2d1e90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d1e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1e94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1e98: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E98u;
        // 0x2d1e9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1EA0u;
}

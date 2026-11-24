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

// Function: sub_00298C00
// Address: 0x298c00 - 0x298e30
void sub_00298C00_0x298c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298C00_0x298c00");
#endif

    switch (ctx->pc) {
        case 0x298c00u: goto label_298c00;
        case 0x298c04u: goto label_298c04;
        case 0x298c08u: goto label_298c08;
        case 0x298c0cu: goto label_298c0c;
        case 0x298c10u: goto label_298c10;
        case 0x298c14u: goto label_298c14;
        case 0x298c18u: goto label_298c18;
        case 0x298c1cu: goto label_298c1c;
        case 0x298c20u: goto label_298c20;
        case 0x298c24u: goto label_298c24;
        case 0x298c28u: goto label_298c28;
        case 0x298c2cu: goto label_298c2c;
        case 0x298c30u: goto label_298c30;
        case 0x298c34u: goto label_298c34;
        case 0x298c38u: goto label_298c38;
        case 0x298c3cu: goto label_298c3c;
        case 0x298c40u: goto label_298c40;
        case 0x298c44u: goto label_298c44;
        case 0x298c48u: goto label_298c48;
        case 0x298c4cu: goto label_298c4c;
        case 0x298c50u: goto label_298c50;
        case 0x298c54u: goto label_298c54;
        case 0x298c58u: goto label_298c58;
        case 0x298c5cu: goto label_298c5c;
        case 0x298c60u: goto label_298c60;
        case 0x298c64u: goto label_298c64;
        case 0x298c68u: goto label_298c68;
        case 0x298c6cu: goto label_298c6c;
        case 0x298c70u: goto label_298c70;
        case 0x298c74u: goto label_298c74;
        case 0x298c78u: goto label_298c78;
        case 0x298c7cu: goto label_298c7c;
        case 0x298c80u: goto label_298c80;
        case 0x298c84u: goto label_298c84;
        case 0x298c88u: goto label_298c88;
        case 0x298c8cu: goto label_298c8c;
        case 0x298c90u: goto label_298c90;
        case 0x298c94u: goto label_298c94;
        case 0x298c98u: goto label_298c98;
        case 0x298c9cu: goto label_298c9c;
        case 0x298ca0u: goto label_298ca0;
        case 0x298ca4u: goto label_298ca4;
        case 0x298ca8u: goto label_298ca8;
        case 0x298cacu: goto label_298cac;
        case 0x298cb0u: goto label_298cb0;
        case 0x298cb4u: goto label_298cb4;
        case 0x298cb8u: goto label_298cb8;
        case 0x298cbcu: goto label_298cbc;
        case 0x298cc0u: goto label_298cc0;
        case 0x298cc4u: goto label_298cc4;
        case 0x298cc8u: goto label_298cc8;
        case 0x298cccu: goto label_298ccc;
        case 0x298cd0u: goto label_298cd0;
        case 0x298cd4u: goto label_298cd4;
        case 0x298cd8u: goto label_298cd8;
        case 0x298cdcu: goto label_298cdc;
        case 0x298ce0u: goto label_298ce0;
        case 0x298ce4u: goto label_298ce4;
        case 0x298ce8u: goto label_298ce8;
        case 0x298cecu: goto label_298cec;
        case 0x298cf0u: goto label_298cf0;
        case 0x298cf4u: goto label_298cf4;
        case 0x298cf8u: goto label_298cf8;
        case 0x298cfcu: goto label_298cfc;
        case 0x298d00u: goto label_298d00;
        case 0x298d04u: goto label_298d04;
        case 0x298d08u: goto label_298d08;
        case 0x298d0cu: goto label_298d0c;
        case 0x298d10u: goto label_298d10;
        case 0x298d14u: goto label_298d14;
        case 0x298d18u: goto label_298d18;
        case 0x298d1cu: goto label_298d1c;
        case 0x298d20u: goto label_298d20;
        case 0x298d24u: goto label_298d24;
        case 0x298d28u: goto label_298d28;
        case 0x298d2cu: goto label_298d2c;
        case 0x298d30u: goto label_298d30;
        case 0x298d34u: goto label_298d34;
        case 0x298d38u: goto label_298d38;
        case 0x298d3cu: goto label_298d3c;
        case 0x298d40u: goto label_298d40;
        case 0x298d44u: goto label_298d44;
        case 0x298d48u: goto label_298d48;
        case 0x298d4cu: goto label_298d4c;
        case 0x298d50u: goto label_298d50;
        case 0x298d54u: goto label_298d54;
        case 0x298d58u: goto label_298d58;
        case 0x298d5cu: goto label_298d5c;
        case 0x298d60u: goto label_298d60;
        case 0x298d64u: goto label_298d64;
        case 0x298d68u: goto label_298d68;
        case 0x298d6cu: goto label_298d6c;
        case 0x298d70u: goto label_298d70;
        case 0x298d74u: goto label_298d74;
        case 0x298d78u: goto label_298d78;
        case 0x298d7cu: goto label_298d7c;
        case 0x298d80u: goto label_298d80;
        case 0x298d84u: goto label_298d84;
        case 0x298d88u: goto label_298d88;
        case 0x298d8cu: goto label_298d8c;
        case 0x298d90u: goto label_298d90;
        case 0x298d94u: goto label_298d94;
        case 0x298d98u: goto label_298d98;
        case 0x298d9cu: goto label_298d9c;
        case 0x298da0u: goto label_298da0;
        case 0x298da4u: goto label_298da4;
        case 0x298da8u: goto label_298da8;
        case 0x298dacu: goto label_298dac;
        case 0x298db0u: goto label_298db0;
        case 0x298db4u: goto label_298db4;
        case 0x298db8u: goto label_298db8;
        case 0x298dbcu: goto label_298dbc;
        case 0x298dc0u: goto label_298dc0;
        case 0x298dc4u: goto label_298dc4;
        case 0x298dc8u: goto label_298dc8;
        case 0x298dccu: goto label_298dcc;
        case 0x298dd0u: goto label_298dd0;
        case 0x298dd4u: goto label_298dd4;
        case 0x298dd8u: goto label_298dd8;
        case 0x298ddcu: goto label_298ddc;
        case 0x298de0u: goto label_298de0;
        case 0x298de4u: goto label_298de4;
        case 0x298de8u: goto label_298de8;
        case 0x298decu: goto label_298dec;
        case 0x298df0u: goto label_298df0;
        case 0x298df4u: goto label_298df4;
        case 0x298df8u: goto label_298df8;
        case 0x298dfcu: goto label_298dfc;
        case 0x298e00u: goto label_298e00;
        case 0x298e04u: goto label_298e04;
        case 0x298e08u: goto label_298e08;
        case 0x298e0cu: goto label_298e0c;
        case 0x298e10u: goto label_298e10;
        case 0x298e14u: goto label_298e14;
        case 0x298e18u: goto label_298e18;
        case 0x298e1cu: goto label_298e1c;
        case 0x298e20u: goto label_298e20;
        case 0x298e24u: goto label_298e24;
        case 0x298e28u: goto label_298e28;
        case 0x298e2cu: goto label_298e2c;
        default: break;
    }

    ctx->pc = 0x298c00u;

label_298c00:
    // 0x298c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_298c04:
    // 0x298c04: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x298c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_298c08:
    // 0x298c08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x298c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_298c0c:
    // 0x298c0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_298c10:
    // 0x298c10: 0x8c23ced4  lw          $v1, -0x312C($at)
    ctx->pc = 0x298c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954708)));
label_298c14:
    // 0x298c14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_298c18:
    // 0x298c18: 0x3c048ff8  lui         $a0, 0x8FF8
    ctx->pc = 0x298c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36856 << 16));
label_298c1c:
    // 0x298c1c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x298c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_298c20:
    // 0x298c20: 0x1064007f  beq         $v1, $a0, . + 4 + (0x7F << 2)
label_298c24:
    if (ctx->pc == 0x298C24u) {
        ctx->pc = 0x298C28u;
        goto label_298c28;
    }
    ctx->pc = 0x298C20u;
    {
        const bool branch_taken_0x298c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x298c20) {
            ctx->pc = 0x298E20u;
            goto label_298e20;
        }
    }
    ctx->pc = 0x298C28u;
label_298c28:
    // 0x298c28: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x298c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_298c2c:
    // 0x298c2c: 0x1080007c  beqz        $a0, . + 4 + (0x7C << 2)
label_298c30:
    if (ctx->pc == 0x298C30u) {
        ctx->pc = 0x298C34u;
        goto label_298c34;
    }
    ctx->pc = 0x298C2Cu;
    {
        const bool branch_taken_0x298c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x298c2c) {
            ctx->pc = 0x298E20u;
            goto label_298e20;
        }
    }
    ctx->pc = 0x298C34u;
label_298c34:
    // 0x298c34: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x298c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_298c38:
    // 0x298c38: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x298c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_298c3c:
    // 0x298c3c: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
label_298c40:
    if (ctx->pc == 0x298C40u) {
        ctx->pc = 0x298C44u;
        goto label_298c44;
    }
    ctx->pc = 0x298C3Cu;
    {
        const bool branch_taken_0x298c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298c3c) {
            ctx->pc = 0x298E20u;
            goto label_298e20;
        }
    }
    ctx->pc = 0x298C44u;
label_298c44:
    // 0x298c44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x298c44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_298c48:
    // 0x298c48: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x298c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_298c4c:
    // 0x298c4c: 0x320f809  jalr        $t9
label_298c50:
    if (ctx->pc == 0x298C50u) {
        ctx->pc = 0x298C54u;
        goto label_298c54;
    }
    ctx->pc = 0x298C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x298C54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298C4Cu, 0x298C54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298C54u;
label_298c54:
    // 0x298c54: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x298c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_298c58:
    // 0x298c58: 0xac4000b4  sw          $zero, 0xB4($v0)
    ctx->pc = 0x298c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
label_298c5c:
    // 0x298c5c: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x298c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
label_298c60:
    // 0x298c60: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x298c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_298c64:
    // 0x298c64: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x298c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_298c68:
    // 0x298c68: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x298c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_298c6c:
    // 0x298c6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x298c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_298c70:
    // 0x298c70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x298c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_298c74:
    // 0x298c74: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_298c78:
    if (ctx->pc == 0x298C78u) {
        ctx->pc = 0x298C7Cu;
        goto label_298c7c;
    }
    ctx->pc = 0x298C74u;
    {
        const bool branch_taken_0x298c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298c74) {
            ctx->pc = 0x298D00u;
            goto label_298d00;
        }
    }
    ctx->pc = 0x298C7Cu;
label_298c7c:
    // 0x298c7c: 0x8e0507ec  lw          $a1, 0x7EC($s0)
    ctx->pc = 0x298c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2028)));
label_298c80:
    // 0x298c80: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x298c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_298c84:
    // 0x298c84: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x298c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_298c88:
    // 0x298c88: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_298c8c:
    if (ctx->pc == 0x298C8Cu) {
        ctx->pc = 0x298C90u;
        goto label_298c90;
    }
    ctx->pc = 0x298C88u;
    {
        const bool branch_taken_0x298c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298c88) {
            ctx->pc = 0x298D00u;
            goto label_298d00;
        }
    }
    ctx->pc = 0x298C90u;
label_298c90:
    // 0x298c90: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x298c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_298c94:
    // 0x298c94: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x298c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_298c98:
    // 0x298c98: 0x8c8300b0  lw          $v1, 0xB0($a0)
    ctx->pc = 0x298c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_298c9c:
    // 0x298c9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x298c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_298ca0:
    // 0x298ca0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_298ca4:
    if (ctx->pc == 0x298CA4u) {
        ctx->pc = 0x298CA8u;
        goto label_298ca8;
    }
    ctx->pc = 0x298CA0u;
    {
        const bool branch_taken_0x298ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298ca0) {
            ctx->pc = 0x298CB8u;
            goto label_298cb8;
        }
    }
    ctx->pc = 0x298CA8u;
label_298ca8:
    // 0x298ca8: 0x920207f6  lbu         $v0, 0x7F6($s0)
    ctx->pc = 0x298ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_298cac:
    // 0x298cac: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_298cb0:
    if (ctx->pc == 0x298CB0u) {
        ctx->pc = 0x298CB4u;
        goto label_298cb4;
    }
    ctx->pc = 0x298CACu;
    {
        const bool branch_taken_0x298cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298cac) {
            ctx->pc = 0x298D00u;
            goto label_298d00;
        }
    }
    ctx->pc = 0x298CB4u;
label_298cb4:
    // 0x298cb4: 0x0  nop
    ctx->pc = 0x298cb4u;
    // NOP
label_298cb8:
    // 0x298cb8: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x298cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_298cbc:
    // 0x298cbc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_298cc0:
    if (ctx->pc == 0x298CC0u) {
        ctx->pc = 0x298CC4u;
        goto label_298cc4;
    }
    ctx->pc = 0x298CBCu;
    {
        const bool branch_taken_0x298cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298cbc) {
            ctx->pc = 0x298CD8u;
            goto label_298cd8;
        }
    }
    ctx->pc = 0x298CC4u;
label_298cc4:
    // 0x298cc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x298cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_298cc8:
    // 0x298cc8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x298cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_298ccc:
    // 0x298ccc: 0x320f809  jalr        $t9
label_298cd0:
    if (ctx->pc == 0x298CD0u) {
        ctx->pc = 0x298CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CCCu;
        // 0x298cd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CD4u;
        goto label_298cd4;
    }
    ctx->pc = 0x298CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x298CD4u);
        ctx->pc = 0x298CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CCCu;
        // 0x298cd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298CCCu, 0x298CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298CD4u;
label_298cd4:
    // 0x298cd4: 0x0  nop
    ctx->pc = 0x298cd4u;
    // NOP
label_298cd8:
    // 0x298cd8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x298cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_298cdc:
    // 0x298cdc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x298cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_298ce0:
    // 0x298ce0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x298ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_298ce4:
    // 0x298ce4: 0x320f809  jalr        $t9
label_298ce8:
    if (ctx->pc == 0x298CE8u) {
        ctx->pc = 0x298CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CE4u;
        // 0x298ce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CECu;
        goto label_298cec;
    }
    ctx->pc = 0x298CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x298CECu);
        ctx->pc = 0x298CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CE4u;
        // 0x298ce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298CE4u, 0x298CECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298CECu;
label_298cec:
    // 0x298cec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x298cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_298cf0:
    // 0x298cf0: 0x920207f6  lbu         $v0, 0x7F6($s0)
    ctx->pc = 0x298cf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_298cf4:
    // 0x298cf4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x298cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_298cf8:
    // 0x298cf8: 0xa20207f6  sb          $v0, 0x7F6($s0)
    ctx->pc = 0x298cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 2));
label_298cfc:
    // 0x298cfc: 0x0  nop
    ctx->pc = 0x298cfcu;
    // NOP
label_298d00:
    // 0x298d00: 0x920307f9  lbu         $v1, 0x7F9($s0)
    ctx->pc = 0x298d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2041)));
label_298d04:
    // 0x298d04: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x298d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_298d08:
    // 0x298d08: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_298d0c:
    if (ctx->pc == 0x298D0Cu) {
        ctx->pc = 0x298D10u;
        goto label_298d10;
    }
    ctx->pc = 0x298D08u;
    {
        const bool branch_taken_0x298d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298d08) {
            ctx->pc = 0x298D98u;
            goto label_298d98;
        }
    }
    ctx->pc = 0x298D10u;
label_298d10:
    // 0x298d10: 0x920207f6  lbu         $v0, 0x7F6($s0)
    ctx->pc = 0x298d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_298d14:
    // 0x298d14: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_298d18:
    if (ctx->pc == 0x298D18u) {
        ctx->pc = 0x298D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D14u;
        // 0x298d18: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D1Cu;
        goto label_298d1c;
    }
    ctx->pc = 0x298D14u;
    {
        const bool branch_taken_0x298d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D14u;
        // 0x298d18: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d14) {
            ctx->pc = 0x298D98u;
            goto label_298d98;
        }
    }
    ctx->pc = 0x298D1Cu;
label_298d1c:
    // 0x298d1c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_298d20:
    if (ctx->pc == 0x298D20u) {
        ctx->pc = 0x298D24u;
        goto label_298d24;
    }
    ctx->pc = 0x298D1Cu;
    {
        const bool branch_taken_0x298d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298d1c) {
            ctx->pc = 0x298D98u;
            goto label_298d98;
        }
    }
    ctx->pc = 0x298D24u;
label_298d24:
    // 0x298d24: 0xa20007f9  sb          $zero, 0x7F9($s0)
    ctx->pc = 0x298d24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2041), (uint8_t)GPR_U32(ctx, 0));
label_298d28:
    // 0x298d28: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x298d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_298d2c:
    // 0x298d2c: 0xa20007f8  sb          $zero, 0x7F8($s0)
    ctx->pc = 0x298d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2040), (uint8_t)GPR_U32(ctx, 0));
label_298d30:
    // 0x298d30: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x298d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_298d34:
    // 0x298d34: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x298d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_298d38:
    // 0x298d38: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x298d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_298d3c:
    // 0x298d3c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x298d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_298d40:
    // 0x298d40: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x298d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_298d44:
    // 0x298d44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x298d44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_298d48:
    // 0x298d48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_298d4c:
    // 0x298d4c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x298d4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_298d50:
    // 0x298d50: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x298d50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_298d54:
    // 0x298d54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x298d54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_298d58:
    // 0x298d58: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_298d5c:
    if (ctx->pc == 0x298D5Cu) {
        ctx->pc = 0x298D60u;
        goto label_298d60;
    }
    ctx->pc = 0x298D58u;
    {
        const bool branch_taken_0x298d58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x298d58) {
            ctx->pc = 0x298D70u;
            goto label_298d70;
        }
    }
    ctx->pc = 0x298D60u;
label_298d60:
    // 0x298d60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x298d60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_298d64:
    // 0x298d64: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x298d64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_298d68:
    // 0x298d68: 0x10000008  b           . + 4 + (0x8 << 2)
label_298d6c:
    if (ctx->pc == 0x298D6Cu) {
        ctx->pc = 0x298D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D68u;
        // 0x298d6c: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D70u;
        goto label_298d70;
    }
    ctx->pc = 0x298D68u;
    {
        const bool branch_taken_0x298d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D68u;
        // 0x298d6c: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d68) {
            ctx->pc = 0x298D8Cu;
            goto label_298d8c;
        }
    }
    ctx->pc = 0x298D70u;
label_298d70:
    // 0x298d70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x298d70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_298d74:
    // 0x298d74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x298d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_298d78:
    // 0x298d78: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x298d78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_298d7c:
    // 0x298d7c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x298d7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_298d80:
    // 0x298d80: 0x0  nop
    ctx->pc = 0x298d80u;
    // NOP
label_298d84:
    // 0x298d84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x298d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_298d88:
    // 0x298d88: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x298d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_298d8c:
    // 0x298d8c: 0xc0a6898  jal         func_29A260
label_298d90:
    if (ctx->pc == 0x298D90u) {
        ctx->pc = 0x298D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D8Cu;
        // 0x298d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D94u;
        goto label_298d94;
    }
    ctx->pc = 0x298D8Cu;
    SET_GPR_U32(ctx, 31, 0x298D94u);
    ctx->pc = 0x298D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D8Cu;
    // 0x298d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x298D8Cu, 0x298D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D94u;
label_298d94:
    // 0x298d94: 0x0  nop
    ctx->pc = 0x298d94u;
    // NOP
label_298d98:
    // 0x298d98: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x298d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_298d9c:
    // 0x298d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_298da0:
    // 0x298da0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x298da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_298da4:
    // 0x298da4: 0xc0a6600  jal         func_299800
label_298da8:
    if (ctx->pc == 0x298DA8u) {
        ctx->pc = 0x298DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DA4u;
        // 0x298da8: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298DACu;
        goto label_298dac;
    }
    ctx->pc = 0x298DA4u;
    SET_GPR_U32(ctx, 31, 0x298DACu);
    ctx->pc = 0x298DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298DA4u;
    // 0x298da8: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299800u, 0x298DA4u, 0x298DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298DACu;
label_298dac:
    // 0x298dac: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x298dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_298db0:
    // 0x298db0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x298db0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_298db4:
    // 0x298db4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x298db4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_298db8:
    // 0x298db8: 0x320f809  jalr        $t9
label_298dbc:
    if (ctx->pc == 0x298DBCu) {
        ctx->pc = 0x298DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DB8u;
        // 0x298dbc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298DC0u;
        goto label_298dc0;
    }
    ctx->pc = 0x298DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x298DC0u);
        ctx->pc = 0x298DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DB8u;
        // 0x298dbc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298DB8u, 0x298DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298DC0u;
label_298dc0:
    // 0x298dc0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x298dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_298dc4:
    // 0x298dc4: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x298dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_298dc8:
    // 0x298dc8: 0x30630600  andi        $v1, $v1, 0x600
    ctx->pc = 0x298dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1536);
label_298dcc:
    // 0x298dcc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_298dd0:
    if (ctx->pc == 0x298DD0u) {
        ctx->pc = 0x298DD4u;
        goto label_298dd4;
    }
    ctx->pc = 0x298DCCu;
    {
        const bool branch_taken_0x298dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x298dcc) {
            ctx->pc = 0x298E20u;
            goto label_298e20;
        }
    }
    ctx->pc = 0x298DD4u;
label_298dd4:
    // 0x298dd4: 0x8c8300b0  lw          $v1, 0xB0($a0)
    ctx->pc = 0x298dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_298dd8:
    // 0x298dd8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x298dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_298ddc:
    // 0x298ddc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_298de0:
    if (ctx->pc == 0x298DE0u) {
        ctx->pc = 0x298DE4u;
        goto label_298de4;
    }
    ctx->pc = 0x298DDCu;
    {
        const bool branch_taken_0x298ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298ddc) {
            ctx->pc = 0x298E20u;
            goto label_298e20;
        }
    }
    ctx->pc = 0x298DE4u;
label_298de4:
    // 0x298de4: 0xc0618c4  jal         func_186310
label_298de8:
    if (ctx->pc == 0x298DE8u) {
        ctx->pc = 0x298DECu;
        goto label_298dec;
    }
    ctx->pc = 0x298DE4u;
    SET_GPR_U32(ctx, 31, 0x298DECu);
    ctx->pc = 0x186310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186310u, 0x298DE4u, 0x298DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298DECu;
label_298dec:
    // 0x298dec: 0xc0615a8  jal         func_1856A0
label_298df0:
    if (ctx->pc == 0x298DF0u) {
        ctx->pc = 0x298DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DECu;
        // 0x298df0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298DF4u;
        goto label_298df4;
    }
    ctx->pc = 0x298DECu;
    SET_GPR_U32(ctx, 31, 0x298DF4u);
    ctx->pc = 0x298DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298DECu;
    // 0x298df0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1856A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1856A0u, 0x298DECu, 0x298DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298DF4u;
label_298df4:
    // 0x298df4: 0xc061600  jal         func_185800
label_298df8:
    if (ctx->pc == 0x298DF8u) {
        ctx->pc = 0x298DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DF4u;
        // 0x298df8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298DFCu;
        goto label_298dfc;
    }
    ctx->pc = 0x298DF4u;
    SET_GPR_U32(ctx, 31, 0x298DFCu);
    ctx->pc = 0x298DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298DF4u;
    // 0x298df8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185800u, 0x298DF4u, 0x298DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298DFCu;
label_298dfc:
    // 0x298dfc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x298dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_298e00:
    // 0x298e00: 0xc06185c  jal         func_186170
label_298e04:
    if (ctx->pc == 0x298E04u) {
        ctx->pc = 0x298E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E00u;
        // 0x298e04: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298E08u;
        goto label_298e08;
    }
    ctx->pc = 0x298E00u;
    SET_GPR_U32(ctx, 31, 0x298E08u);
    ctx->pc = 0x298E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E00u;
    // 0x298e04: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186170u, 0x298E00u, 0x298E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298E08u;
label_298e08:
    // 0x298e08: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x298e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_298e0c:
    // 0x298e0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x298e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_298e10:
    // 0x298e10: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x298e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_298e14:
    // 0x298e14: 0x320f809  jalr        $t9
label_298e18:
    if (ctx->pc == 0x298E18u) {
        ctx->pc = 0x298E1Cu;
        goto label_298e1c;
    }
    ctx->pc = 0x298E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x298E1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298E14u, 0x298E1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298E1Cu;
label_298e1c:
    // 0x298e1c: 0x0  nop
    ctx->pc = 0x298e1cu;
    // NOP
label_298e20:
    // 0x298e20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x298e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_298e24:
    // 0x298e24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_298e28:
    // 0x298e28: 0x3e00008  jr          $ra
label_298e2c:
    if (ctx->pc == 0x298E2Cu) {
        ctx->pc = 0x298E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E28u;
        // 0x298e2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298E30u;
        goto label_fallthrough_0x298e28;
    }
    ctx->pc = 0x298E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E28u;
        // 0x298e2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x298e28:
    ctx->pc = 0x298E30u;
}

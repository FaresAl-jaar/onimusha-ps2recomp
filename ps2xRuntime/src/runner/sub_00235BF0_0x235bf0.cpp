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

// Function: sub_00235BF0
// Address: 0x235bf0 - 0x235ef8
void sub_00235BF0_0x235bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235BF0_0x235bf0");
#endif

    switch (ctx->pc) {
        case 0x235bf0u: goto label_235bf0;
        case 0x235bf4u: goto label_235bf4;
        case 0x235bf8u: goto label_235bf8;
        case 0x235bfcu: goto label_235bfc;
        case 0x235c00u: goto label_235c00;
        case 0x235c04u: goto label_235c04;
        case 0x235c08u: goto label_235c08;
        case 0x235c0cu: goto label_235c0c;
        case 0x235c10u: goto label_235c10;
        case 0x235c14u: goto label_235c14;
        case 0x235c18u: goto label_235c18;
        case 0x235c1cu: goto label_235c1c;
        case 0x235c20u: goto label_235c20;
        case 0x235c24u: goto label_235c24;
        case 0x235c28u: goto label_235c28;
        case 0x235c2cu: goto label_235c2c;
        case 0x235c30u: goto label_235c30;
        case 0x235c34u: goto label_235c34;
        case 0x235c38u: goto label_235c38;
        case 0x235c3cu: goto label_235c3c;
        case 0x235c40u: goto label_235c40;
        case 0x235c44u: goto label_235c44;
        case 0x235c48u: goto label_235c48;
        case 0x235c4cu: goto label_235c4c;
        case 0x235c50u: goto label_235c50;
        case 0x235c54u: goto label_235c54;
        case 0x235c58u: goto label_235c58;
        case 0x235c5cu: goto label_235c5c;
        case 0x235c60u: goto label_235c60;
        case 0x235c64u: goto label_235c64;
        case 0x235c68u: goto label_235c68;
        case 0x235c6cu: goto label_235c6c;
        case 0x235c70u: goto label_235c70;
        case 0x235c74u: goto label_235c74;
        case 0x235c78u: goto label_235c78;
        case 0x235c7cu: goto label_235c7c;
        case 0x235c80u: goto label_235c80;
        case 0x235c84u: goto label_235c84;
        case 0x235c88u: goto label_235c88;
        case 0x235c8cu: goto label_235c8c;
        case 0x235c90u: goto label_235c90;
        case 0x235c94u: goto label_235c94;
        case 0x235c98u: goto label_235c98;
        case 0x235c9cu: goto label_235c9c;
        case 0x235ca0u: goto label_235ca0;
        case 0x235ca4u: goto label_235ca4;
        case 0x235ca8u: goto label_235ca8;
        case 0x235cacu: goto label_235cac;
        case 0x235cb0u: goto label_235cb0;
        case 0x235cb4u: goto label_235cb4;
        case 0x235cb8u: goto label_235cb8;
        case 0x235cbcu: goto label_235cbc;
        case 0x235cc0u: goto label_235cc0;
        case 0x235cc4u: goto label_235cc4;
        case 0x235cc8u: goto label_235cc8;
        case 0x235cccu: goto label_235ccc;
        case 0x235cd0u: goto label_235cd0;
        case 0x235cd4u: goto label_235cd4;
        case 0x235cd8u: goto label_235cd8;
        case 0x235cdcu: goto label_235cdc;
        case 0x235ce0u: goto label_235ce0;
        case 0x235ce4u: goto label_235ce4;
        case 0x235ce8u: goto label_235ce8;
        case 0x235cecu: goto label_235cec;
        case 0x235cf0u: goto label_235cf0;
        case 0x235cf4u: goto label_235cf4;
        case 0x235cf8u: goto label_235cf8;
        case 0x235cfcu: goto label_235cfc;
        case 0x235d00u: goto label_235d00;
        case 0x235d04u: goto label_235d04;
        case 0x235d08u: goto label_235d08;
        case 0x235d0cu: goto label_235d0c;
        case 0x235d10u: goto label_235d10;
        case 0x235d14u: goto label_235d14;
        case 0x235d18u: goto label_235d18;
        case 0x235d1cu: goto label_235d1c;
        case 0x235d20u: goto label_235d20;
        case 0x235d24u: goto label_235d24;
        case 0x235d28u: goto label_235d28;
        case 0x235d2cu: goto label_235d2c;
        case 0x235d30u: goto label_235d30;
        case 0x235d34u: goto label_235d34;
        case 0x235d38u: goto label_235d38;
        case 0x235d3cu: goto label_235d3c;
        case 0x235d40u: goto label_235d40;
        case 0x235d44u: goto label_235d44;
        case 0x235d48u: goto label_235d48;
        case 0x235d4cu: goto label_235d4c;
        case 0x235d50u: goto label_235d50;
        case 0x235d54u: goto label_235d54;
        case 0x235d58u: goto label_235d58;
        case 0x235d5cu: goto label_235d5c;
        case 0x235d60u: goto label_235d60;
        case 0x235d64u: goto label_235d64;
        case 0x235d68u: goto label_235d68;
        case 0x235d6cu: goto label_235d6c;
        case 0x235d70u: goto label_235d70;
        case 0x235d74u: goto label_235d74;
        case 0x235d78u: goto label_235d78;
        case 0x235d7cu: goto label_235d7c;
        case 0x235d80u: goto label_235d80;
        case 0x235d84u: goto label_235d84;
        case 0x235d88u: goto label_235d88;
        case 0x235d8cu: goto label_235d8c;
        case 0x235d90u: goto label_235d90;
        case 0x235d94u: goto label_235d94;
        case 0x235d98u: goto label_235d98;
        case 0x235d9cu: goto label_235d9c;
        case 0x235da0u: goto label_235da0;
        case 0x235da4u: goto label_235da4;
        case 0x235da8u: goto label_235da8;
        case 0x235dacu: goto label_235dac;
        case 0x235db0u: goto label_235db0;
        case 0x235db4u: goto label_235db4;
        case 0x235db8u: goto label_235db8;
        case 0x235dbcu: goto label_235dbc;
        case 0x235dc0u: goto label_235dc0;
        case 0x235dc4u: goto label_235dc4;
        case 0x235dc8u: goto label_235dc8;
        case 0x235dccu: goto label_235dcc;
        case 0x235dd0u: goto label_235dd0;
        case 0x235dd4u: goto label_235dd4;
        case 0x235dd8u: goto label_235dd8;
        case 0x235ddcu: goto label_235ddc;
        case 0x235de0u: goto label_235de0;
        case 0x235de4u: goto label_235de4;
        case 0x235de8u: goto label_235de8;
        case 0x235decu: goto label_235dec;
        case 0x235df0u: goto label_235df0;
        case 0x235df4u: goto label_235df4;
        case 0x235df8u: goto label_235df8;
        case 0x235dfcu: goto label_235dfc;
        case 0x235e00u: goto label_235e00;
        case 0x235e04u: goto label_235e04;
        case 0x235e08u: goto label_235e08;
        case 0x235e0cu: goto label_235e0c;
        case 0x235e10u: goto label_235e10;
        case 0x235e14u: goto label_235e14;
        case 0x235e18u: goto label_235e18;
        case 0x235e1cu: goto label_235e1c;
        case 0x235e20u: goto label_235e20;
        case 0x235e24u: goto label_235e24;
        case 0x235e28u: goto label_235e28;
        case 0x235e2cu: goto label_235e2c;
        case 0x235e30u: goto label_235e30;
        case 0x235e34u: goto label_235e34;
        case 0x235e38u: goto label_235e38;
        case 0x235e3cu: goto label_235e3c;
        case 0x235e40u: goto label_235e40;
        case 0x235e44u: goto label_235e44;
        case 0x235e48u: goto label_235e48;
        case 0x235e4cu: goto label_235e4c;
        case 0x235e50u: goto label_235e50;
        case 0x235e54u: goto label_235e54;
        case 0x235e58u: goto label_235e58;
        case 0x235e5cu: goto label_235e5c;
        case 0x235e60u: goto label_235e60;
        case 0x235e64u: goto label_235e64;
        case 0x235e68u: goto label_235e68;
        case 0x235e6cu: goto label_235e6c;
        case 0x235e70u: goto label_235e70;
        case 0x235e74u: goto label_235e74;
        case 0x235e78u: goto label_235e78;
        case 0x235e7cu: goto label_235e7c;
        case 0x235e80u: goto label_235e80;
        case 0x235e84u: goto label_235e84;
        case 0x235e88u: goto label_235e88;
        case 0x235e8cu: goto label_235e8c;
        case 0x235e90u: goto label_235e90;
        case 0x235e94u: goto label_235e94;
        case 0x235e98u: goto label_235e98;
        case 0x235e9cu: goto label_235e9c;
        case 0x235ea0u: goto label_235ea0;
        case 0x235ea4u: goto label_235ea4;
        case 0x235ea8u: goto label_235ea8;
        case 0x235eacu: goto label_235eac;
        case 0x235eb0u: goto label_235eb0;
        case 0x235eb4u: goto label_235eb4;
        case 0x235eb8u: goto label_235eb8;
        case 0x235ebcu: goto label_235ebc;
        case 0x235ec0u: goto label_235ec0;
        case 0x235ec4u: goto label_235ec4;
        case 0x235ec8u: goto label_235ec8;
        case 0x235eccu: goto label_235ecc;
        case 0x235ed0u: goto label_235ed0;
        case 0x235ed4u: goto label_235ed4;
        case 0x235ed8u: goto label_235ed8;
        case 0x235edcu: goto label_235edc;
        case 0x235ee0u: goto label_235ee0;
        case 0x235ee4u: goto label_235ee4;
        case 0x235ee8u: goto label_235ee8;
        case 0x235eecu: goto label_235eec;
        case 0x235ef0u: goto label_235ef0;
        case 0x235ef4u: goto label_235ef4;
        default: break;
    }

    ctx->pc = 0x235bf0u;

label_235bf0:
    // 0x235bf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x235bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_235bf4:
    // 0x235bf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x235bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235bf8:
    // 0x235bf8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x235bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_235bfc:
    // 0x235bfc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x235bfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235c00:
    // 0x235c00: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x235c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_235c04:
    // 0x235c04: 0x3406c800  ori         $a2, $zero, 0xC800
    ctx->pc = 0x235c04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)51200);
label_235c08:
    // 0x235c08: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x235c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_235c0c:
    // 0x235c0c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x235c0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_235c10:
    // 0x235c10: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x235c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_235c14:
    // 0x235c14: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x235c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_235c18:
    // 0x235c18: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x235c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_235c1c:
    // 0x235c1c: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x235c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_235c20:
    // 0x235c20: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x235c20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_235c24:
    // 0x235c24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x235c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_235c28:
    // 0x235c28: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x235c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_235c2c:
    // 0x235c2c: 0x40f809  jalr        $v0
label_235c30:
    if (ctx->pc == 0x235C30u) {
        ctx->pc = 0x235C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C2Cu;
        // 0x235c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C34u;
        goto label_235c34;
    }
    ctx->pc = 0x235C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235C34u);
        ctx->pc = 0x235C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C2Cu;
        // 0x235c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235C2Cu, 0x235C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235C34u;
label_235c34:
    // 0x235c34: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x235c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_235c38:
    // 0x235c38: 0x18800012  blez        $a0, . + 4 + (0x12 << 2)
label_235c3c:
    if (ctx->pc == 0x235C3Cu) {
        ctx->pc = 0x235C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C38u;
        // 0x235c3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C40u;
        goto label_235c40;
    }
    ctx->pc = 0x235C38u;
    {
        const bool branch_taken_0x235c38 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x235C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C38u;
        // 0x235c3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c38) {
            ctx->pc = 0x235C84u;
            goto label_235c84;
        }
    }
    ctx->pc = 0x235C40u;
label_235c40:
    // 0x235c40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x235c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_235c44:
    // 0x235c44: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x235c44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_235c48:
    // 0x235c48: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_235c4c:
    if (ctx->pc == 0x235C4Cu) {
        ctx->pc = 0x235C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C48u;
        // 0x235c4c: 0x517c2  srl         $v0, $a1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C50u;
        goto label_235c50;
    }
    ctx->pc = 0x235C48u;
    {
        const bool branch_taken_0x235c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C48u;
        // 0x235c4c: 0x517c2  srl         $v0, $a1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c48) {
            ctx->pc = 0x235C88u;
            goto label_235c88;
        }
    }
    ctx->pc = 0x235C50u;
label_235c50:
    // 0x235c50: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x235c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235c54:
    // 0x235c54: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x235c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_235c58:
    // 0x235c58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x235c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_235c5c:
    // 0x235c5c: 0x0  nop
    ctx->pc = 0x235c5cu;
    // NOP
label_235c60:
    // 0x235c60: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x235c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_235c64:
    // 0x235c64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_235c68:
    if (ctx->pc == 0x235C68u) {
        ctx->pc = 0x235C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C64u;
        // 0x235c68: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C6Cu;
        goto label_235c6c;
    }
    ctx->pc = 0x235C64u;
    {
        const bool branch_taken_0x235c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C64u;
        // 0x235c68: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c64) {
            ctx->pc = 0x235C84u;
            goto label_235c84;
        }
    }
    ctx->pc = 0x235C6Cu;
label_235c6c:
    // 0x235c6c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x235c6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_235c70:
    // 0x235c70: 0x0  nop
    ctx->pc = 0x235c70u;
    // NOP
label_235c74:
    // 0x235c74: 0x0  nop
    ctx->pc = 0x235c74u;
    // NOP
label_235c78:
    // 0x235c78: 0x0  nop
    ctx->pc = 0x235c78u;
    // NOP
label_235c7c:
    // 0x235c7c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_235c80:
    if (ctx->pc == 0x235C80u) {
        ctx->pc = 0x235C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C7Cu;
        // 0x235c80: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C84u;
        goto label_235c84;
    }
    ctx->pc = 0x235C7Cu;
    {
        const bool branch_taken_0x235c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235c7c) {
            ctx->pc = 0x235C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235C7Cu;
            // 0x235c80: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235c60;
        }
    }
    ctx->pc = 0x235C84u;
label_235c84:
    // 0x235c84: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x235c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_235c88:
    // 0x235c88: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x235c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_235c8c:
    // 0x235c8c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x235c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_235c90:
    // 0x235c90: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x235c90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_235c94:
    // 0x235c94: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x235c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_235c98:
    // 0x235c98: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_235c9c:
    if (ctx->pc == 0x235C9Cu) {
        ctx->pc = 0x235C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C98u;
        // 0x235c9c: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235CA0u;
        goto label_235ca0;
    }
    ctx->pc = 0x235C98u;
    {
        const bool branch_taken_0x235c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x235C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C98u;
        // 0x235c9c: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c98) {
            ctx->pc = 0x235CE8u;
            goto label_235ce8;
        }
    }
    ctx->pc = 0x235CA0u;
label_235ca0:
    // 0x235ca0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x235ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_235ca4:
    // 0x235ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235ca8:
    // 0x235ca8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x235ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235cac:
    // 0x235cac: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x235cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_235cb0:
    // 0x235cb0: 0x40f809  jalr        $v0
label_235cb4:
    if (ctx->pc == 0x235CB4u) {
        ctx->pc = 0x235CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CB0u;
        // 0x235cb4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235CB8u;
        goto label_235cb8;
    }
    ctx->pc = 0x235CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235CB8u);
        ctx->pc = 0x235CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CB0u;
        // 0x235cb4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235CB0u, 0x235CB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235CB8u;
label_235cb8:
    // 0x235cb8: 0xc08acfa  jal         func_22B3E8
label_235cbc:
    if (ctx->pc == 0x235CBCu) {
        ctx->pc = 0x235CC0u;
        goto label_235cc0;
    }
    ctx->pc = 0x235CB8u;
    SET_GPR_U32(ctx, 31, 0x235CC0u);
    ctx->pc = 0x22B3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B3E8u, 0x235CB8u, 0x235CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CC0u;
label_235cc0:
    // 0x235cc0: 0x54400084  bnel        $v0, $zero, . + 4 + (0x84 << 2)
label_235cc4:
    if (ctx->pc == 0x235CC4u) {
        ctx->pc = 0x235CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CC0u;
        // 0x235cc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235CC8u;
        goto label_235cc8;
    }
    ctx->pc = 0x235CC0u;
    {
        const bool branch_taken_0x235cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235cc0) {
            ctx->pc = 0x235CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235CC0u;
            // 0x235cc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235ED4u;
            goto label_235ed4;
        }
    }
    ctx->pc = 0x235CC8u;
label_235cc8:
    // 0x235cc8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x235cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_235ccc:
    // 0x235ccc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x235cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_235cd0:
    // 0x235cd0: 0x2484ae78  addiu       $a0, $a0, -0x5188
    ctx->pc = 0x235cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946424));
label_235cd4:
    // 0x235cd4: 0xc08bac2  jal         func_22EB08
label_235cd8:
    if (ctx->pc == 0x235CD8u) {
        ctx->pc = 0x235CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CD4u;
        // 0x235cd8: 0x24a5ae98  addiu       $a1, $a1, -0x5168 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235CDCu;
        goto label_235cdc;
    }
    ctx->pc = 0x235CD4u;
    SET_GPR_U32(ctx, 31, 0x235CDCu);
    ctx->pc = 0x235CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235CD4u;
    // 0x235cd8: 0x24a5ae98  addiu       $a1, $a1, -0x5168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB08u, 0x235CD4u, 0x235CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CDCu;
label_235cdc:
    // 0x235cdc: 0x1000007d  b           . + 4 + (0x7D << 2)
label_235ce0:
    if (ctx->pc == 0x235CE0u) {
        ctx->pc = 0x235CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CDCu;
        // 0x235ce0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235CE4u;
        goto label_235ce4;
    }
    ctx->pc = 0x235CDCu;
    {
        const bool branch_taken_0x235cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CDCu;
        // 0x235ce0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cdc) {
            ctx->pc = 0x235ED4u;
            goto label_235ed4;
        }
    }
    ctx->pc = 0x235CE4u;
label_235ce4:
    // 0x235ce4: 0x0  nop
    ctx->pc = 0x235ce4u;
    // NOP
label_235ce8:
    // 0x235ce8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x235ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_235cec:
    // 0x235cec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x235cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_235cf0:
    // 0x235cf0: 0xc094854  jal         func_252150
label_235cf4:
    if (ctx->pc == 0x235CF4u) {
        ctx->pc = 0x235CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CF0u;
        // 0x235cf4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235CF8u;
        goto label_235cf8;
    }
    ctx->pc = 0x235CF0u;
    SET_GPR_U32(ctx, 31, 0x235CF8u);
    ctx->pc = 0x235CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235CF0u;
    // 0x235cf4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x235CF0u, 0x235CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CF8u;
label_235cf8:
    // 0x235cf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x235cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_235cfc:
    // 0x235cfc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x235cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_235d00:
    // 0x235d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235d04:
    // 0x235d04: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x235d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_235d08:
    // 0x235d08: 0x40f809  jalr        $v0
label_235d0c:
    if (ctx->pc == 0x235D0Cu) {
        ctx->pc = 0x235D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D08u;
        // 0x235d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D10u;
        goto label_235d10;
    }
    ctx->pc = 0x235D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235D10u);
        ctx->pc = 0x235D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D08u;
        // 0x235d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235D08u, 0x235D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235D10u;
label_235d10:
    // 0x235d10: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x235d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_235d14:
    // 0x235d14: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x235d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_235d18:
    // 0x235d18: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_235d1c:
    if (ctx->pc == 0x235D1Cu) {
        ctx->pc = 0x235D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D18u;
        // 0x235d1c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D20u;
        goto label_235d20;
    }
    ctx->pc = 0x235D18u;
    {
        const bool branch_taken_0x235d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235d18) {
            ctx->pc = 0x235D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235D18u;
            // 0x235d1c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235D48u;
            goto label_235d48;
        }
    }
    ctx->pc = 0x235D20u;
label_235d20:
    // 0x235d20: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x235d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_235d24:
    // 0x235d24: 0xc08ae7e  jal         func_22B9F8
label_235d28:
    if (ctx->pc == 0x235D28u) {
        ctx->pc = 0x235D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D24u;
        // 0x235d28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D2Cu;
        goto label_235d2c;
    }
    ctx->pc = 0x235D24u;
    SET_GPR_U32(ctx, 31, 0x235D2Cu);
    ctx->pc = 0x235D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D24u;
    // 0x235d28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B9F8u, 0x235D24u, 0x235D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D2Cu;
label_235d2c:
    // 0x235d2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x235d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235d30:
    // 0x235d30: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_235d34:
    if (ctx->pc == 0x235D34u) {
        ctx->pc = 0x235D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D30u;
        // 0x235d34: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D38u;
        goto label_235d38;
    }
    ctx->pc = 0x235D30u;
    {
        const bool branch_taken_0x235d30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D30u;
        // 0x235d34: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d30) {
            ctx->pc = 0x235D44u;
            goto label_235d44;
        }
    }
    ctx->pc = 0x235D38u;
label_235d38:
    // 0x235d38: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x235d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_235d3c:
    // 0x235d3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_235d40:
    if (ctx->pc == 0x235D40u) {
        ctx->pc = 0x235D44u;
        goto label_235d44;
    }
    ctx->pc = 0x235D3Cu;
    {
        const bool branch_taken_0x235d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235d3c) {
            ctx->pc = 0x235D68u;
            goto label_235d68;
        }
    }
    ctx->pc = 0x235D44u;
label_235d44:
    // 0x235d44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x235d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_235d48:
    // 0x235d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235d4c:
    // 0x235d4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x235d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235d50:
    // 0x235d50: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x235d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_235d54:
    // 0x235d54: 0x40f809  jalr        $v0
label_235d58:
    if (ctx->pc == 0x235D58u) {
        ctx->pc = 0x235D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D54u;
        // 0x235d58: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D5Cu;
        goto label_235d5c;
    }
    ctx->pc = 0x235D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235D5Cu);
        ctx->pc = 0x235D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D54u;
        // 0x235d58: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235D54u, 0x235D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235D5Cu;
label_235d5c:
    // 0x235d5c: 0x1000005f  b           . + 4 + (0x5F << 2)
label_235d60:
    if (ctx->pc == 0x235D60u) {
        ctx->pc = 0x235D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D5Cu;
        // 0x235d60: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D64u;
        goto label_235d64;
    }
    ctx->pc = 0x235D5Cu;
    {
        const bool branch_taken_0x235d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D5Cu;
        // 0x235d60: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d5c) {
            ctx->pc = 0x235EDCu;
            goto label_235edc;
        }
    }
    ctx->pc = 0x235D64u;
label_235d64:
    // 0x235d64: 0x0  nop
    ctx->pc = 0x235d64u;
    // NOP
label_235d68:
    // 0x235d68: 0x623001b  bgezl       $s1, . + 4 + (0x1B << 2)
label_235d6c:
    if (ctx->pc == 0x235D6Cu) {
        ctx->pc = 0x235D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D68u;
        // 0x235d6c: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D70u;
        goto label_235d70;
    }
    ctx->pc = 0x235D68u;
    {
        const bool branch_taken_0x235d68 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x235d68) {
            ctx->pc = 0x235D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235D68u;
            // 0x235d6c: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235DD8u;
            goto label_235dd8;
        }
    }
    ctx->pc = 0x235D70u;
label_235d70:
    // 0x235d70: 0x8642009a  lh          $v0, 0x9A($s2)
    ctx->pc = 0x235d70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 154)));
label_235d74:
    // 0x235d74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_235d78:
    if (ctx->pc == 0x235D78u) {
        ctx->pc = 0x235D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D74u;
        // 0x235d78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D7Cu;
        goto label_235d7c;
    }
    ctx->pc = 0x235D74u;
    {
        const bool branch_taken_0x235d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D74u;
        // 0x235d78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d74) {
            ctx->pc = 0x235D90u;
            goto label_235d90;
        }
    }
    ctx->pc = 0x235D7Cu;
label_235d7c:
    // 0x235d7c: 0xc08ae56  jal         func_22B958
label_235d80:
    if (ctx->pc == 0x235D80u) {
        ctx->pc = 0x235D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D7Cu;
        // 0x235d80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D84u;
        goto label_235d84;
    }
    ctx->pc = 0x235D7Cu;
    SET_GPR_U32(ctx, 31, 0x235D84u);
    ctx->pc = 0x235D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D7Cu;
    // 0x235d80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B958u, 0x235D7Cu, 0x235D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D84u;
label_235d84:
    // 0x235d84: 0x10000014  b           . + 4 + (0x14 << 2)
label_235d88:
    if (ctx->pc == 0x235D88u) {
        ctx->pc = 0x235D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D84u;
        // 0x235d88: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D8Cu;
        goto label_235d8c;
    }
    ctx->pc = 0x235D84u;
    {
        const bool branch_taken_0x235d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D84u;
        // 0x235d88: 0xae710098  sw          $s1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d84) {
            ctx->pc = 0x235DD8u;
            goto label_235dd8;
        }
    }
    ctx->pc = 0x235D8Cu;
label_235d8c:
    // 0x235d8c: 0x0  nop
    ctx->pc = 0x235d8cu;
    // NOP
label_235d90:
    // 0x235d90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x235d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_235d94:
    // 0x235d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235d98:
    // 0x235d98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x235d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235d9c:
    // 0x235d9c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x235d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_235da0:
    // 0x235da0: 0x40f809  jalr        $v0
label_235da4:
    if (ctx->pc == 0x235DA4u) {
        ctx->pc = 0x235DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DA0u;
        // 0x235da4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DA8u;
        goto label_235da8;
    }
    ctx->pc = 0x235DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235DA8u);
        ctx->pc = 0x235DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DA0u;
        // 0x235da4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235DA0u, 0x235DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235DA8u;
label_235da8:
    // 0x235da8: 0xc08acfa  jal         func_22B3E8
label_235dac:
    if (ctx->pc == 0x235DACu) {
        ctx->pc = 0x235DB0u;
        goto label_235db0;
    }
    ctx->pc = 0x235DA8u;
    SET_GPR_U32(ctx, 31, 0x235DB0u);
    ctx->pc = 0x22B3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B3E8u, 0x235DA8u, 0x235DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DB0u;
label_235db0:
    // 0x235db0: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
label_235db4:
    if (ctx->pc == 0x235DB4u) {
        ctx->pc = 0x235DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DB0u;
        // 0x235db4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DB8u;
        goto label_235db8;
    }
    ctx->pc = 0x235DB0u;
    {
        const bool branch_taken_0x235db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235db0) {
            ctx->pc = 0x235DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235DB0u;
            // 0x235db4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235ED4u;
            goto label_235ed4;
        }
    }
    ctx->pc = 0x235DB8u;
label_235db8:
    // 0x235db8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x235db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_235dbc:
    // 0x235dbc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x235dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_235dc0:
    // 0x235dc0: 0x2484aeb8  addiu       $a0, $a0, -0x5148
    ctx->pc = 0x235dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946488));
label_235dc4:
    // 0x235dc4: 0xc08bac2  jal         func_22EB08
label_235dc8:
    if (ctx->pc == 0x235DC8u) {
        ctx->pc = 0x235DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DC4u;
        // 0x235dc8: 0x24a5aed8  addiu       $a1, $a1, -0x5128 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DCCu;
        goto label_235dcc;
    }
    ctx->pc = 0x235DC4u;
    SET_GPR_U32(ctx, 31, 0x235DCCu);
    ctx->pc = 0x235DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235DC4u;
    // 0x235dc8: 0x24a5aed8  addiu       $a1, $a1, -0x5128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB08u, 0x235DC4u, 0x235DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DCCu;
label_235dcc:
    // 0x235dcc: 0x10000041  b           . + 4 + (0x41 << 2)
label_235dd0:
    if (ctx->pc == 0x235DD0u) {
        ctx->pc = 0x235DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DCCu;
        // 0x235dd0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DD4u;
        goto label_235dd4;
    }
    ctx->pc = 0x235DCCu;
    {
        const bool branch_taken_0x235dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DCCu;
        // 0x235dd0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235dcc) {
            ctx->pc = 0x235ED4u;
            goto label_235ed4;
        }
    }
    ctx->pc = 0x235DD4u;
label_235dd4:
    // 0x235dd4: 0x0  nop
    ctx->pc = 0x235dd4u;
    // NOP
label_235dd8:
    // 0x235dd8: 0xc08aee6  jal         func_22BB98
label_235ddc:
    if (ctx->pc == 0x235DDCu) {
        ctx->pc = 0x235DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DD8u;
        // 0x235ddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DE0u;
        goto label_235de0;
    }
    ctx->pc = 0x235DD8u;
    SET_GPR_U32(ctx, 31, 0x235DE0u);
    ctx->pc = 0x235DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235DD8u;
    // 0x235ddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BB98u, 0x235DD8u, 0x235DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DE0u;
label_235de0:
    // 0x235de0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x235de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_235de4:
    // 0x235de4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_235de8:
    if (ctx->pc == 0x235DE8u) {
        ctx->pc = 0x235DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DE4u;
        // 0x235de8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DECu;
        goto label_235dec;
    }
    ctx->pc = 0x235DE4u;
    {
        const bool branch_taken_0x235de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x235DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DE4u;
        // 0x235de8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235de4) {
            ctx->pc = 0x235DF0u;
            goto label_235df0;
        }
    }
    ctx->pc = 0x235DECu;
label_235dec:
    // 0x235dec: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x235decu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_235df0:
    // 0x235df0: 0xc08aee6  jal         func_22BB98
label_235df4:
    if (ctx->pc == 0x235DF4u) {
        ctx->pc = 0x235DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DF0u;
        // 0x235df4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DF8u;
        goto label_235df8;
    }
    ctx->pc = 0x235DF0u;
    SET_GPR_U32(ctx, 31, 0x235DF8u);
    ctx->pc = 0x235DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235DF0u;
    // 0x235df4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BB98u, 0x235DF0u, 0x235DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DF8u;
label_235df8:
    // 0x235df8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x235df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_235dfc:
    // 0x235dfc: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_235e00:
    if (ctx->pc == 0x235E00u) {
        ctx->pc = 0x235E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DFCu;
        // 0x235e00: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E04u;
        goto label_235e04;
    }
    ctx->pc = 0x235DFCu;
    {
        const bool branch_taken_0x235dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x235E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DFCu;
        // 0x235e00: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235dfc) {
            ctx->pc = 0x235E1Cu;
            goto label_235e1c;
        }
    }
    ctx->pc = 0x235E04u;
label_235e04:
    // 0x235e04: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x235e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_235e08:
    // 0x235e08: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x235e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_235e0c:
    // 0x235e0c: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x235e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
label_235e10:
    // 0x235e10: 0x28c20041  slti        $v0, $a2, 0x41
    ctx->pc = 0x235e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)65) ? 1 : 0);
label_235e14:
    // 0x235e14: 0xc049522  jal         func_125488
label_235e18:
    if (ctx->pc == 0x235E18u) {
        ctx->pc = 0x235E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E14u;
        // 0x235e18: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E1Cu;
        goto label_235e1c;
    }
    ctx->pc = 0x235E14u;
    SET_GPR_U32(ctx, 31, 0x235E1Cu);
    ctx->pc = 0x235E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E14u;
    // 0x235e18: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x235E14u, 0x235E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E1Cu;
label_235e1c:
    // 0x235e1c: 0xc08aee6  jal         func_22BB98
label_235e20:
    if (ctx->pc == 0x235E20u) {
        ctx->pc = 0x235E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E1Cu;
        // 0x235e20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E24u;
        goto label_235e24;
    }
    ctx->pc = 0x235E1Cu;
    SET_GPR_U32(ctx, 31, 0x235E24u);
    ctx->pc = 0x235E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E1Cu;
    // 0x235e20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BB98u, 0x235E1Cu, 0x235E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E24u;
label_235e24:
    // 0x235e24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x235e24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235e28:
    // 0x235e28: 0x2462fff6  addiu       $v0, $v1, -0xA
    ctx->pc = 0x235e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_235e2c:
    // 0x235e2c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x235e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_235e30:
    // 0x235e30: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_235e34:
    if (ctx->pc == 0x235E34u) {
        ctx->pc = 0x235E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E30u;
        // 0x235e34: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E38u;
        goto label_235e38;
    }
    ctx->pc = 0x235E30u;
    {
        const bool branch_taken_0x235e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235e30) {
            ctx->pc = 0x235E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235E30u;
            // 0x235e34: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235E50u;
            goto label_235e50;
        }
    }
    ctx->pc = 0x235E38u;
label_235e38:
    // 0x235e38: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x235e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_235e3c:
    // 0x235e3c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_235e40:
    if (ctx->pc == 0x235E40u) {
        ctx->pc = 0x235E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E3Cu;
        // 0x235e40: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E44u;
        goto label_235e44;
    }
    ctx->pc = 0x235E3Cu;
    {
        const bool branch_taken_0x235e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x235E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E3Cu;
        // 0x235e40: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e3c) {
            ctx->pc = 0x235E4Cu;
            goto label_235e4c;
        }
    }
    ctx->pc = 0x235E44u;
label_235e44:
    // 0x235e44: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_235e48:
    if (ctx->pc == 0x235E48u) {
        ctx->pc = 0x235E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E44u;
        // 0x235e48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E4Cu;
        goto label_235e4c;
    }
    ctx->pc = 0x235E44u;
    {
        const bool branch_taken_0x235e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x235E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E44u;
        // 0x235e48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e44) {
            ctx->pc = 0x235E70u;
            goto label_235e70;
        }
    }
    ctx->pc = 0x235E4Cu;
label_235e4c:
    // 0x235e4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x235e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_235e50:
    // 0x235e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235e54:
    // 0x235e54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x235e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235e58:
    // 0x235e58: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x235e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_235e5c:
    // 0x235e5c: 0x40f809  jalr        $v0
label_235e60:
    if (ctx->pc == 0x235E60u) {
        ctx->pc = 0x235E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E5Cu;
        // 0x235e60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E64u;
        goto label_235e64;
    }
    ctx->pc = 0x235E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235E64u);
        ctx->pc = 0x235E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E5Cu;
        // 0x235e60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235E5Cu, 0x235E64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235E64u;
label_235e64:
    // 0x235e64: 0x10000013  b           . + 4 + (0x13 << 2)
label_235e68:
    if (ctx->pc == 0x235E68u) {
        ctx->pc = 0x235E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E64u;
        // 0x235e68: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E6Cu;
        goto label_235e6c;
    }
    ctx->pc = 0x235E64u;
    {
        const bool branch_taken_0x235e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E64u;
        // 0x235e68: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e64) {
            ctx->pc = 0x235EB4u;
            goto label_235eb4;
        }
    }
    ctx->pc = 0x235E6Cu;
label_235e6c:
    // 0x235e6c: 0x0  nop
    ctx->pc = 0x235e6cu;
    // NOP
label_235e70:
    // 0x235e70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x235e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_235e74:
    // 0x235e74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235e78:
    // 0x235e78: 0xc094854  jal         func_252150
label_235e7c:
    if (ctx->pc == 0x235E7Cu) {
        ctx->pc = 0x235E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E78u;
        // 0x235e7c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E80u;
        goto label_235e80;
    }
    ctx->pc = 0x235E78u;
    SET_GPR_U32(ctx, 31, 0x235E80u);
    ctx->pc = 0x235E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E78u;
    // 0x235e7c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x235E78u, 0x235E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E80u;
label_235e80:
    // 0x235e80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x235e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_235e84:
    // 0x235e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235e88:
    // 0x235e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235e8c:
    // 0x235e8c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x235e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_235e90:
    // 0x235e90: 0x40f809  jalr        $v0
label_235e94:
    if (ctx->pc == 0x235E94u) {
        ctx->pc = 0x235E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E90u;
        // 0x235e94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E98u;
        goto label_235e98;
    }
    ctx->pc = 0x235E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235E98u);
        ctx->pc = 0x235E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E90u;
        // 0x235e94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235E90u, 0x235E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235E98u;
label_235e98:
    // 0x235e98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x235e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_235e9c:
    // 0x235e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235ea0:
    // 0x235ea0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x235ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_235ea4:
    // 0x235ea4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x235ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_235ea8:
    // 0x235ea8: 0x40f809  jalr        $v0
label_235eac:
    if (ctx->pc == 0x235EACu) {
        ctx->pc = 0x235EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EA8u;
        // 0x235eac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EB0u;
        goto label_235eb0;
    }
    ctx->pc = 0x235EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235EB0u);
        ctx->pc = 0x235EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EA8u;
        // 0x235eac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235EA8u, 0x235EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235EB0u;
label_235eb0:
    // 0x235eb0: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x235eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_235eb4:
    // 0x235eb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_235eb8:
    if (ctx->pc == 0x235EB8u) {
        ctx->pc = 0x235EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EB4u;
        // 0x235eb8: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EBCu;
        goto label_235ebc;
    }
    ctx->pc = 0x235EB4u;
    {
        const bool branch_taken_0x235eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EB4u;
        // 0x235eb8: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235eb4) {
            ctx->pc = 0x235ED0u;
            goto label_235ed0;
        }
    }
    ctx->pc = 0x235EBCu;
label_235ebc:
    // 0x235ebc: 0x8c427564  lw          $v0, 0x7564($v0)
    ctx->pc = 0x235ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30052)));
label_235ec0:
    // 0x235ec0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_235ec4:
    if (ctx->pc == 0x235EC4u) {
        ctx->pc = 0x235EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EC0u;
        // 0x235ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EC8u;
        goto label_235ec8;
    }
    ctx->pc = 0x235EC0u;
    {
        const bool branch_taken_0x235ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EC0u;
        // 0x235ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ec0) {
            ctx->pc = 0x235ED0u;
            goto label_235ed0;
        }
    }
    ctx->pc = 0x235EC8u;
label_235ec8:
    // 0x235ec8: 0x40f809  jalr        $v0
label_235ecc:
    if (ctx->pc == 0x235ECCu) {
        ctx->pc = 0x235ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EC8u;
        // 0x235ecc: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235ED0u;
        goto label_235ed0;
    }
    ctx->pc = 0x235EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235ED0u);
        ctx->pc = 0x235ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EC8u;
        // 0x235ecc: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235EC8u, 0x235ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235ED0u;
label_235ed0:
    // 0x235ed0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x235ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_235ed4:
    // 0x235ed4: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x235ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_235ed8:
    // 0x235ed8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x235ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235edc:
    // 0x235edc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x235edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_235ee0:
    // 0x235ee0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x235ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235ee4:
    // 0x235ee4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x235ee4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_235ee8:
    // 0x235ee8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x235ee8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_235eec:
    // 0x235eec: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x235eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_235ef0:
    // 0x235ef0: 0x3e00008  jr          $ra
label_235ef4:
    if (ctx->pc == 0x235EF4u) {
        ctx->pc = 0x235EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EF0u;
        // 0x235ef4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EF8u;
        goto label_fallthrough_0x235ef0;
    }
    ctx->pc = 0x235EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EF0u;
        // 0x235ef4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x235ef0:
    ctx->pc = 0x235EF8u;
}

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

// Function: sub_00301B90
// Address: 0x301b90 - 0x301e6c
void sub_00301B90_0x301b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301B90_0x301b90");
#endif

    switch (ctx->pc) {
        case 0x301b90u: goto label_301b90;
        case 0x301b94u: goto label_301b94;
        case 0x301b98u: goto label_301b98;
        case 0x301b9cu: goto label_301b9c;
        case 0x301ba0u: goto label_301ba0;
        case 0x301ba4u: goto label_301ba4;
        case 0x301ba8u: goto label_301ba8;
        case 0x301bacu: goto label_301bac;
        case 0x301bb0u: goto label_301bb0;
        case 0x301bb4u: goto label_301bb4;
        case 0x301bb8u: goto label_301bb8;
        case 0x301bbcu: goto label_301bbc;
        case 0x301bc0u: goto label_301bc0;
        case 0x301bc4u: goto label_301bc4;
        case 0x301bc8u: goto label_301bc8;
        case 0x301bccu: goto label_301bcc;
        case 0x301bd0u: goto label_301bd0;
        case 0x301bd4u: goto label_301bd4;
        case 0x301bd8u: goto label_301bd8;
        case 0x301bdcu: goto label_301bdc;
        case 0x301be0u: goto label_301be0;
        case 0x301be4u: goto label_301be4;
        case 0x301be8u: goto label_301be8;
        case 0x301becu: goto label_301bec;
        case 0x301bf0u: goto label_301bf0;
        case 0x301bf4u: goto label_301bf4;
        case 0x301bf8u: goto label_301bf8;
        case 0x301bfcu: goto label_301bfc;
        case 0x301c00u: goto label_301c00;
        case 0x301c04u: goto label_301c04;
        case 0x301c08u: goto label_301c08;
        case 0x301c0cu: goto label_301c0c;
        case 0x301c10u: goto label_301c10;
        case 0x301c14u: goto label_301c14;
        case 0x301c18u: goto label_301c18;
        case 0x301c1cu: goto label_301c1c;
        case 0x301c20u: goto label_301c20;
        case 0x301c24u: goto label_301c24;
        case 0x301c28u: goto label_301c28;
        case 0x301c2cu: goto label_301c2c;
        case 0x301c30u: goto label_301c30;
        case 0x301c34u: goto label_301c34;
        case 0x301c38u: goto label_301c38;
        case 0x301c3cu: goto label_301c3c;
        case 0x301c40u: goto label_301c40;
        case 0x301c44u: goto label_301c44;
        case 0x301c48u: goto label_301c48;
        case 0x301c4cu: goto label_301c4c;
        case 0x301c50u: goto label_301c50;
        case 0x301c54u: goto label_301c54;
        case 0x301c58u: goto label_301c58;
        case 0x301c5cu: goto label_301c5c;
        case 0x301c60u: goto label_301c60;
        case 0x301c64u: goto label_301c64;
        case 0x301c68u: goto label_301c68;
        case 0x301c6cu: goto label_301c6c;
        case 0x301c70u: goto label_301c70;
        case 0x301c74u: goto label_301c74;
        case 0x301c78u: goto label_301c78;
        case 0x301c7cu: goto label_301c7c;
        case 0x301c80u: goto label_301c80;
        case 0x301c84u: goto label_301c84;
        case 0x301c88u: goto label_301c88;
        case 0x301c8cu: goto label_301c8c;
        case 0x301c90u: goto label_301c90;
        case 0x301c94u: goto label_301c94;
        case 0x301c98u: goto label_301c98;
        case 0x301c9cu: goto label_301c9c;
        case 0x301ca0u: goto label_301ca0;
        case 0x301ca4u: goto label_301ca4;
        case 0x301ca8u: goto label_301ca8;
        case 0x301cacu: goto label_301cac;
        case 0x301cb0u: goto label_301cb0;
        case 0x301cb4u: goto label_301cb4;
        case 0x301cb8u: goto label_301cb8;
        case 0x301cbcu: goto label_301cbc;
        case 0x301cc0u: goto label_301cc0;
        case 0x301cc4u: goto label_301cc4;
        case 0x301cc8u: goto label_301cc8;
        case 0x301cccu: goto label_301ccc;
        case 0x301cd0u: goto label_301cd0;
        case 0x301cd4u: goto label_301cd4;
        case 0x301cd8u: goto label_301cd8;
        case 0x301cdcu: goto label_301cdc;
        case 0x301ce0u: goto label_301ce0;
        case 0x301ce4u: goto label_301ce4;
        case 0x301ce8u: goto label_301ce8;
        case 0x301cecu: goto label_301cec;
        case 0x301cf0u: goto label_301cf0;
        case 0x301cf4u: goto label_301cf4;
        case 0x301cf8u: goto label_301cf8;
        case 0x301cfcu: goto label_301cfc;
        case 0x301d00u: goto label_301d00;
        case 0x301d04u: goto label_301d04;
        case 0x301d08u: goto label_301d08;
        case 0x301d0cu: goto label_301d0c;
        case 0x301d10u: goto label_301d10;
        case 0x301d14u: goto label_301d14;
        case 0x301d18u: goto label_301d18;
        case 0x301d1cu: goto label_301d1c;
        case 0x301d20u: goto label_301d20;
        case 0x301d24u: goto label_301d24;
        case 0x301d28u: goto label_301d28;
        case 0x301d2cu: goto label_301d2c;
        case 0x301d30u: goto label_301d30;
        case 0x301d34u: goto label_301d34;
        case 0x301d38u: goto label_301d38;
        case 0x301d3cu: goto label_301d3c;
        case 0x301d40u: goto label_301d40;
        case 0x301d44u: goto label_301d44;
        case 0x301d48u: goto label_301d48;
        case 0x301d4cu: goto label_301d4c;
        case 0x301d50u: goto label_301d50;
        case 0x301d54u: goto label_301d54;
        case 0x301d58u: goto label_301d58;
        case 0x301d5cu: goto label_301d5c;
        case 0x301d60u: goto label_301d60;
        case 0x301d64u: goto label_301d64;
        case 0x301d68u: goto label_301d68;
        case 0x301d6cu: goto label_301d6c;
        case 0x301d70u: goto label_301d70;
        case 0x301d74u: goto label_301d74;
        case 0x301d78u: goto label_301d78;
        case 0x301d7cu: goto label_301d7c;
        case 0x301d80u: goto label_301d80;
        case 0x301d84u: goto label_301d84;
        case 0x301d88u: goto label_301d88;
        case 0x301d8cu: goto label_301d8c;
        case 0x301d90u: goto label_301d90;
        case 0x301d94u: goto label_301d94;
        case 0x301d98u: goto label_301d98;
        case 0x301d9cu: goto label_301d9c;
        case 0x301da0u: goto label_301da0;
        case 0x301da4u: goto label_301da4;
        case 0x301da8u: goto label_301da8;
        case 0x301dacu: goto label_301dac;
        case 0x301db0u: goto label_301db0;
        case 0x301db4u: goto label_301db4;
        case 0x301db8u: goto label_301db8;
        case 0x301dbcu: goto label_301dbc;
        case 0x301dc0u: goto label_301dc0;
        case 0x301dc4u: goto label_301dc4;
        case 0x301dc8u: goto label_301dc8;
        case 0x301dccu: goto label_301dcc;
        case 0x301dd0u: goto label_301dd0;
        case 0x301dd4u: goto label_301dd4;
        case 0x301dd8u: goto label_301dd8;
        case 0x301ddcu: goto label_301ddc;
        case 0x301de0u: goto label_301de0;
        case 0x301de4u: goto label_301de4;
        case 0x301de8u: goto label_301de8;
        case 0x301decu: goto label_301dec;
        case 0x301df0u: goto label_301df0;
        case 0x301df4u: goto label_301df4;
        case 0x301df8u: goto label_301df8;
        case 0x301dfcu: goto label_301dfc;
        case 0x301e00u: goto label_301e00;
        case 0x301e04u: goto label_301e04;
        case 0x301e08u: goto label_301e08;
        case 0x301e0cu: goto label_301e0c;
        case 0x301e10u: goto label_301e10;
        case 0x301e14u: goto label_301e14;
        case 0x301e18u: goto label_301e18;
        case 0x301e1cu: goto label_301e1c;
        case 0x301e20u: goto label_301e20;
        case 0x301e24u: goto label_301e24;
        case 0x301e28u: goto label_301e28;
        case 0x301e2cu: goto label_301e2c;
        case 0x301e30u: goto label_301e30;
        case 0x301e34u: goto label_301e34;
        case 0x301e38u: goto label_301e38;
        case 0x301e3cu: goto label_301e3c;
        case 0x301e40u: goto label_301e40;
        case 0x301e44u: goto label_301e44;
        case 0x301e48u: goto label_301e48;
        case 0x301e4cu: goto label_301e4c;
        case 0x301e50u: goto label_301e50;
        case 0x301e54u: goto label_301e54;
        case 0x301e58u: goto label_301e58;
        case 0x301e5cu: goto label_301e5c;
        case 0x301e60u: goto label_301e60;
        case 0x301e64u: goto label_301e64;
        case 0x301e68u: goto label_301e68;
        default: break;
    }

    ctx->pc = 0x301b90u;

label_301b90:
    // 0x301b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x301b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_301b94:
    // 0x301b94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x301b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_301b98:
    // 0x301b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x301b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_301b9c:
    // 0x301b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x301b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_301ba0:
    // 0x301ba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x301ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_301ba4:
    // 0x301ba4: 0xc097834  jal         func_25E0D0
label_301ba8:
    if (ctx->pc == 0x301BA8u) {
        ctx->pc = 0x301BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BA4u;
        // 0x301ba8: 0x8c840518  lw          $a0, 0x518($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301BACu;
        goto label_301bac;
    }
    ctx->pc = 0x301BA4u;
    SET_GPR_U32(ctx, 31, 0x301BACu);
    ctx->pc = 0x301BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301BA4u;
    // 0x301ba8: 0x8c840518  lw          $a0, 0x518($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E0D0u, 0x301BA4u, 0x301BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301BACu;
label_301bac:
    // 0x301bac: 0xae020518  sw          $v0, 0x518($s0)
    ctx->pc = 0x301bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 2));
label_301bb0:
    // 0x301bb0: 0xc09703c  jal         func_25C0F0
label_301bb4:
    if (ctx->pc == 0x301BB4u) {
        ctx->pc = 0x301BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BB0u;
        // 0x301bb4: 0x9204053b  lbu         $a0, 0x53B($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301BB8u;
        goto label_301bb8;
    }
    ctx->pc = 0x301BB0u;
    SET_GPR_U32(ctx, 31, 0x301BB8u);
    ctx->pc = 0x301BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301BB0u;
    // 0x301bb4: 0x9204053b  lbu         $a0, 0x53B($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C0F0u, 0x301BB0u, 0x301BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301BB8u;
label_301bb8:
    // 0x301bb8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_301bbc:
    if (ctx->pc == 0x301BBCu) {
        ctx->pc = 0x301BC0u;
        goto label_301bc0;
    }
    ctx->pc = 0x301BB8u;
    {
        const bool branch_taken_0x301bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301bb8) {
            ctx->pc = 0x301BD0u;
            goto label_301bd0;
        }
    }
    ctx->pc = 0x301BC0u;
label_301bc0:
    // 0x301bc0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x301bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_301bc4:
    // 0x301bc4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x301bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_301bc8:
    // 0x301bc8: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x301bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_301bcc:
    // 0x301bcc: 0x0  nop
    ctx->pc = 0x301bccu;
    // NOP
label_301bd0:
    // 0x301bd0: 0xc096ff4  jal         func_25BFD0
label_301bd4:
    if (ctx->pc == 0x301BD4u) {
        ctx->pc = 0x301BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BD0u;
        // 0x301bd4: 0x9204053b  lbu         $a0, 0x53B($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301BD8u;
        goto label_301bd8;
    }
    ctx->pc = 0x301BD0u;
    SET_GPR_U32(ctx, 31, 0x301BD8u);
    ctx->pc = 0x301BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301BD0u;
    // 0x301bd4: 0x9204053b  lbu         $a0, 0x53B($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BFD0u, 0x301BD0u, 0x301BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301BD8u;
label_301bd8:
    // 0x301bd8: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
label_301bdc:
    if (ctx->pc == 0x301BDCu) {
        ctx->pc = 0x301BE0u;
        goto label_301be0;
    }
    ctx->pc = 0x301BD8u;
    {
        const bool branch_taken_0x301bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301bd8) {
            ctx->pc = 0x301E58u;
            goto label_301e58;
        }
    }
    ctx->pc = 0x301BE0u;
label_301be0:
    // 0x301be0: 0x9204052f  lbu         $a0, 0x52F($s0)
    ctx->pc = 0x301be0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1327)));
label_301be4:
    // 0x301be4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x301be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_301be8:
    // 0x301be8: 0x1083007b  beq         $a0, $v1, . + 4 + (0x7B << 2)
label_301bec:
    if (ctx->pc == 0x301BECu) {
        ctx->pc = 0x301BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BE8u;
        // 0x301bec: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301BF0u;
        goto label_301bf0;
    }
    ctx->pc = 0x301BE8u;
    {
        const bool branch_taken_0x301be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x301BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BE8u;
        // 0x301bec: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301be8) {
            ctx->pc = 0x301DD8u;
            goto label_301dd8;
        }
    }
    ctx->pc = 0x301BF0u;
label_301bf0:
    // 0x301bf0: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
label_301bf4:
    if (ctx->pc == 0x301BF4u) {
        ctx->pc = 0x301BF8u;
        goto label_301bf8;
    }
    ctx->pc = 0x301BF0u;
    {
        const bool branch_taken_0x301bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x301bf0) {
            ctx->pc = 0x301CD8u;
            goto label_301cd8;
        }
    }
    ctx->pc = 0x301BF8u;
label_301bf8:
    // 0x301bf8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x301bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_301bfc:
    // 0x301bfc: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
label_301c00:
    if (ctx->pc == 0x301C00u) {
        ctx->pc = 0x301C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BFCu;
        // 0x301c00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301C04u;
        goto label_301c04;
    }
    ctx->pc = 0x301BFCu;
    {
        const bool branch_taken_0x301bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x301C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BFCu;
        // 0x301c00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301bfc) {
            ctx->pc = 0x301CB8u;
            goto label_301cb8;
        }
    }
    ctx->pc = 0x301C04u;
label_301c04:
    // 0x301c04: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_301c08:
    if (ctx->pc == 0x301C08u) {
        ctx->pc = 0x301C0Cu;
        goto label_301c0c;
    }
    ctx->pc = 0x301C04u;
    {
        const bool branch_taken_0x301c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x301c04) {
            ctx->pc = 0x301C28u;
            goto label_301c28;
        }
    }
    ctx->pc = 0x301C0Cu;
label_301c0c:
    // 0x301c0c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_301c10:
    if (ctx->pc == 0x301C10u) {
        ctx->pc = 0x301C14u;
        goto label_301c14;
    }
    ctx->pc = 0x301C0Cu;
    {
        const bool branch_taken_0x301c0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x301c0c) {
            ctx->pc = 0x301C20u;
            goto label_301c20;
        }
    }
    ctx->pc = 0x301C14u;
label_301c14:
    // 0x301c14: 0x10000070  b           . + 4 + (0x70 << 2)
label_301c18:
    if (ctx->pc == 0x301C18u) {
        ctx->pc = 0x301C1Cu;
        goto label_301c1c;
    }
    ctx->pc = 0x301C14u;
    {
        const bool branch_taken_0x301c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301c14) {
            ctx->pc = 0x301DD8u;
            goto label_301dd8;
        }
    }
    ctx->pc = 0x301C1Cu;
label_301c1c:
    // 0x301c1c: 0x0  nop
    ctx->pc = 0x301c1cu;
    // NOP
label_301c20:
    // 0x301c20: 0xa203052f  sb          $v1, 0x52F($s0)
    ctx->pc = 0x301c20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1327), (uint8_t)GPR_U32(ctx, 3));
label_301c24:
    // 0x301c24: 0x0  nop
    ctx->pc = 0x301c24u;
    // NOP
label_301c28:
    // 0x301c28: 0x8e050530  lw          $a1, 0x530($s0)
    ctx->pc = 0x301c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1328)));
label_301c2c:
    // 0x301c2c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x301c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_301c30:
    // 0x301c30: 0xc07cce0  jal         func_1F3380
label_301c34:
    if (ctx->pc == 0x301C34u) {
        ctx->pc = 0x301C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C30u;
        // 0x301c34: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301C38u;
        goto label_301c38;
    }
    ctx->pc = 0x301C30u;
    SET_GPR_U32(ctx, 31, 0x301C38u);
    ctx->pc = 0x301C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301C30u;
    // 0x301c34: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x301C30u, 0x301C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301C38u;
label_301c38:
    // 0x301c38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x301c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301c3c:
    // 0x301c3c: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x301c3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_301c40:
    // 0x301c40: 0x7e020080  sq          $v0, 0x80($s0)
    ctx->pc = 0x301c40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
label_301c44:
    // 0x301c44: 0x9202053f  lbu         $v0, 0x53F($s0)
    ctx->pc = 0x301c44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1343)));
label_301c48:
    // 0x301c48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x301c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_301c4c:
    // 0x301c4c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_301c50:
    if (ctx->pc == 0x301C50u) {
        ctx->pc = 0x301C54u;
        goto label_301c54;
    }
    ctx->pc = 0x301C4Cu;
    {
        const bool branch_taken_0x301c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301c4c) {
            ctx->pc = 0x301C98u;
            goto label_301c98;
        }
    }
    ctx->pc = 0x301C54u;
label_301c54:
    // 0x301c54: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_301c58:
    if (ctx->pc == 0x301C58u) {
        ctx->pc = 0x301C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C54u;
        // 0x301c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301C5Cu;
        goto label_301c5c;
    }
    ctx->pc = 0x301C54u;
    {
        const bool branch_taken_0x301c54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x301C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C54u;
        // 0x301c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301c54) {
            ctx->pc = 0x301C70u;
            goto label_301c70;
        }
    }
    ctx->pc = 0x301C5Cu;
label_301c5c:
    // 0x301c5c: 0xc0c0830  jal         func_3020C0
label_301c60:
    if (ctx->pc == 0x301C60u) {
        ctx->pc = 0x301C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C5Cu;
        // 0x301c60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301C64u;
        goto label_301c64;
    }
    ctx->pc = 0x301C5Cu;
    SET_GPR_U32(ctx, 31, 0x301C64u);
    ctx->pc = 0x301C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301C5Cu;
    // 0x301c60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x301C5Cu, 0x301C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301C64u;
label_301c64:
    // 0x301c64: 0x1000007c  b           . + 4 + (0x7C << 2)
label_301c68:
    if (ctx->pc == 0x301C68u) {
        ctx->pc = 0x301C6Cu;
        goto label_301c6c;
    }
    ctx->pc = 0x301C64u;
    {
        const bool branch_taken_0x301c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301c64) {
            ctx->pc = 0x301E58u;
            goto label_301e58;
        }
    }
    ctx->pc = 0x301C6Cu;
label_301c6c:
    // 0x301c6c: 0x0  nop
    ctx->pc = 0x301c6cu;
    // NOP
label_301c70:
    // 0x301c70: 0x8e050534  lw          $a1, 0x534($s0)
    ctx->pc = 0x301c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1332)));
label_301c74:
    // 0x301c74: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x301c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_301c78:
    // 0x301c78: 0xc07cce0  jal         func_1F3380
label_301c7c:
    if (ctx->pc == 0x301C7Cu) {
        ctx->pc = 0x301C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C78u;
        // 0x301c7c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301C80u;
        goto label_301c80;
    }
    ctx->pc = 0x301C78u;
    SET_GPR_U32(ctx, 31, 0x301C80u);
    ctx->pc = 0x301C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301C78u;
    // 0x301c7c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x301C78u, 0x301C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301C80u;
label_301c80:
    // 0x301c80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_301c84:
    if (ctx->pc == 0x301C84u) {
        ctx->pc = 0x301C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C80u;
        // 0x301c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301C88u;
        goto label_301c88;
    }
    ctx->pc = 0x301C80u;
    {
        const bool branch_taken_0x301c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C80u;
        // 0x301c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301c80) {
            ctx->pc = 0x301C98u;
            goto label_301c98;
        }
    }
    ctx->pc = 0x301C88u;
label_301c88:
    // 0x301c88: 0xc0c0830  jal         func_3020C0
label_301c8c:
    if (ctx->pc == 0x301C8Cu) {
        ctx->pc = 0x301C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C88u;
        // 0x301c8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301C90u;
        goto label_301c90;
    }
    ctx->pc = 0x301C88u;
    SET_GPR_U32(ctx, 31, 0x301C90u);
    ctx->pc = 0x301C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301C88u;
    // 0x301c8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x301C88u, 0x301C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301C90u;
label_301c90:
    // 0x301c90: 0x10000071  b           . + 4 + (0x71 << 2)
label_301c94:
    if (ctx->pc == 0x301C94u) {
        ctx->pc = 0x301C98u;
        goto label_301c98;
    }
    ctx->pc = 0x301C90u;
    {
        const bool branch_taken_0x301c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301c90) {
            ctx->pc = 0x301E58u;
            goto label_301e58;
        }
    }
    ctx->pc = 0x301C98u;
label_301c98:
    // 0x301c98: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x301c98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_301c9c:
    // 0x301c9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x301c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_301ca0:
    // 0x301ca0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x301ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_301ca4:
    // 0x301ca4: 0x320f809  jalr        $t9
label_301ca8:
    if (ctx->pc == 0x301CA8u) {
        ctx->pc = 0x301CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301CA4u;
        // 0x301ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301CACu;
        goto label_301cac;
    }
    ctx->pc = 0x301CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301CACu);
        ctx->pc = 0x301CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301CA4u;
        // 0x301ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301CA4u, 0x301CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301CACu;
label_301cac:
    // 0x301cac: 0x1000004a  b           . + 4 + (0x4A << 2)
label_301cb0:
    if (ctx->pc == 0x301CB0u) {
        ctx->pc = 0x301CB4u;
        goto label_301cb4;
    }
    ctx->pc = 0x301CACu;
    {
        const bool branch_taken_0x301cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301cac) {
            ctx->pc = 0x301DD8u;
            goto label_301dd8;
        }
    }
    ctx->pc = 0x301CB4u;
label_301cb4:
    // 0x301cb4: 0x0  nop
    ctx->pc = 0x301cb4u;
    // NOP
label_301cb8:
    // 0x301cb8: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x301cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_301cbc:
    // 0x301cbc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x301cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_301cc0:
    // 0x301cc0: 0x320f809  jalr        $t9
label_301cc4:
    if (ctx->pc == 0x301CC4u) {
        ctx->pc = 0x301CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301CC0u;
        // 0x301cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301CC8u;
        goto label_301cc8;
    }
    ctx->pc = 0x301CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301CC8u);
        ctx->pc = 0x301CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301CC0u;
        // 0x301cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301CC0u, 0x301CC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301CC8u;
label_301cc8:
    // 0x301cc8: 0x9202052f  lbu         $v0, 0x52F($s0)
    ctx->pc = 0x301cc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1327)));
label_301ccc:
    // 0x301ccc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x301cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_301cd0:
    // 0x301cd0: 0xa202052f  sb          $v0, 0x52F($s0)
    ctx->pc = 0x301cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1327), (uint8_t)GPR_U32(ctx, 2));
label_301cd4:
    // 0x301cd4: 0x0  nop
    ctx->pc = 0x301cd4u;
    // NOP
label_301cd8:
    // 0x301cd8: 0x92020520  lbu         $v0, 0x520($s0)
    ctx->pc = 0x301cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1312)));
label_301cdc:
    // 0x301cdc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x301cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_301ce0:
    // 0x301ce0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_301ce4:
    if (ctx->pc == 0x301CE4u) {
        ctx->pc = 0x301CE8u;
        goto label_301ce8;
    }
    ctx->pc = 0x301CE0u;
    {
        const bool branch_taken_0x301ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301ce0) {
            ctx->pc = 0x301DB8u;
            goto label_301db8;
        }
    }
    ctx->pc = 0x301CE8u;
label_301ce8:
    // 0x301ce8: 0x92020539  lbu         $v0, 0x539($s0)
    ctx->pc = 0x301ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1337)));
label_301cec:
    // 0x301cec: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_301cf0:
    if (ctx->pc == 0x301CF0u) {
        ctx->pc = 0x301CF4u;
        goto label_301cf4;
    }
    ctx->pc = 0x301CECu;
    {
        const bool branch_taken_0x301cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301cec) {
            ctx->pc = 0x301DB8u;
            goto label_301db8;
        }
    }
    ctx->pc = 0x301CF4u;
label_301cf4:
    // 0x301cf4: 0x8e050530  lw          $a1, 0x530($s0)
    ctx->pc = 0x301cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1328)));
label_301cf8:
    // 0x301cf8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x301cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_301cfc:
    // 0x301cfc: 0xc07cce0  jal         func_1F3380
label_301d00:
    if (ctx->pc == 0x301D00u) {
        ctx->pc = 0x301D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301CFCu;
        // 0x301d00: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D04u;
        goto label_301d04;
    }
    ctx->pc = 0x301CFCu;
    SET_GPR_U32(ctx, 31, 0x301D04u);
    ctx->pc = 0x301D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301CFCu;
    // 0x301d00: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x301CFCu, 0x301D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301D04u;
label_301d04:
    // 0x301d04: 0x9203053f  lbu         $v1, 0x53F($s0)
    ctx->pc = 0x301d04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1343)));
label_301d08:
    // 0x301d08: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x301d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_301d0c:
    // 0x301d0c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_301d10:
    if (ctx->pc == 0x301D10u) {
        ctx->pc = 0x301D14u;
        goto label_301d14;
    }
    ctx->pc = 0x301D0Cu;
    {
        const bool branch_taken_0x301d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301d0c) {
            ctx->pc = 0x301D78u;
            goto label_301d78;
        }
    }
    ctx->pc = 0x301D14u;
label_301d14:
    // 0x301d14: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_301d18:
    if (ctx->pc == 0x301D18u) {
        ctx->pc = 0x301D1Cu;
        goto label_301d1c;
    }
    ctx->pc = 0x301D14u;
    {
        const bool branch_taken_0x301d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301d14) {
            ctx->pc = 0x301D40u;
            goto label_301d40;
        }
    }
    ctx->pc = 0x301D1Cu;
label_301d1c:
    // 0x301d1c: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x301d1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_301d20:
    // 0x301d20: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x301d20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_301d24:
    // 0x301d24: 0x320f809  jalr        $t9
label_301d28:
    if (ctx->pc == 0x301D28u) {
        ctx->pc = 0x301D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D24u;
        // 0x301d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D2Cu;
        goto label_301d2c;
    }
    ctx->pc = 0x301D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301D2Cu);
        ctx->pc = 0x301D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D24u;
        // 0x301d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301D24u, 0x301D2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301D2Cu;
label_301d2c:
    // 0x301d2c: 0x9203052f  lbu         $v1, 0x52F($s0)
    ctx->pc = 0x301d2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1327)));
label_301d30:
    // 0x301d30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x301d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_301d34:
    // 0x301d34: 0x10000048  b           . + 4 + (0x48 << 2)
label_301d38:
    if (ctx->pc == 0x301D38u) {
        ctx->pc = 0x301D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D34u;
        // 0x301d38: 0xa203052f  sb          $v1, 0x52F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1327), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D3Cu;
        goto label_301d3c;
    }
    ctx->pc = 0x301D34u;
    {
        const bool branch_taken_0x301d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D34u;
        // 0x301d38: 0xa203052f  sb          $v1, 0x52F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1327), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301d34) {
            ctx->pc = 0x301E58u;
            goto label_301e58;
        }
    }
    ctx->pc = 0x301D3Cu;
label_301d3c:
    // 0x301d3c: 0x0  nop
    ctx->pc = 0x301d3cu;
    // NOP
label_301d40:
    // 0x301d40: 0x8e050534  lw          $a1, 0x534($s0)
    ctx->pc = 0x301d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1332)));
label_301d44:
    // 0x301d44: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x301d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_301d48:
    // 0x301d48: 0xc07cce0  jal         func_1F3380
label_301d4c:
    if (ctx->pc == 0x301D4Cu) {
        ctx->pc = 0x301D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D48u;
        // 0x301d4c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D50u;
        goto label_301d50;
    }
    ctx->pc = 0x301D48u;
    SET_GPR_U32(ctx, 31, 0x301D50u);
    ctx->pc = 0x301D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301D48u;
    // 0x301d4c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x301D48u, 0x301D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301D50u;
label_301d50:
    // 0x301d50: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_301d54:
    if (ctx->pc == 0x301D54u) {
        ctx->pc = 0x301D58u;
        goto label_301d58;
    }
    ctx->pc = 0x301D50u;
    {
        const bool branch_taken_0x301d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301d50) {
            ctx->pc = 0x301D78u;
            goto label_301d78;
        }
    }
    ctx->pc = 0x301D58u;
label_301d58:
    // 0x301d58: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x301d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_301d5c:
    // 0x301d5c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x301d5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_301d60:
    // 0x301d60: 0x320f809  jalr        $t9
label_301d64:
    if (ctx->pc == 0x301D64u) {
        ctx->pc = 0x301D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D60u;
        // 0x301d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D68u;
        goto label_301d68;
    }
    ctx->pc = 0x301D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301D68u);
        ctx->pc = 0x301D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D60u;
        // 0x301d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301D60u, 0x301D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301D68u;
label_301d68:
    // 0x301d68: 0x9203052f  lbu         $v1, 0x52F($s0)
    ctx->pc = 0x301d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1327)));
label_301d6c:
    // 0x301d6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x301d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_301d70:
    // 0x301d70: 0x10000039  b           . + 4 + (0x39 << 2)
label_301d74:
    if (ctx->pc == 0x301D74u) {
        ctx->pc = 0x301D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D70u;
        // 0x301d74: 0xa203052f  sb          $v1, 0x52F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1327), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301D78u;
        goto label_301d78;
    }
    ctx->pc = 0x301D70u;
    {
        const bool branch_taken_0x301d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D70u;
        // 0x301d74: 0xa203052f  sb          $v1, 0x52F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1327), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301d70) {
            ctx->pc = 0x301E58u;
            goto label_301e58;
        }
    }
    ctx->pc = 0x301D78u;
label_301d78:
    // 0x301d78: 0x9204053e  lbu         $a0, 0x53E($s0)
    ctx->pc = 0x301d78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1342)));
label_301d7c:
    // 0x301d7c: 0x8603053c  lh          $v1, 0x53C($s0)
    ctx->pc = 0x301d7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1340)));
label_301d80:
    // 0x301d80: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x301d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_301d84:
    // 0x301d84: 0xa603053c  sh          $v1, 0x53C($s0)
    ctx->pc = 0x301d84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1340), (uint16_t)GPR_U32(ctx, 3));
label_301d88:
    // 0x301d88: 0x8603053c  lh          $v1, 0x53C($s0)
    ctx->pc = 0x301d88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1340)));
label_301d8c:
    // 0x301d8c: 0x1c600012  bgtz        $v1, . + 4 + (0x12 << 2)
label_301d90:
    if (ctx->pc == 0x301D90u) {
        ctx->pc = 0x301D94u;
        goto label_301d94;
    }
    ctx->pc = 0x301D8Cu;
    {
        const bool branch_taken_0x301d8c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x301d8c) {
            ctx->pc = 0x301DD8u;
            goto label_301dd8;
        }
    }
    ctx->pc = 0x301D94u;
label_301d94:
    // 0x301d94: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x301d94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_301d98:
    // 0x301d98: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x301d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_301d9c:
    // 0x301d9c: 0x320f809  jalr        $t9
label_301da0:
    if (ctx->pc == 0x301DA0u) {
        ctx->pc = 0x301DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D9Cu;
        // 0x301da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301DA4u;
        goto label_301da4;
    }
    ctx->pc = 0x301D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301DA4u);
        ctx->pc = 0x301DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D9Cu;
        // 0x301da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301D9Cu, 0x301DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301DA4u;
label_301da4:
    // 0x301da4: 0x9203052f  lbu         $v1, 0x52F($s0)
    ctx->pc = 0x301da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1327)));
label_301da8:
    // 0x301da8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x301da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_301dac:
    // 0x301dac: 0x1000002a  b           . + 4 + (0x2A << 2)
label_301db0:
    if (ctx->pc == 0x301DB0u) {
        ctx->pc = 0x301DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301DACu;
        // 0x301db0: 0xa203052f  sb          $v1, 0x52F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1327), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301DB4u;
        goto label_301db4;
    }
    ctx->pc = 0x301DACu;
    {
        const bool branch_taken_0x301dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301DACu;
        // 0x301db0: 0xa203052f  sb          $v1, 0x52F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1327), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301dac) {
            ctx->pc = 0x301E58u;
            goto label_301e58;
        }
    }
    ctx->pc = 0x301DB4u;
label_301db4:
    // 0x301db4: 0x0  nop
    ctx->pc = 0x301db4u;
    // NOP
label_301db8:
    // 0x301db8: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x301db8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_301dbc:
    // 0x301dbc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x301dbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_301dc0:
    // 0x301dc0: 0x320f809  jalr        $t9
label_301dc4:
    if (ctx->pc == 0x301DC4u) {
        ctx->pc = 0x301DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301DC0u;
        // 0x301dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301DC8u;
        goto label_301dc8;
    }
    ctx->pc = 0x301DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301DC8u);
        ctx->pc = 0x301DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301DC0u;
        // 0x301dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301DC0u, 0x301DC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301DC8u;
label_301dc8:
    // 0x301dc8: 0x9203052f  lbu         $v1, 0x52F($s0)
    ctx->pc = 0x301dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1327)));
label_301dcc:
    // 0x301dcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x301dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_301dd0:
    // 0x301dd0: 0x10000021  b           . + 4 + (0x21 << 2)
label_301dd4:
    if (ctx->pc == 0x301DD4u) {
        ctx->pc = 0x301DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301DD0u;
        // 0x301dd4: 0xa203052f  sb          $v1, 0x52F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1327), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301DD8u;
        goto label_301dd8;
    }
    ctx->pc = 0x301DD0u;
    {
        const bool branch_taken_0x301dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301DD0u;
        // 0x301dd4: 0xa203052f  sb          $v1, 0x52F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1327), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301dd0) {
            ctx->pc = 0x301E58u;
            goto label_301e58;
        }
    }
    ctx->pc = 0x301DD8u;
label_301dd8:
    // 0x301dd8: 0x92040520  lbu         $a0, 0x520($s0)
    ctx->pc = 0x301dd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1312)));
label_301ddc:
    // 0x301ddc: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x301ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_301de0:
    // 0x301de0: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_301de4:
    if (ctx->pc == 0x301DE4u) {
        ctx->pc = 0x301DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301DE0u;
        // 0x301de4: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x301DE8u;
        goto label_301de8;
    }
    ctx->pc = 0x301DE0u;
    {
        const bool branch_taken_0x301de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x301DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301DE0u;
        // 0x301de4: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x301de0) {
            ctx->pc = 0x301E58u;
            goto label_301e58;
        }
    }
    ctx->pc = 0x301DE8u;
label_301de8:
    // 0x301de8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_301dec:
    if (ctx->pc == 0x301DECu) {
        ctx->pc = 0x301DF0u;
        goto label_301df0;
    }
    ctx->pc = 0x301DE8u;
    {
        const bool branch_taken_0x301de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301de8) {
            ctx->pc = 0x301E58u;
            goto label_301e58;
        }
    }
    ctx->pc = 0x301DF0u;
label_301df0:
    // 0x301df0: 0x8602053c  lh          $v0, 0x53C($s0)
    ctx->pc = 0x301df0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1340)));
label_301df4:
    // 0x301df4: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_301df8:
    if (ctx->pc == 0x301DF8u) {
        ctx->pc = 0x301DFCu;
        goto label_301dfc;
    }
    ctx->pc = 0x301DF4u;
    {
        const bool branch_taken_0x301df4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x301df4) {
            ctx->pc = 0x301E00u;
            goto label_301e00;
        }
    }
    ctx->pc = 0x301DFCu;
label_301dfc:
    // 0x301dfc: 0xa600053c  sh          $zero, 0x53C($s0)
    ctx->pc = 0x301dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1340), (uint16_t)GPR_U32(ctx, 0));
label_301e00:
    // 0x301e00: 0x8602053c  lh          $v0, 0x53C($s0)
    ctx->pc = 0x301e00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1340)));
label_301e04:
    // 0x301e04: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x301e04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_301e08:
    // 0x301e08: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_301e0c:
    if (ctx->pc == 0x301E0Cu) {
        ctx->pc = 0x301E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E08u;
        // 0x301e0c: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301E10u;
        goto label_301e10;
    }
    ctx->pc = 0x301E08u;
    {
        const bool branch_taken_0x301e08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x301E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E08u;
        // 0x301e0c: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301e08) {
            ctx->pc = 0x301E18u;
            goto label_301e18;
        }
    }
    ctx->pc = 0x301E10u;
label_301e10:
    // 0x301e10: 0xa602053c  sh          $v0, 0x53C($s0)
    ctx->pc = 0x301e10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1340), (uint16_t)GPR_U32(ctx, 2));
label_301e14:
    // 0x301e14: 0x0  nop
    ctx->pc = 0x301e14u;
    // NOP
label_301e18:
    // 0x301e18: 0x8602053c  lh          $v0, 0x53C($s0)
    ctx->pc = 0x301e18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1340)));
label_301e1c:
    // 0x301e1c: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
label_301e20:
    if (ctx->pc == 0x301E20u) {
        ctx->pc = 0x301E24u;
        goto label_301e24;
    }
    ctx->pc = 0x301E1Cu;
    {
        const bool branch_taken_0x301e1c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x301e1c) {
            ctx->pc = 0x301E48u;
            goto label_301e48;
        }
    }
    ctx->pc = 0x301E24u;
label_301e24:
    // 0x301e24: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x301e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_301e28:
    // 0x301e28: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x301e28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_301e2c:
    // 0x301e2c: 0xc0973ec  jal         func_25CFB0
label_301e30:
    if (ctx->pc == 0x301E30u) {
        ctx->pc = 0x301E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E2Cu;
        // 0x301e30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301E34u;
        goto label_301e34;
    }
    ctx->pc = 0x301E2Cu;
    SET_GPR_U32(ctx, 31, 0x301E34u);
    ctx->pc = 0x301E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E2Cu;
    // 0x301e30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CFB0u, 0x301E2Cu, 0x301E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301E34u;
label_301e34:
    // 0x301e34: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x301e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_301e38:
    // 0x301e38: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x301e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_301e3c:
    // 0x301e3c: 0x10000006  b           . + 4 + (0x6 << 2)
label_301e40:
    if (ctx->pc == 0x301E40u) {
        ctx->pc = 0x301E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E3Cu;
        // 0x301e40: 0xae030148  sw          $v1, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301E44u;
        goto label_301e44;
    }
    ctx->pc = 0x301E3Cu;
    {
        const bool branch_taken_0x301e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E3Cu;
        // 0x301e40: 0xae030148  sw          $v1, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301e3c) {
            ctx->pc = 0x301E58u;
            goto label_301e58;
        }
    }
    ctx->pc = 0x301E44u;
label_301e44:
    // 0x301e44: 0x0  nop
    ctx->pc = 0x301e44u;
    // NOP
label_301e48:
    // 0x301e48: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x301e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_301e4c:
    // 0x301e4c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x301e4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_301e50:
    // 0x301e50: 0xc0973ec  jal         func_25CFB0
label_301e54:
    if (ctx->pc == 0x301E54u) {
        ctx->pc = 0x301E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E50u;
        // 0x301e54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301E58u;
        goto label_301e58;
    }
    ctx->pc = 0x301E50u;
    SET_GPR_U32(ctx, 31, 0x301E58u);
    ctx->pc = 0x301E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E50u;
    // 0x301e54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CFB0u, 0x301E50u, 0x301E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301E58u;
label_301e58:
    // 0x301e58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x301e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_301e5c:
    // 0x301e5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x301e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_301e60:
    // 0x301e60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x301e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_301e64:
    // 0x301e64: 0x3e00008  jr          $ra
label_301e68:
    if (ctx->pc == 0x301E68u) {
        ctx->pc = 0x301E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E64u;
        // 0x301e68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301E6Cu;
        goto label_fallthrough_0x301e64;
    }
    ctx->pc = 0x301E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E64u;
        // 0x301e68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x301e64:
    ctx->pc = 0x301E6Cu;
}

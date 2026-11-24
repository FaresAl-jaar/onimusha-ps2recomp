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

// Function: sub_00302BB0
// Address: 0x302bb0 - 0x302fe4
void sub_00302BB0_0x302bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302BB0_0x302bb0");
#endif

    switch (ctx->pc) {
        case 0x302bb0u: goto label_302bb0;
        case 0x302bb4u: goto label_302bb4;
        case 0x302bb8u: goto label_302bb8;
        case 0x302bbcu: goto label_302bbc;
        case 0x302bc0u: goto label_302bc0;
        case 0x302bc4u: goto label_302bc4;
        case 0x302bc8u: goto label_302bc8;
        case 0x302bccu: goto label_302bcc;
        case 0x302bd0u: goto label_302bd0;
        case 0x302bd4u: goto label_302bd4;
        case 0x302bd8u: goto label_302bd8;
        case 0x302bdcu: goto label_302bdc;
        case 0x302be0u: goto label_302be0;
        case 0x302be4u: goto label_302be4;
        case 0x302be8u: goto label_302be8;
        case 0x302becu: goto label_302bec;
        case 0x302bf0u: goto label_302bf0;
        case 0x302bf4u: goto label_302bf4;
        case 0x302bf8u: goto label_302bf8;
        case 0x302bfcu: goto label_302bfc;
        case 0x302c00u: goto label_302c00;
        case 0x302c04u: goto label_302c04;
        case 0x302c08u: goto label_302c08;
        case 0x302c0cu: goto label_302c0c;
        case 0x302c10u: goto label_302c10;
        case 0x302c14u: goto label_302c14;
        case 0x302c18u: goto label_302c18;
        case 0x302c1cu: goto label_302c1c;
        case 0x302c20u: goto label_302c20;
        case 0x302c24u: goto label_302c24;
        case 0x302c28u: goto label_302c28;
        case 0x302c2cu: goto label_302c2c;
        case 0x302c30u: goto label_302c30;
        case 0x302c34u: goto label_302c34;
        case 0x302c38u: goto label_302c38;
        case 0x302c3cu: goto label_302c3c;
        case 0x302c40u: goto label_302c40;
        case 0x302c44u: goto label_302c44;
        case 0x302c48u: goto label_302c48;
        case 0x302c4cu: goto label_302c4c;
        case 0x302c50u: goto label_302c50;
        case 0x302c54u: goto label_302c54;
        case 0x302c58u: goto label_302c58;
        case 0x302c5cu: goto label_302c5c;
        case 0x302c60u: goto label_302c60;
        case 0x302c64u: goto label_302c64;
        case 0x302c68u: goto label_302c68;
        case 0x302c6cu: goto label_302c6c;
        case 0x302c70u: goto label_302c70;
        case 0x302c74u: goto label_302c74;
        case 0x302c78u: goto label_302c78;
        case 0x302c7cu: goto label_302c7c;
        case 0x302c80u: goto label_302c80;
        case 0x302c84u: goto label_302c84;
        case 0x302c88u: goto label_302c88;
        case 0x302c8cu: goto label_302c8c;
        case 0x302c90u: goto label_302c90;
        case 0x302c94u: goto label_302c94;
        case 0x302c98u: goto label_302c98;
        case 0x302c9cu: goto label_302c9c;
        case 0x302ca0u: goto label_302ca0;
        case 0x302ca4u: goto label_302ca4;
        case 0x302ca8u: goto label_302ca8;
        case 0x302cacu: goto label_302cac;
        case 0x302cb0u: goto label_302cb0;
        case 0x302cb4u: goto label_302cb4;
        case 0x302cb8u: goto label_302cb8;
        case 0x302cbcu: goto label_302cbc;
        case 0x302cc0u: goto label_302cc0;
        case 0x302cc4u: goto label_302cc4;
        case 0x302cc8u: goto label_302cc8;
        case 0x302cccu: goto label_302ccc;
        case 0x302cd0u: goto label_302cd0;
        case 0x302cd4u: goto label_302cd4;
        case 0x302cd8u: goto label_302cd8;
        case 0x302cdcu: goto label_302cdc;
        case 0x302ce0u: goto label_302ce0;
        case 0x302ce4u: goto label_302ce4;
        case 0x302ce8u: goto label_302ce8;
        case 0x302cecu: goto label_302cec;
        case 0x302cf0u: goto label_302cf0;
        case 0x302cf4u: goto label_302cf4;
        case 0x302cf8u: goto label_302cf8;
        case 0x302cfcu: goto label_302cfc;
        case 0x302d00u: goto label_302d00;
        case 0x302d04u: goto label_302d04;
        case 0x302d08u: goto label_302d08;
        case 0x302d0cu: goto label_302d0c;
        case 0x302d10u: goto label_302d10;
        case 0x302d14u: goto label_302d14;
        case 0x302d18u: goto label_302d18;
        case 0x302d1cu: goto label_302d1c;
        case 0x302d20u: goto label_302d20;
        case 0x302d24u: goto label_302d24;
        case 0x302d28u: goto label_302d28;
        case 0x302d2cu: goto label_302d2c;
        case 0x302d30u: goto label_302d30;
        case 0x302d34u: goto label_302d34;
        case 0x302d38u: goto label_302d38;
        case 0x302d3cu: goto label_302d3c;
        case 0x302d40u: goto label_302d40;
        case 0x302d44u: goto label_302d44;
        case 0x302d48u: goto label_302d48;
        case 0x302d4cu: goto label_302d4c;
        case 0x302d50u: goto label_302d50;
        case 0x302d54u: goto label_302d54;
        case 0x302d58u: goto label_302d58;
        case 0x302d5cu: goto label_302d5c;
        case 0x302d60u: goto label_302d60;
        case 0x302d64u: goto label_302d64;
        case 0x302d68u: goto label_302d68;
        case 0x302d6cu: goto label_302d6c;
        case 0x302d70u: goto label_302d70;
        case 0x302d74u: goto label_302d74;
        case 0x302d78u: goto label_302d78;
        case 0x302d7cu: goto label_302d7c;
        case 0x302d80u: goto label_302d80;
        case 0x302d84u: goto label_302d84;
        case 0x302d88u: goto label_302d88;
        case 0x302d8cu: goto label_302d8c;
        case 0x302d90u: goto label_302d90;
        case 0x302d94u: goto label_302d94;
        case 0x302d98u: goto label_302d98;
        case 0x302d9cu: goto label_302d9c;
        case 0x302da0u: goto label_302da0;
        case 0x302da4u: goto label_302da4;
        case 0x302da8u: goto label_302da8;
        case 0x302dacu: goto label_302dac;
        case 0x302db0u: goto label_302db0;
        case 0x302db4u: goto label_302db4;
        case 0x302db8u: goto label_302db8;
        case 0x302dbcu: goto label_302dbc;
        case 0x302dc0u: goto label_302dc0;
        case 0x302dc4u: goto label_302dc4;
        case 0x302dc8u: goto label_302dc8;
        case 0x302dccu: goto label_302dcc;
        case 0x302dd0u: goto label_302dd0;
        case 0x302dd4u: goto label_302dd4;
        case 0x302dd8u: goto label_302dd8;
        case 0x302ddcu: goto label_302ddc;
        case 0x302de0u: goto label_302de0;
        case 0x302de4u: goto label_302de4;
        case 0x302de8u: goto label_302de8;
        case 0x302decu: goto label_302dec;
        case 0x302df0u: goto label_302df0;
        case 0x302df4u: goto label_302df4;
        case 0x302df8u: goto label_302df8;
        case 0x302dfcu: goto label_302dfc;
        case 0x302e00u: goto label_302e00;
        case 0x302e04u: goto label_302e04;
        case 0x302e08u: goto label_302e08;
        case 0x302e0cu: goto label_302e0c;
        case 0x302e10u: goto label_302e10;
        case 0x302e14u: goto label_302e14;
        case 0x302e18u: goto label_302e18;
        case 0x302e1cu: goto label_302e1c;
        case 0x302e20u: goto label_302e20;
        case 0x302e24u: goto label_302e24;
        case 0x302e28u: goto label_302e28;
        case 0x302e2cu: goto label_302e2c;
        case 0x302e30u: goto label_302e30;
        case 0x302e34u: goto label_302e34;
        case 0x302e38u: goto label_302e38;
        case 0x302e3cu: goto label_302e3c;
        case 0x302e40u: goto label_302e40;
        case 0x302e44u: goto label_302e44;
        case 0x302e48u: goto label_302e48;
        case 0x302e4cu: goto label_302e4c;
        case 0x302e50u: goto label_302e50;
        case 0x302e54u: goto label_302e54;
        case 0x302e58u: goto label_302e58;
        case 0x302e5cu: goto label_302e5c;
        case 0x302e60u: goto label_302e60;
        case 0x302e64u: goto label_302e64;
        case 0x302e68u: goto label_302e68;
        case 0x302e6cu: goto label_302e6c;
        case 0x302e70u: goto label_302e70;
        case 0x302e74u: goto label_302e74;
        case 0x302e78u: goto label_302e78;
        case 0x302e7cu: goto label_302e7c;
        case 0x302e80u: goto label_302e80;
        case 0x302e84u: goto label_302e84;
        case 0x302e88u: goto label_302e88;
        case 0x302e8cu: goto label_302e8c;
        case 0x302e90u: goto label_302e90;
        case 0x302e94u: goto label_302e94;
        case 0x302e98u: goto label_302e98;
        case 0x302e9cu: goto label_302e9c;
        case 0x302ea0u: goto label_302ea0;
        case 0x302ea4u: goto label_302ea4;
        case 0x302ea8u: goto label_302ea8;
        case 0x302eacu: goto label_302eac;
        case 0x302eb0u: goto label_302eb0;
        case 0x302eb4u: goto label_302eb4;
        case 0x302eb8u: goto label_302eb8;
        case 0x302ebcu: goto label_302ebc;
        case 0x302ec0u: goto label_302ec0;
        case 0x302ec4u: goto label_302ec4;
        case 0x302ec8u: goto label_302ec8;
        case 0x302eccu: goto label_302ecc;
        case 0x302ed0u: goto label_302ed0;
        case 0x302ed4u: goto label_302ed4;
        case 0x302ed8u: goto label_302ed8;
        case 0x302edcu: goto label_302edc;
        case 0x302ee0u: goto label_302ee0;
        case 0x302ee4u: goto label_302ee4;
        case 0x302ee8u: goto label_302ee8;
        case 0x302eecu: goto label_302eec;
        case 0x302ef0u: goto label_302ef0;
        case 0x302ef4u: goto label_302ef4;
        case 0x302ef8u: goto label_302ef8;
        case 0x302efcu: goto label_302efc;
        case 0x302f00u: goto label_302f00;
        case 0x302f04u: goto label_302f04;
        case 0x302f08u: goto label_302f08;
        case 0x302f0cu: goto label_302f0c;
        case 0x302f10u: goto label_302f10;
        case 0x302f14u: goto label_302f14;
        case 0x302f18u: goto label_302f18;
        case 0x302f1cu: goto label_302f1c;
        case 0x302f20u: goto label_302f20;
        case 0x302f24u: goto label_302f24;
        case 0x302f28u: goto label_302f28;
        case 0x302f2cu: goto label_302f2c;
        case 0x302f30u: goto label_302f30;
        case 0x302f34u: goto label_302f34;
        case 0x302f38u: goto label_302f38;
        case 0x302f3cu: goto label_302f3c;
        case 0x302f40u: goto label_302f40;
        case 0x302f44u: goto label_302f44;
        case 0x302f48u: goto label_302f48;
        case 0x302f4cu: goto label_302f4c;
        case 0x302f50u: goto label_302f50;
        case 0x302f54u: goto label_302f54;
        case 0x302f58u: goto label_302f58;
        case 0x302f5cu: goto label_302f5c;
        case 0x302f60u: goto label_302f60;
        case 0x302f64u: goto label_302f64;
        case 0x302f68u: goto label_302f68;
        case 0x302f6cu: goto label_302f6c;
        case 0x302f70u: goto label_302f70;
        case 0x302f74u: goto label_302f74;
        case 0x302f78u: goto label_302f78;
        case 0x302f7cu: goto label_302f7c;
        case 0x302f80u: goto label_302f80;
        case 0x302f84u: goto label_302f84;
        case 0x302f88u: goto label_302f88;
        case 0x302f8cu: goto label_302f8c;
        case 0x302f90u: goto label_302f90;
        case 0x302f94u: goto label_302f94;
        case 0x302f98u: goto label_302f98;
        case 0x302f9cu: goto label_302f9c;
        case 0x302fa0u: goto label_302fa0;
        case 0x302fa4u: goto label_302fa4;
        case 0x302fa8u: goto label_302fa8;
        case 0x302facu: goto label_302fac;
        case 0x302fb0u: goto label_302fb0;
        case 0x302fb4u: goto label_302fb4;
        case 0x302fb8u: goto label_302fb8;
        case 0x302fbcu: goto label_302fbc;
        case 0x302fc0u: goto label_302fc0;
        case 0x302fc4u: goto label_302fc4;
        case 0x302fc8u: goto label_302fc8;
        case 0x302fccu: goto label_302fcc;
        case 0x302fd0u: goto label_302fd0;
        case 0x302fd4u: goto label_302fd4;
        case 0x302fd8u: goto label_302fd8;
        case 0x302fdcu: goto label_302fdc;
        case 0x302fe0u: goto label_302fe0;
        default: break;
    }

    ctx->pc = 0x302bb0u;

label_302bb0:
    // 0x302bb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x302bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_302bb4:
    // 0x302bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_302bb8:
    // 0x302bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x302bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_302bbc:
    // 0x302bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x302bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_302bc0:
    // 0x302bc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x302bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_302bc4:
    // 0x302bc4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_302bc8:
    if (ctx->pc == 0x302BC8u) {
        ctx->pc = 0x302BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BC4u;
        // 0x302bc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302BCCu;
        goto label_302bcc;
    }
    ctx->pc = 0x302BC4u;
    {
        const bool branch_taken_0x302bc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x302BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BC4u;
        // 0x302bc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302bc4) {
            ctx->pc = 0x302BE0u;
            goto label_302be0;
        }
    }
    ctx->pc = 0x302BCCu;
label_302bcc:
    // 0x302bcc: 0xc0c0830  jal         func_3020C0
label_302bd0:
    if (ctx->pc == 0x302BD0u) {
        ctx->pc = 0x302BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BCCu;
        // 0x302bd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302BD4u;
        goto label_302bd4;
    }
    ctx->pc = 0x302BCCu;
    SET_GPR_U32(ctx, 31, 0x302BD4u);
    ctx->pc = 0x302BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302BCCu;
    // 0x302bd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x302BCCu, 0x302BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302BD4u;
label_302bd4:
    // 0x302bd4: 0x100000fe  b           . + 4 + (0xFE << 2)
label_302bd8:
    if (ctx->pc == 0x302BD8u) {
        ctx->pc = 0x302BDCu;
        goto label_302bdc;
    }
    ctx->pc = 0x302BD4u;
    {
        const bool branch_taken_0x302bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302bd4) {
            ctx->pc = 0x302FD0u;
            goto label_302fd0;
        }
    }
    ctx->pc = 0x302BDCu;
label_302bdc:
    // 0x302bdc: 0x0  nop
    ctx->pc = 0x302bdcu;
    // NOP
label_302be0:
    // 0x302be0: 0x922605d5  lbu         $a2, 0x5D5($s1)
    ctx->pc = 0x302be0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1493)));
label_302be4:
    // 0x302be4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x302be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_302be8:
    // 0x302be8: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
label_302bec:
    if (ctx->pc == 0x302BECu) {
        ctx->pc = 0x302BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BE8u;
        // 0x302bec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302BF0u;
        goto label_302bf0;
    }
    ctx->pc = 0x302BE8u;
    {
        const bool branch_taken_0x302be8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x302BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BE8u;
        // 0x302bec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302be8) {
            ctx->pc = 0x302C38u;
            goto label_302c38;
        }
    }
    ctx->pc = 0x302BF0u;
label_302bf0:
    // 0x302bf0: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
label_302bf4:
    if (ctx->pc == 0x302BF4u) {
        ctx->pc = 0x302BF8u;
        goto label_302bf8;
    }
    ctx->pc = 0x302BF0u;
    {
        const bool branch_taken_0x302bf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x302bf0) {
            ctx->pc = 0x302C20u;
            goto label_302c20;
        }
    }
    ctx->pc = 0x302BF8u;
label_302bf8:
    // 0x302bf8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_302bfc:
    if (ctx->pc == 0x302BFCu) {
        ctx->pc = 0x302C00u;
        goto label_302c00;
    }
    ctx->pc = 0x302BF8u;
    {
        const bool branch_taken_0x302bf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x302bf8) {
            ctx->pc = 0x302C08u;
            goto label_302c08;
        }
    }
    ctx->pc = 0x302C00u;
label_302c00:
    // 0x302c00: 0x10000011  b           . + 4 + (0x11 << 2)
label_302c04:
    if (ctx->pc == 0x302C04u) {
        ctx->pc = 0x302C08u;
        goto label_302c08;
    }
    ctx->pc = 0x302C00u;
    {
        const bool branch_taken_0x302c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302c00) {
            ctx->pc = 0x302C48u;
            goto label_302c48;
        }
    }
    ctx->pc = 0x302C08u;
label_302c08:
    // 0x302c08: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x302c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_302c0c:
    // 0x302c0c: 0xc0c09d0  jal         func_302740
label_302c10:
    if (ctx->pc == 0x302C10u) {
        ctx->pc = 0x302C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C0Cu;
        // 0x302c10: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C14u;
        goto label_302c14;
    }
    ctx->pc = 0x302C0Cu;
    SET_GPR_U32(ctx, 31, 0x302C14u);
    ctx->pc = 0x302C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C0Cu;
    // 0x302c10: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302740u, 0x302C0Cu, 0x302C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C14u;
label_302c14:
    // 0x302c14: 0x1000000c  b           . + 4 + (0xC << 2)
label_302c18:
    if (ctx->pc == 0x302C18u) {
        ctx->pc = 0x302C1Cu;
        goto label_302c1c;
    }
    ctx->pc = 0x302C14u;
    {
        const bool branch_taken_0x302c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302c14) {
            ctx->pc = 0x302C48u;
            goto label_302c48;
        }
    }
    ctx->pc = 0x302C1Cu;
label_302c1c:
    // 0x302c1c: 0x0  nop
    ctx->pc = 0x302c1cu;
    // NOP
label_302c20:
    // 0x302c20: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x302c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_302c24:
    // 0x302c24: 0xc0c0a30  jal         func_3028C0
label_302c28:
    if (ctx->pc == 0x302C28u) {
        ctx->pc = 0x302C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C24u;
        // 0x302c28: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C2Cu;
        goto label_302c2c;
    }
    ctx->pc = 0x302C24u;
    SET_GPR_U32(ctx, 31, 0x302C2Cu);
    ctx->pc = 0x302C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C24u;
    // 0x302c28: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x302C24u, 0x302C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C2Cu;
label_302c2c:
    // 0x302c2c: 0x10000006  b           . + 4 + (0x6 << 2)
label_302c30:
    if (ctx->pc == 0x302C30u) {
        ctx->pc = 0x302C34u;
        goto label_302c34;
    }
    ctx->pc = 0x302C2Cu;
    {
        const bool branch_taken_0x302c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302c2c) {
            ctx->pc = 0x302C48u;
            goto label_302c48;
        }
    }
    ctx->pc = 0x302C34u;
label_302c34:
    // 0x302c34: 0x0  nop
    ctx->pc = 0x302c34u;
    // NOP
label_302c38:
    // 0x302c38: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x302c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_302c3c:
    // 0x302c3c: 0xc0c0a9c  jal         func_302A70
label_302c40:
    if (ctx->pc == 0x302C40u) {
        ctx->pc = 0x302C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C3Cu;
        // 0x302c40: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C44u;
        goto label_302c44;
    }
    ctx->pc = 0x302C3Cu;
    SET_GPR_U32(ctx, 31, 0x302C44u);
    ctx->pc = 0x302C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C3Cu;
    // 0x302c40: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302A70u, 0x302C3Cu, 0x302C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C44u;
label_302c44:
    // 0x302c44: 0x0  nop
    ctx->pc = 0x302c44u;
    // NOP
label_302c48:
    // 0x302c48: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x302c48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_302c4c:
    // 0x302c4c: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x302c4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_302c50:
    // 0x302c50: 0x102000df  beqz        $at, . + 4 + (0xDF << 2)
label_302c54:
    if (ctx->pc == 0x302C54u) {
        ctx->pc = 0x302C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C50u;
        // 0x302c54: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C58u;
        goto label_302c58;
    }
    ctx->pc = 0x302C50u;
    {
        const bool branch_taken_0x302c50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x302C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C50u;
        // 0x302c54: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c50) {
            ctx->pc = 0x302FD0u;
            goto label_302fd0;
        }
    }
    ctx->pc = 0x302C58u;
label_302c58:
    // 0x302c58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x302c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_302c5c:
    // 0x302c5c: 0x2484c760  addiu       $a0, $a0, -0x38A0
    ctx->pc = 0x302c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952800));
label_302c60:
    // 0x302c60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x302c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_302c64:
    // 0x302c64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x302c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_302c68:
    // 0x302c68: 0x600008  jr          $v1
label_302c6c:
    if (ctx->pc == 0x302C6Cu) {
        ctx->pc = 0x302C70u;
        goto label_302c70;
    }
    ctx->pc = 0x302C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x302C70u: goto label_302c70;
            case 0x302CA8u: goto label_302ca8;
            case 0x302CE8u: goto label_302ce8;
            case 0x302DB0u: goto label_302db0;
            case 0x302DF0u: goto label_302df0;
            case 0x302EB8u: goto label_302eb8;
            case 0x302EF8u: goto label_302ef8;
            case 0x302FC0u: goto label_302fc0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302C68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x302C70u;
label_302c70:
    // 0x302c70: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x302c70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_302c74:
    // 0x302c74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302c78:
    // 0x302c78: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x302c78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_302c7c:
    // 0x302c7c: 0x320f809  jalr        $t9
label_302c80:
    if (ctx->pc == 0x302C80u) {
        ctx->pc = 0x302C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C7Cu;
        // 0x302c80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C84u;
        goto label_302c84;
    }
    ctx->pc = 0x302C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302C84u);
        ctx->pc = 0x302C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C7Cu;
        // 0x302c80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302C7Cu, 0x302C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302C84u;
label_302c84:
    // 0x302c84: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x302c84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
label_302c88:
    // 0x302c88: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x302c88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_302c8c:
    // 0x302c8c: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x302c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_302c90:
    // 0x302c90: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x302c90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_302c94:
    // 0x302c94: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x302c94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_302c98:
    // 0x302c98: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x302c98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_302c9c:
    // 0x302c9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x302c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_302ca0:
    // 0x302ca0: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x302ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_302ca4:
    // 0x302ca4: 0x0  nop
    ctx->pc = 0x302ca4u;
    // NOP
label_302ca8:
    // 0x302ca8: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x302ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_302cac:
    // 0x302cac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302cb0:
    // 0x302cb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302cb4:
    // 0x302cb4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x302cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_302cb8:
    // 0x302cb8: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x302cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_302cbc:
    // 0x302cbc: 0x320f809  jalr        $t9
label_302cc0:
    if (ctx->pc == 0x302CC0u) {
        ctx->pc = 0x302CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CBCu;
        // 0x302cc0: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302CC4u;
        goto label_302cc4;
    }
    ctx->pc = 0x302CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302CC4u);
        ctx->pc = 0x302CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CBCu;
        // 0x302cc0: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302CBCu, 0x302CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302CC4u;
label_302cc4:
    // 0x302cc4: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x302cc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
label_302cc8:
    // 0x302cc8: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x302cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_302ccc:
    // 0x302ccc: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x302cccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_302cd0:
    // 0x302cd0: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x302cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_302cd4:
    // 0x302cd4: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x302cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_302cd8:
    // 0x302cd8: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x302cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_302cdc:
    // 0x302cdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x302cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_302ce0:
    // 0x302ce0: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x302ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_302ce4:
    // 0x302ce4: 0x0  nop
    ctx->pc = 0x302ce4u;
    // NOP
label_302ce8:
    // 0x302ce8: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x302ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_302cec:
    // 0x302cec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302cf0:
    // 0x302cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302cf4:
    // 0x302cf4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x302cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_302cf8:
    // 0x302cf8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x302cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_302cfc:
    // 0x302cfc: 0x320f809  jalr        $t9
label_302d00:
    if (ctx->pc == 0x302D00u) {
        ctx->pc = 0x302D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CFCu;
        // 0x302d00: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302D04u;
        goto label_302d04;
    }
    ctx->pc = 0x302CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302D04u);
        ctx->pc = 0x302D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CFCu;
        // 0x302d00: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302CFCu, 0x302D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302D04u;
label_302d04:
    // 0x302d04: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x302d04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_302d08:
    // 0x302d08: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_302d0c:
    if (ctx->pc == 0x302D0Cu) {
        ctx->pc = 0x302D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D08u;
        // 0x302d0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302D10u;
        goto label_302d10;
    }
    ctx->pc = 0x302D08u;
    {
        const bool branch_taken_0x302d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D08u;
        // 0x302d0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d08) {
            ctx->pc = 0x302D18u;
            goto label_302d18;
        }
    }
    ctx->pc = 0x302D10u;
label_302d10:
    // 0x302d10: 0x10000021  b           . + 4 + (0x21 << 2)
label_302d14:
    if (ctx->pc == 0x302D14u) {
        ctx->pc = 0x302D18u;
        goto label_302d18;
    }
    ctx->pc = 0x302D10u;
    {
        const bool branch_taken_0x302d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302d10) {
            ctx->pc = 0x302D98u;
            goto label_302d98;
        }
    }
    ctx->pc = 0x302D18u;
label_302d18:
    // 0x302d18: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x302d18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_302d1c:
    // 0x302d1c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x302d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_302d20:
    // 0x302d20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x302d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_302d24:
    // 0x302d24: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x302d24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_302d28:
    // 0x302d28: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x302d28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_302d2c:
    // 0x302d2c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_302d30:
    if (ctx->pc == 0x302D30u) {
        ctx->pc = 0x302D34u;
        goto label_302d34;
    }
    ctx->pc = 0x302D2Cu;
    {
        const bool branch_taken_0x302d2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x302d2c) {
            ctx->pc = 0x302D68u;
            goto label_302d68;
        }
    }
    ctx->pc = 0x302D34u;
label_302d34:
    // 0x302d34: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x302d34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_302d38:
    // 0x302d38: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x302d38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_302d3c:
    // 0x302d3c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_302d40:
    if (ctx->pc == 0x302D40u) {
        ctx->pc = 0x302D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D3Cu;
        // 0x302d40: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302D44u;
        goto label_302d44;
    }
    ctx->pc = 0x302D3Cu;
    {
        const bool branch_taken_0x302d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x302D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D3Cu;
        // 0x302d40: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d3c) {
            ctx->pc = 0x302D90u;
            goto label_302d90;
        }
    }
    ctx->pc = 0x302D44u;
label_302d44:
    // 0x302d44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302d48:
    // 0x302d48: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x302d48u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_302d4c:
    // 0x302d4c: 0x0  nop
    ctx->pc = 0x302d4cu;
    // NOP
label_302d50:
    // 0x302d50: 0x0  nop
    ctx->pc = 0x302d50u;
    // NOP
label_302d54:
    // 0x302d54: 0x2010  mfhi        $a0
    ctx->pc = 0x302d54u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_302d58:
    // 0x302d58: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x302d58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_302d5c:
    // 0x302d5c: 0x1000000c  b           . + 4 + (0xC << 2)
label_302d60:
    if (ctx->pc == 0x302D60u) {
        ctx->pc = 0x302D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D5Cu;
        // 0x302d60: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302D64u;
        goto label_302d64;
    }
    ctx->pc = 0x302D5Cu;
    {
        const bool branch_taken_0x302d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D5Cu;
        // 0x302d60: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d5c) {
            ctx->pc = 0x302D90u;
            goto label_302d90;
        }
    }
    ctx->pc = 0x302D64u;
label_302d64:
    // 0x302d64: 0x0  nop
    ctx->pc = 0x302d64u;
    // NOP
label_302d68:
    // 0x302d68: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x302d68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_302d6c:
    // 0x302d6c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x302d6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_302d70:
    // 0x302d70: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_302d74:
    if (ctx->pc == 0x302D74u) {
        ctx->pc = 0x302D78u;
        goto label_302d78;
    }
    ctx->pc = 0x302D70u;
    {
        const bool branch_taken_0x302d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x302d70) {
            ctx->pc = 0x302D90u;
            goto label_302d90;
        }
    }
    ctx->pc = 0x302D78u;
label_302d78:
    // 0x302d78: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x302d78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_302d7c:
    // 0x302d7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302d80:
    // 0x302d80: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x302d80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_302d84:
    // 0x302d84: 0x10000004  b           . + 4 + (0x4 << 2)
label_302d88:
    if (ctx->pc == 0x302D88u) {
        ctx->pc = 0x302D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D84u;
        // 0x302d88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302D8Cu;
        goto label_302d8c;
    }
    ctx->pc = 0x302D84u;
    {
        const bool branch_taken_0x302d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302D84u;
        // 0x302d88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302d84) {
            ctx->pc = 0x302D98u;
            goto label_302d98;
        }
    }
    ctx->pc = 0x302D8Cu;
label_302d8c:
    // 0x302d8c: 0x0  nop
    ctx->pc = 0x302d8cu;
    // NOP
label_302d90:
    // 0x302d90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302d94:
    // 0x302d94: 0x0  nop
    ctx->pc = 0x302d94u;
    // NOP
label_302d98:
    // 0x302d98: 0x1460008d  bnez        $v1, . + 4 + (0x8D << 2)
label_302d9c:
    if (ctx->pc == 0x302D9Cu) {
        ctx->pc = 0x302DA0u;
        goto label_302da0;
    }
    ctx->pc = 0x302D98u;
    {
        const bool branch_taken_0x302d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x302d98) {
            ctx->pc = 0x302FD0u;
            goto label_302fd0;
        }
    }
    ctx->pc = 0x302DA0u;
label_302da0:
    // 0x302da0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x302da0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_302da4:
    // 0x302da4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x302da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_302da8:
    // 0x302da8: 0x10000089  b           . + 4 + (0x89 << 2)
label_302dac:
    if (ctx->pc == 0x302DACu) {
        ctx->pc = 0x302DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DA8u;
        // 0x302dac: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302DB0u;
        goto label_302db0;
    }
    ctx->pc = 0x302DA8u;
    {
        const bool branch_taken_0x302da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DA8u;
        // 0x302dac: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302da8) {
            ctx->pc = 0x302FD0u;
            goto label_302fd0;
        }
    }
    ctx->pc = 0x302DB0u;
label_302db0:
    // 0x302db0: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x302db0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_302db4:
    // 0x302db4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302db8:
    // 0x302db8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302dbc:
    // 0x302dbc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x302dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_302dc0:
    // 0x302dc0: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x302dc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_302dc4:
    // 0x302dc4: 0x320f809  jalr        $t9
label_302dc8:
    if (ctx->pc == 0x302DC8u) {
        ctx->pc = 0x302DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DC4u;
        // 0x302dc8: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302DCCu;
        goto label_302dcc;
    }
    ctx->pc = 0x302DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302DCCu);
        ctx->pc = 0x302DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302DC4u;
        // 0x302dc8: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302DC4u, 0x302DCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302DCCu;
label_302dcc:
    // 0x302dcc: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x302dccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
label_302dd0:
    // 0x302dd0: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x302dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_302dd4:
    // 0x302dd4: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x302dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_302dd8:
    // 0x302dd8: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x302dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_302ddc:
    // 0x302ddc: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x302ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_302de0:
    // 0x302de0: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x302de0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_302de4:
    // 0x302de4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x302de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_302de8:
    // 0x302de8: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x302de8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_302dec:
    // 0x302dec: 0x0  nop
    ctx->pc = 0x302decu;
    // NOP
label_302df0:
    // 0x302df0: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x302df0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_302df4:
    // 0x302df4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302df8:
    // 0x302df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302dfc:
    // 0x302dfc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x302dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_302e00:
    // 0x302e00: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x302e00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_302e04:
    // 0x302e04: 0x320f809  jalr        $t9
label_302e08:
    if (ctx->pc == 0x302E08u) {
        ctx->pc = 0x302E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E04u;
        // 0x302e08: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E0Cu;
        goto label_302e0c;
    }
    ctx->pc = 0x302E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302E0Cu);
        ctx->pc = 0x302E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E04u;
        // 0x302e08: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302E04u, 0x302E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302E0Cu;
label_302e0c:
    // 0x302e0c: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x302e0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_302e10:
    // 0x302e10: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_302e14:
    if (ctx->pc == 0x302E14u) {
        ctx->pc = 0x302E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E10u;
        // 0x302e14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E18u;
        goto label_302e18;
    }
    ctx->pc = 0x302E10u;
    {
        const bool branch_taken_0x302e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E10u;
        // 0x302e14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e10) {
            ctx->pc = 0x302E20u;
            goto label_302e20;
        }
    }
    ctx->pc = 0x302E18u;
label_302e18:
    // 0x302e18: 0x10000021  b           . + 4 + (0x21 << 2)
label_302e1c:
    if (ctx->pc == 0x302E1Cu) {
        ctx->pc = 0x302E20u;
        goto label_302e20;
    }
    ctx->pc = 0x302E18u;
    {
        const bool branch_taken_0x302e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302e18) {
            ctx->pc = 0x302EA0u;
            goto label_302ea0;
        }
    }
    ctx->pc = 0x302E20u;
label_302e20:
    // 0x302e20: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x302e20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_302e24:
    // 0x302e24: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x302e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_302e28:
    // 0x302e28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x302e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_302e2c:
    // 0x302e2c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x302e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_302e30:
    // 0x302e30: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x302e30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_302e34:
    // 0x302e34: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_302e38:
    if (ctx->pc == 0x302E38u) {
        ctx->pc = 0x302E3Cu;
        goto label_302e3c;
    }
    ctx->pc = 0x302E34u;
    {
        const bool branch_taken_0x302e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x302e34) {
            ctx->pc = 0x302E70u;
            goto label_302e70;
        }
    }
    ctx->pc = 0x302E3Cu;
label_302e3c:
    // 0x302e3c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x302e3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_302e40:
    // 0x302e40: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x302e40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_302e44:
    // 0x302e44: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_302e48:
    if (ctx->pc == 0x302E48u) {
        ctx->pc = 0x302E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E44u;
        // 0x302e48: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E4Cu;
        goto label_302e4c;
    }
    ctx->pc = 0x302E44u;
    {
        const bool branch_taken_0x302e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x302E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E44u;
        // 0x302e48: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e44) {
            ctx->pc = 0x302E98u;
            goto label_302e98;
        }
    }
    ctx->pc = 0x302E4Cu;
label_302e4c:
    // 0x302e4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302e50:
    // 0x302e50: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x302e50u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_302e54:
    // 0x302e54: 0x0  nop
    ctx->pc = 0x302e54u;
    // NOP
label_302e58:
    // 0x302e58: 0x0  nop
    ctx->pc = 0x302e58u;
    // NOP
label_302e5c:
    // 0x302e5c: 0x2010  mfhi        $a0
    ctx->pc = 0x302e5cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_302e60:
    // 0x302e60: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x302e60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_302e64:
    // 0x302e64: 0x1000000c  b           . + 4 + (0xC << 2)
label_302e68:
    if (ctx->pc == 0x302E68u) {
        ctx->pc = 0x302E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E64u;
        // 0x302e68: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E6Cu;
        goto label_302e6c;
    }
    ctx->pc = 0x302E64u;
    {
        const bool branch_taken_0x302e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E64u;
        // 0x302e68: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e64) {
            ctx->pc = 0x302E98u;
            goto label_302e98;
        }
    }
    ctx->pc = 0x302E6Cu;
label_302e6c:
    // 0x302e6c: 0x0  nop
    ctx->pc = 0x302e6cu;
    // NOP
label_302e70:
    // 0x302e70: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x302e70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_302e74:
    // 0x302e74: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x302e74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_302e78:
    // 0x302e78: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_302e7c:
    if (ctx->pc == 0x302E7Cu) {
        ctx->pc = 0x302E80u;
        goto label_302e80;
    }
    ctx->pc = 0x302E78u;
    {
        const bool branch_taken_0x302e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x302e78) {
            ctx->pc = 0x302E98u;
            goto label_302e98;
        }
    }
    ctx->pc = 0x302E80u;
label_302e80:
    // 0x302e80: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x302e80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_302e84:
    // 0x302e84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302e88:
    // 0x302e88: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x302e88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_302e8c:
    // 0x302e8c: 0x10000004  b           . + 4 + (0x4 << 2)
label_302e90:
    if (ctx->pc == 0x302E90u) {
        ctx->pc = 0x302E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E8Cu;
        // 0x302e90: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302E94u;
        goto label_302e94;
    }
    ctx->pc = 0x302E8Cu;
    {
        const bool branch_taken_0x302e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E8Cu;
        // 0x302e90: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e8c) {
            ctx->pc = 0x302EA0u;
            goto label_302ea0;
        }
    }
    ctx->pc = 0x302E94u;
label_302e94:
    // 0x302e94: 0x0  nop
    ctx->pc = 0x302e94u;
    // NOP
label_302e98:
    // 0x302e98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302e9c:
    // 0x302e9c: 0x0  nop
    ctx->pc = 0x302e9cu;
    // NOP
label_302ea0:
    // 0x302ea0: 0x1460004b  bnez        $v1, . + 4 + (0x4B << 2)
label_302ea4:
    if (ctx->pc == 0x302EA4u) {
        ctx->pc = 0x302EA8u;
        goto label_302ea8;
    }
    ctx->pc = 0x302EA0u;
    {
        const bool branch_taken_0x302ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x302ea0) {
            ctx->pc = 0x302FD0u;
            goto label_302fd0;
        }
    }
    ctx->pc = 0x302EA8u;
label_302ea8:
    // 0x302ea8: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x302ea8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_302eac:
    // 0x302eac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x302eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_302eb0:
    // 0x302eb0: 0x10000047  b           . + 4 + (0x47 << 2)
label_302eb4:
    if (ctx->pc == 0x302EB4u) {
        ctx->pc = 0x302EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302EB0u;
        // 0x302eb4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302EB8u;
        goto label_302eb8;
    }
    ctx->pc = 0x302EB0u;
    {
        const bool branch_taken_0x302eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302EB0u;
        // 0x302eb4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302eb0) {
            ctx->pc = 0x302FD0u;
            goto label_302fd0;
        }
    }
    ctx->pc = 0x302EB8u;
label_302eb8:
    // 0x302eb8: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x302eb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_302ebc:
    // 0x302ebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302ec0:
    // 0x302ec0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302ec4:
    // 0x302ec4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x302ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_302ec8:
    // 0x302ec8: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x302ec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_302ecc:
    // 0x302ecc: 0x320f809  jalr        $t9
label_302ed0:
    if (ctx->pc == 0x302ED0u) {
        ctx->pc = 0x302ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302ECCu;
        // 0x302ed0: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302ED4u;
        goto label_302ed4;
    }
    ctx->pc = 0x302ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302ED4u);
        ctx->pc = 0x302ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302ECCu;
        // 0x302ed0: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302ECCu, 0x302ED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302ED4u;
label_302ed4:
    // 0x302ed4: 0x8622052a  lh          $v0, 0x52A($s1)
    ctx->pc = 0x302ed4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1322)));
label_302ed8:
    // 0x302ed8: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x302ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_302edc:
    // 0x302edc: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x302edcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_302ee0:
    // 0x302ee0: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x302ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_302ee4:
    // 0x302ee4: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x302ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_302ee8:
    // 0x302ee8: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x302ee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_302eec:
    // 0x302eec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x302eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_302ef0:
    // 0x302ef0: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x302ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_302ef4:
    // 0x302ef4: 0x0  nop
    ctx->pc = 0x302ef4u;
    // NOP
label_302ef8:
    // 0x302ef8: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x302ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_302efc:
    // 0x302efc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302f00:
    // 0x302f00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302f04:
    // 0x302f04: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x302f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_302f08:
    // 0x302f08: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x302f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_302f0c:
    // 0x302f0c: 0x320f809  jalr        $t9
label_302f10:
    if (ctx->pc == 0x302F10u) {
        ctx->pc = 0x302F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F0Cu;
        // 0x302f10: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302F14u;
        goto label_302f14;
    }
    ctx->pc = 0x302F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302F14u);
        ctx->pc = 0x302F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F0Cu;
        // 0x302f10: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302F0Cu, 0x302F14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302F14u;
label_302f14:
    // 0x302f14: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x302f14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_302f18:
    // 0x302f18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_302f1c:
    if (ctx->pc == 0x302F1Cu) {
        ctx->pc = 0x302F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F18u;
        // 0x302f1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302F20u;
        goto label_302f20;
    }
    ctx->pc = 0x302F18u;
    {
        const bool branch_taken_0x302f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x302F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F18u;
        // 0x302f1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302f18) {
            ctx->pc = 0x302F28u;
            goto label_302f28;
        }
    }
    ctx->pc = 0x302F20u;
label_302f20:
    // 0x302f20: 0x10000021  b           . + 4 + (0x21 << 2)
label_302f24:
    if (ctx->pc == 0x302F24u) {
        ctx->pc = 0x302F28u;
        goto label_302f28;
    }
    ctx->pc = 0x302F20u;
    {
        const bool branch_taken_0x302f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302f20) {
            ctx->pc = 0x302FA8u;
            goto label_302fa8;
        }
    }
    ctx->pc = 0x302F28u;
label_302f28:
    // 0x302f28: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x302f28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_302f2c:
    // 0x302f2c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x302f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_302f30:
    // 0x302f30: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x302f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_302f34:
    // 0x302f34: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x302f34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_302f38:
    // 0x302f38: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x302f38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_302f3c:
    // 0x302f3c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_302f40:
    if (ctx->pc == 0x302F40u) {
        ctx->pc = 0x302F44u;
        goto label_302f44;
    }
    ctx->pc = 0x302F3Cu;
    {
        const bool branch_taken_0x302f3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x302f3c) {
            ctx->pc = 0x302F78u;
            goto label_302f78;
        }
    }
    ctx->pc = 0x302F44u;
label_302f44:
    // 0x302f44: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x302f44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_302f48:
    // 0x302f48: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x302f48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_302f4c:
    // 0x302f4c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_302f50:
    if (ctx->pc == 0x302F50u) {
        ctx->pc = 0x302F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F4Cu;
        // 0x302f50: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302F54u;
        goto label_302f54;
    }
    ctx->pc = 0x302F4Cu;
    {
        const bool branch_taken_0x302f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x302F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F4Cu;
        // 0x302f50: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302f4c) {
            ctx->pc = 0x302FA0u;
            goto label_302fa0;
        }
    }
    ctx->pc = 0x302F54u;
label_302f54:
    // 0x302f54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302f58:
    // 0x302f58: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x302f58u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_302f5c:
    // 0x302f5c: 0x0  nop
    ctx->pc = 0x302f5cu;
    // NOP
label_302f60:
    // 0x302f60: 0x0  nop
    ctx->pc = 0x302f60u;
    // NOP
label_302f64:
    // 0x302f64: 0x2010  mfhi        $a0
    ctx->pc = 0x302f64u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_302f68:
    // 0x302f68: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x302f68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_302f6c:
    // 0x302f6c: 0x1000000c  b           . + 4 + (0xC << 2)
label_302f70:
    if (ctx->pc == 0x302F70u) {
        ctx->pc = 0x302F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F6Cu;
        // 0x302f70: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302F74u;
        goto label_302f74;
    }
    ctx->pc = 0x302F6Cu;
    {
        const bool branch_taken_0x302f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F6Cu;
        // 0x302f70: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302f6c) {
            ctx->pc = 0x302FA0u;
            goto label_302fa0;
        }
    }
    ctx->pc = 0x302F74u;
label_302f74:
    // 0x302f74: 0x0  nop
    ctx->pc = 0x302f74u;
    // NOP
label_302f78:
    // 0x302f78: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x302f78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_302f7c:
    // 0x302f7c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x302f7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_302f80:
    // 0x302f80: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_302f84:
    if (ctx->pc == 0x302F84u) {
        ctx->pc = 0x302F88u;
        goto label_302f88;
    }
    ctx->pc = 0x302F80u;
    {
        const bool branch_taken_0x302f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x302f80) {
            ctx->pc = 0x302FA0u;
            goto label_302fa0;
        }
    }
    ctx->pc = 0x302F88u;
label_302f88:
    // 0x302f88: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x302f88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_302f8c:
    // 0x302f8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302f90:
    // 0x302f90: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x302f90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_302f94:
    // 0x302f94: 0x10000004  b           . + 4 + (0x4 << 2)
label_302f98:
    if (ctx->pc == 0x302F98u) {
        ctx->pc = 0x302F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F94u;
        // 0x302f98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302F9Cu;
        goto label_302f9c;
    }
    ctx->pc = 0x302F94u;
    {
        const bool branch_taken_0x302f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302F94u;
        // 0x302f98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302f94) {
            ctx->pc = 0x302FA8u;
            goto label_302fa8;
        }
    }
    ctx->pc = 0x302F9Cu;
label_302f9c:
    // 0x302f9c: 0x0  nop
    ctx->pc = 0x302f9cu;
    // NOP
label_302fa0:
    // 0x302fa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302fa4:
    // 0x302fa4: 0x0  nop
    ctx->pc = 0x302fa4u;
    // NOP
label_302fa8:
    // 0x302fa8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_302fac:
    if (ctx->pc == 0x302FACu) {
        ctx->pc = 0x302FB0u;
        goto label_302fb0;
    }
    ctx->pc = 0x302FA8u;
    {
        const bool branch_taken_0x302fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x302fa8) {
            ctx->pc = 0x302FD0u;
            goto label_302fd0;
        }
    }
    ctx->pc = 0x302FB0u;
label_302fb0:
    // 0x302fb0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x302fb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_302fb4:
    // 0x302fb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x302fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_302fb8:
    // 0x302fb8: 0x10000005  b           . + 4 + (0x5 << 2)
label_302fbc:
    if (ctx->pc == 0x302FBCu) {
        ctx->pc = 0x302FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302FB8u;
        // 0x302fbc: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302FC0u;
        goto label_302fc0;
    }
    ctx->pc = 0x302FB8u;
    {
        const bool branch_taken_0x302fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302FB8u;
        // 0x302fbc: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302fb8) {
            ctx->pc = 0x302FD0u;
            goto label_302fd0;
        }
    }
    ctx->pc = 0x302FC0u;
label_302fc0:
    // 0x302fc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302fc4:
    // 0x302fc4: 0xc0c0830  jal         func_3020C0
label_302fc8:
    if (ctx->pc == 0x302FC8u) {
        ctx->pc = 0x302FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302FC4u;
        // 0x302fc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302FCCu;
        goto label_302fcc;
    }
    ctx->pc = 0x302FC4u;
    SET_GPR_U32(ctx, 31, 0x302FCCu);
    ctx->pc = 0x302FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302FC4u;
    // 0x302fc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x302FC4u, 0x302FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302FCCu;
label_302fcc:
    // 0x302fcc: 0x0  nop
    ctx->pc = 0x302fccu;
    // NOP
label_302fd0:
    // 0x302fd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_302fd4:
    // 0x302fd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x302fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_302fd8:
    // 0x302fd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x302fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_302fdc:
    // 0x302fdc: 0x3e00008  jr          $ra
label_302fe0:
    if (ctx->pc == 0x302FE0u) {
        ctx->pc = 0x302FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302FDCu;
        // 0x302fe0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302FE4u;
        goto label_fallthrough_0x302fdc;
    }
    ctx->pc = 0x302FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302FDCu;
        // 0x302fe0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x302fdc:
    ctx->pc = 0x302FE4u;
}

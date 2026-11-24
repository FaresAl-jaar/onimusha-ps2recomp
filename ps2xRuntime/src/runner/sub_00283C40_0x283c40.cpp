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

// Function: sub_00283C40
// Address: 0x283c40 - 0x283f1c
void sub_00283C40_0x283c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283C40_0x283c40");
#endif

    switch (ctx->pc) {
        case 0x283c40u: goto label_283c40;
        case 0x283c44u: goto label_283c44;
        case 0x283c48u: goto label_283c48;
        case 0x283c4cu: goto label_283c4c;
        case 0x283c50u: goto label_283c50;
        case 0x283c54u: goto label_283c54;
        case 0x283c58u: goto label_283c58;
        case 0x283c5cu: goto label_283c5c;
        case 0x283c60u: goto label_283c60;
        case 0x283c64u: goto label_283c64;
        case 0x283c68u: goto label_283c68;
        case 0x283c6cu: goto label_283c6c;
        case 0x283c70u: goto label_283c70;
        case 0x283c74u: goto label_283c74;
        case 0x283c78u: goto label_283c78;
        case 0x283c7cu: goto label_283c7c;
        case 0x283c80u: goto label_283c80;
        case 0x283c84u: goto label_283c84;
        case 0x283c88u: goto label_283c88;
        case 0x283c8cu: goto label_283c8c;
        case 0x283c90u: goto label_283c90;
        case 0x283c94u: goto label_283c94;
        case 0x283c98u: goto label_283c98;
        case 0x283c9cu: goto label_283c9c;
        case 0x283ca0u: goto label_283ca0;
        case 0x283ca4u: goto label_283ca4;
        case 0x283ca8u: goto label_283ca8;
        case 0x283cacu: goto label_283cac;
        case 0x283cb0u: goto label_283cb0;
        case 0x283cb4u: goto label_283cb4;
        case 0x283cb8u: goto label_283cb8;
        case 0x283cbcu: goto label_283cbc;
        case 0x283cc0u: goto label_283cc0;
        case 0x283cc4u: goto label_283cc4;
        case 0x283cc8u: goto label_283cc8;
        case 0x283cccu: goto label_283ccc;
        case 0x283cd0u: goto label_283cd0;
        case 0x283cd4u: goto label_283cd4;
        case 0x283cd8u: goto label_283cd8;
        case 0x283cdcu: goto label_283cdc;
        case 0x283ce0u: goto label_283ce0;
        case 0x283ce4u: goto label_283ce4;
        case 0x283ce8u: goto label_283ce8;
        case 0x283cecu: goto label_283cec;
        case 0x283cf0u: goto label_283cf0;
        case 0x283cf4u: goto label_283cf4;
        case 0x283cf8u: goto label_283cf8;
        case 0x283cfcu: goto label_283cfc;
        case 0x283d00u: goto label_283d00;
        case 0x283d04u: goto label_283d04;
        case 0x283d08u: goto label_283d08;
        case 0x283d0cu: goto label_283d0c;
        case 0x283d10u: goto label_283d10;
        case 0x283d14u: goto label_283d14;
        case 0x283d18u: goto label_283d18;
        case 0x283d1cu: goto label_283d1c;
        case 0x283d20u: goto label_283d20;
        case 0x283d24u: goto label_283d24;
        case 0x283d28u: goto label_283d28;
        case 0x283d2cu: goto label_283d2c;
        case 0x283d30u: goto label_283d30;
        case 0x283d34u: goto label_283d34;
        case 0x283d38u: goto label_283d38;
        case 0x283d3cu: goto label_283d3c;
        case 0x283d40u: goto label_283d40;
        case 0x283d44u: goto label_283d44;
        case 0x283d48u: goto label_283d48;
        case 0x283d4cu: goto label_283d4c;
        case 0x283d50u: goto label_283d50;
        case 0x283d54u: goto label_283d54;
        case 0x283d58u: goto label_283d58;
        case 0x283d5cu: goto label_283d5c;
        case 0x283d60u: goto label_283d60;
        case 0x283d64u: goto label_283d64;
        case 0x283d68u: goto label_283d68;
        case 0x283d6cu: goto label_283d6c;
        case 0x283d70u: goto label_283d70;
        case 0x283d74u: goto label_283d74;
        case 0x283d78u: goto label_283d78;
        case 0x283d7cu: goto label_283d7c;
        case 0x283d80u: goto label_283d80;
        case 0x283d84u: goto label_283d84;
        case 0x283d88u: goto label_283d88;
        case 0x283d8cu: goto label_283d8c;
        case 0x283d90u: goto label_283d90;
        case 0x283d94u: goto label_283d94;
        case 0x283d98u: goto label_283d98;
        case 0x283d9cu: goto label_283d9c;
        case 0x283da0u: goto label_283da0;
        case 0x283da4u: goto label_283da4;
        case 0x283da8u: goto label_283da8;
        case 0x283dacu: goto label_283dac;
        case 0x283db0u: goto label_283db0;
        case 0x283db4u: goto label_283db4;
        case 0x283db8u: goto label_283db8;
        case 0x283dbcu: goto label_283dbc;
        case 0x283dc0u: goto label_283dc0;
        case 0x283dc4u: goto label_283dc4;
        case 0x283dc8u: goto label_283dc8;
        case 0x283dccu: goto label_283dcc;
        case 0x283dd0u: goto label_283dd0;
        case 0x283dd4u: goto label_283dd4;
        case 0x283dd8u: goto label_283dd8;
        case 0x283ddcu: goto label_283ddc;
        case 0x283de0u: goto label_283de0;
        case 0x283de4u: goto label_283de4;
        case 0x283de8u: goto label_283de8;
        case 0x283decu: goto label_283dec;
        case 0x283df0u: goto label_283df0;
        case 0x283df4u: goto label_283df4;
        case 0x283df8u: goto label_283df8;
        case 0x283dfcu: goto label_283dfc;
        case 0x283e00u: goto label_283e00;
        case 0x283e04u: goto label_283e04;
        case 0x283e08u: goto label_283e08;
        case 0x283e0cu: goto label_283e0c;
        case 0x283e10u: goto label_283e10;
        case 0x283e14u: goto label_283e14;
        case 0x283e18u: goto label_283e18;
        case 0x283e1cu: goto label_283e1c;
        case 0x283e20u: goto label_283e20;
        case 0x283e24u: goto label_283e24;
        case 0x283e28u: goto label_283e28;
        case 0x283e2cu: goto label_283e2c;
        case 0x283e30u: goto label_283e30;
        case 0x283e34u: goto label_283e34;
        case 0x283e38u: goto label_283e38;
        case 0x283e3cu: goto label_283e3c;
        case 0x283e40u: goto label_283e40;
        case 0x283e44u: goto label_283e44;
        case 0x283e48u: goto label_283e48;
        case 0x283e4cu: goto label_283e4c;
        case 0x283e50u: goto label_283e50;
        case 0x283e54u: goto label_283e54;
        case 0x283e58u: goto label_283e58;
        case 0x283e5cu: goto label_283e5c;
        case 0x283e60u: goto label_283e60;
        case 0x283e64u: goto label_283e64;
        case 0x283e68u: goto label_283e68;
        case 0x283e6cu: goto label_283e6c;
        case 0x283e70u: goto label_283e70;
        case 0x283e74u: goto label_283e74;
        case 0x283e78u: goto label_283e78;
        case 0x283e7cu: goto label_283e7c;
        case 0x283e80u: goto label_283e80;
        case 0x283e84u: goto label_283e84;
        case 0x283e88u: goto label_283e88;
        case 0x283e8cu: goto label_283e8c;
        case 0x283e90u: goto label_283e90;
        case 0x283e94u: goto label_283e94;
        case 0x283e98u: goto label_283e98;
        case 0x283e9cu: goto label_283e9c;
        case 0x283ea0u: goto label_283ea0;
        case 0x283ea4u: goto label_283ea4;
        case 0x283ea8u: goto label_283ea8;
        case 0x283eacu: goto label_283eac;
        case 0x283eb0u: goto label_283eb0;
        case 0x283eb4u: goto label_283eb4;
        case 0x283eb8u: goto label_283eb8;
        case 0x283ebcu: goto label_283ebc;
        case 0x283ec0u: goto label_283ec0;
        case 0x283ec4u: goto label_283ec4;
        case 0x283ec8u: goto label_283ec8;
        case 0x283eccu: goto label_283ecc;
        case 0x283ed0u: goto label_283ed0;
        case 0x283ed4u: goto label_283ed4;
        case 0x283ed8u: goto label_283ed8;
        case 0x283edcu: goto label_283edc;
        case 0x283ee0u: goto label_283ee0;
        case 0x283ee4u: goto label_283ee4;
        case 0x283ee8u: goto label_283ee8;
        case 0x283eecu: goto label_283eec;
        case 0x283ef0u: goto label_283ef0;
        case 0x283ef4u: goto label_283ef4;
        case 0x283ef8u: goto label_283ef8;
        case 0x283efcu: goto label_283efc;
        case 0x283f00u: goto label_283f00;
        case 0x283f04u: goto label_283f04;
        case 0x283f08u: goto label_283f08;
        case 0x283f0cu: goto label_283f0c;
        case 0x283f10u: goto label_283f10;
        case 0x283f14u: goto label_283f14;
        case 0x283f18u: goto label_283f18;
        default: break;
    }

    ctx->pc = 0x283c40u;

label_283c40:
    // 0x283c40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x283c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_283c44:
    // 0x283c44: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x283c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_283c48:
    // 0x283c48: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x283c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_283c4c:
    // 0x283c4c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x283c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_283c50:
    // 0x283c50: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x283c50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_283c54:
    // 0x283c54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x283c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_283c58:
    // 0x283c58: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x283c58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_283c5c:
    // 0x283c5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x283c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_283c60:
    // 0x283c60: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x283c60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_283c64:
    // 0x283c64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x283c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_283c68:
    // 0x283c68: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x283c68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_283c6c:
    // 0x283c6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x283c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_283c70:
    // 0x283c70: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x283c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_283c74:
    // 0x283c74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x283c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_283c78:
    // 0x283c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_283c7c:
    // 0x283c7c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x283c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_283c80:
    // 0x283c80: 0xc09d4d4  jal         func_275350
label_283c84:
    if (ctx->pc == 0x283C84u) {
        ctx->pc = 0x283C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C80u;
        // 0x283c84: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283C88u;
        goto label_283c88;
    }
    ctx->pc = 0x283C80u;
    SET_GPR_U32(ctx, 31, 0x283C88u);
    ctx->pc = 0x283C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283C80u;
    // 0x283c84: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x283C80u, 0x283C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283C88u;
label_283c88:
    // 0x283c88: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_283c8c:
    if (ctx->pc == 0x283C8Cu) {
        ctx->pc = 0x283C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C88u;
        // 0x283c8c: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283C90u;
        goto label_283c90;
    }
    ctx->pc = 0x283C88u;
    {
        const bool branch_taken_0x283c88 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x283C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C88u;
        // 0x283c8c: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c88) {
            ctx->pc = 0x283CA0u;
            goto label_283ca0;
        }
    }
    ctx->pc = 0x283C90u;
label_283c90:
    // 0x283c90: 0xc09d4d8  jal         func_275360
label_283c94:
    if (ctx->pc == 0x283C94u) {
        ctx->pc = 0x283C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C90u;
        // 0x283c94: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283C98u;
        goto label_283c98;
    }
    ctx->pc = 0x283C90u;
    SET_GPR_U32(ctx, 31, 0x283C98u);
    ctx->pc = 0x283C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283C90u;
    // 0x283c94: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x283C90u, 0x283C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283C98u;
label_283c98:
    // 0x283c98: 0x10000095  b           . + 4 + (0x95 << 2)
label_283c9c:
    if (ctx->pc == 0x283C9Cu) {
        ctx->pc = 0x283C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C98u;
        // 0x283c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283CA0u;
        goto label_283ca0;
    }
    ctx->pc = 0x283C98u;
    {
        const bool branch_taken_0x283c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C98u;
        // 0x283c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c98) {
            ctx->pc = 0x283EF0u;
            goto label_283ef0;
        }
    }
    ctx->pc = 0x283CA0u;
label_283ca0:
    // 0x283ca0: 0xc0741a4  jal         func_1D0690
label_283ca4:
    if (ctx->pc == 0x283CA4u) {
        ctx->pc = 0x283CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CA0u;
        // 0x283ca4: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283CA8u;
        goto label_283ca8;
    }
    ctx->pc = 0x283CA0u;
    SET_GPR_U32(ctx, 31, 0x283CA8u);
    ctx->pc = 0x283CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283CA0u;
    // 0x283ca4: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x283CA0u, 0x283CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283CA8u;
label_283ca8:
    // 0x283ca8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x283ca8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283cac:
    // 0x283cac: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_283cb0:
    if (ctx->pc == 0x283CB0u) {
        ctx->pc = 0x283CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CACu;
        // 0x283cb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283CB4u;
        goto label_283cb4;
    }
    ctx->pc = 0x283CACu;
    {
        const bool branch_taken_0x283cac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x283CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CACu;
        // 0x283cb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283cac) {
            ctx->pc = 0x283CD8u;
            goto label_283cd8;
        }
    }
    ctx->pc = 0x283CB4u;
label_283cb4:
    // 0x283cb4: 0xc096b00  jal         func_25AC00
label_283cb8:
    if (ctx->pc == 0x283CB8u) {
        ctx->pc = 0x283CBCu;
        goto label_283cbc;
    }
    ctx->pc = 0x283CB4u;
    SET_GPR_U32(ctx, 31, 0x283CBCu);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x283CB4u, 0x283CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283CBCu;
label_283cbc:
    // 0x283cbc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x283cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_283cc0:
    // 0x283cc0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x283cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_283cc4:
    // 0x283cc4: 0x24637570  addiu       $v1, $v1, 0x7570
    ctx->pc = 0x283cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30064));
label_283cc8:
    // 0x283cc8: 0x24427540  addiu       $v0, $v0, 0x7540
    ctx->pc = 0x283cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30016));
label_283ccc:
    // 0x283ccc: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x283cccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
label_283cd0:
    // 0x283cd0: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x283cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
label_283cd4:
    // 0x283cd4: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x283cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_283cd8:
    // 0x283cd8: 0x12600081  beqz        $s3, . + 4 + (0x81 << 2)
label_283cdc:
    if (ctx->pc == 0x283CDCu) {
        ctx->pc = 0x283CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CD8u;
        // 0x283cdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283CE0u;
        goto label_283ce0;
    }
    ctx->pc = 0x283CD8u;
    {
        const bool branch_taken_0x283cd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x283CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CD8u;
        // 0x283cdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283cd8) {
            ctx->pc = 0x283EE0u;
            goto label_283ee0;
        }
    }
    ctx->pc = 0x283CE0u;
label_283ce0:
    // 0x283ce0: 0xc09d4fc  jal         func_2753F0
label_283ce4:
    if (ctx->pc == 0x283CE4u) {
        ctx->pc = 0x283CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CE0u;
        // 0x283ce4: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283CE8u;
        goto label_283ce8;
    }
    ctx->pc = 0x283CE0u;
    SET_GPR_U32(ctx, 31, 0x283CE8u);
    ctx->pc = 0x283CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283CE0u;
    // 0x283ce4: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x283CE0u, 0x283CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283CE8u;
label_283ce8:
    // 0x283ce8: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x283ce8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_283cec:
    // 0x283cec: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x283cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_283cf0:
    // 0x283cf0: 0xc09d524  jal         func_275490
label_283cf4:
    if (ctx->pc == 0x283CF4u) {
        ctx->pc = 0x283CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CF0u;
        // 0x283cf4: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283CF8u;
        goto label_283cf8;
    }
    ctx->pc = 0x283CF0u;
    SET_GPR_U32(ctx, 31, 0x283CF8u);
    ctx->pc = 0x283CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283CF0u;
    // 0x283cf4: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x283CF0u, 0x283CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283CF8u;
label_283cf8:
    // 0x283cf8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x283cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283cfc:
    // 0x283cfc: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
label_283d00:
    if (ctx->pc == 0x283D00u) {
        ctx->pc = 0x283D04u;
        goto label_283d04;
    }
    ctx->pc = 0x283CFCu;
    {
        const bool branch_taken_0x283cfc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x283cfc) {
            ctx->pc = 0x283D38u;
            goto label_283d38;
        }
    }
    ctx->pc = 0x283D04u;
label_283d04:
    // 0x283d04: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_283d08:
    if (ctx->pc == 0x283D08u) {
        ctx->pc = 0x283D0Cu;
        goto label_283d0c;
    }
    ctx->pc = 0x283D04u;
    {
        const bool branch_taken_0x283d04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x283d04) {
            ctx->pc = 0x283D20u;
            goto label_283d20;
        }
    }
    ctx->pc = 0x283D0Cu;
label_283d0c:
    // 0x283d0c: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x283d0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_283d10:
    // 0x283d10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x283d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_283d14:
    // 0x283d14: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x283d14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_283d18:
    // 0x283d18: 0x320f809  jalr        $t9
label_283d1c:
    if (ctx->pc == 0x283D1Cu) {
        ctx->pc = 0x283D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D18u;
        // 0x283d1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283D20u;
        goto label_283d20;
    }
    ctx->pc = 0x283D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x283D20u);
        ctx->pc = 0x283D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D18u;
        // 0x283d1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283D18u, 0x283D20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283D20u;
label_283d20:
    // 0x283d20: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x283d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_283d24:
    // 0x283d24: 0xc09d4d8  jal         func_275360
label_283d28:
    if (ctx->pc == 0x283D28u) {
        ctx->pc = 0x283D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D24u;
        // 0x283d28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283D2Cu;
        goto label_283d2c;
    }
    ctx->pc = 0x283D24u;
    SET_GPR_U32(ctx, 31, 0x283D2Cu);
    ctx->pc = 0x283D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283D24u;
    // 0x283d28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x283D24u, 0x283D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D2Cu;
label_283d2c:
    // 0x283d2c: 0x10000070  b           . + 4 + (0x70 << 2)
label_283d30:
    if (ctx->pc == 0x283D30u) {
        ctx->pc = 0x283D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D2Cu;
        // 0x283d30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283D34u;
        goto label_283d34;
    }
    ctx->pc = 0x283D2Cu;
    {
        const bool branch_taken_0x283d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D2Cu;
        // 0x283d30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d2c) {
            ctx->pc = 0x283EF0u;
            goto label_283ef0;
        }
    }
    ctx->pc = 0x283D34u;
label_283d34:
    // 0x283d34: 0x0  nop
    ctx->pc = 0x283d34u;
    // NOP
label_283d38:
    // 0x283d38: 0x92460013  lbu         $a2, 0x13($s2)
    ctx->pc = 0x283d38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
label_283d3c:
    // 0x283d3c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x283d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_283d40:
    // 0x283d40: 0xc09d524  jal         func_275490
label_283d44:
    if (ctx->pc == 0x283D44u) {
        ctx->pc = 0x283D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D40u;
        // 0x283d44: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283D48u;
        goto label_283d48;
    }
    ctx->pc = 0x283D40u;
    SET_GPR_U32(ctx, 31, 0x283D48u);
    ctx->pc = 0x283D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283D40u;
    // 0x283d44: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x283D40u, 0x283D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D48u;
label_283d48:
    // 0x283d48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x283d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283d4c:
    // 0x283d4c: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_283d50:
    if (ctx->pc == 0x283D50u) {
        ctx->pc = 0x283D54u;
        goto label_283d54;
    }
    ctx->pc = 0x283D4Cu;
    {
        const bool branch_taken_0x283d4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x283d4c) {
            ctx->pc = 0x283D88u;
            goto label_283d88;
        }
    }
    ctx->pc = 0x283D54u;
label_283d54:
    // 0x283d54: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_283d58:
    if (ctx->pc == 0x283D58u) {
        ctx->pc = 0x283D5Cu;
        goto label_283d5c;
    }
    ctx->pc = 0x283D54u;
    {
        const bool branch_taken_0x283d54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x283d54) {
            ctx->pc = 0x283D70u;
            goto label_283d70;
        }
    }
    ctx->pc = 0x283D5Cu;
label_283d5c:
    // 0x283d5c: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x283d5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_283d60:
    // 0x283d60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x283d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_283d64:
    // 0x283d64: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x283d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_283d68:
    // 0x283d68: 0x320f809  jalr        $t9
label_283d6c:
    if (ctx->pc == 0x283D6Cu) {
        ctx->pc = 0x283D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D68u;
        // 0x283d6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283D70u;
        goto label_283d70;
    }
    ctx->pc = 0x283D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x283D70u);
        ctx->pc = 0x283D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D68u;
        // 0x283d6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283D68u, 0x283D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283D70u;
label_283d70:
    // 0x283d70: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x283d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_283d74:
    // 0x283d74: 0xc09d4d8  jal         func_275360
label_283d78:
    if (ctx->pc == 0x283D78u) {
        ctx->pc = 0x283D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D74u;
        // 0x283d78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283D7Cu;
        goto label_283d7c;
    }
    ctx->pc = 0x283D74u;
    SET_GPR_U32(ctx, 31, 0x283D7Cu);
    ctx->pc = 0x283D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283D74u;
    // 0x283d78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x283D74u, 0x283D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D7Cu;
label_283d7c:
    // 0x283d7c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_283d80:
    if (ctx->pc == 0x283D80u) {
        ctx->pc = 0x283D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D7Cu;
        // 0x283d80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283D84u;
        goto label_283d84;
    }
    ctx->pc = 0x283D7Cu;
    {
        const bool branch_taken_0x283d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D7Cu;
        // 0x283d80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d7c) {
            ctx->pc = 0x283EF0u;
            goto label_283ef0;
        }
    }
    ctx->pc = 0x283D84u;
label_283d84:
    // 0x283d84: 0x0  nop
    ctx->pc = 0x283d84u;
    // NOP
label_283d88:
    // 0x283d88: 0x9626000e  lhu         $a2, 0xE($s1)
    ctx->pc = 0x283d88u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_283d8c:
    // 0x283d8c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x283d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_283d90:
    // 0x283d90: 0xc09d524  jal         func_275490
label_283d94:
    if (ctx->pc == 0x283D94u) {
        ctx->pc = 0x283D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D90u;
        // 0x283d94: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283D98u;
        goto label_283d98;
    }
    ctx->pc = 0x283D90u;
    SET_GPR_U32(ctx, 31, 0x283D98u);
    ctx->pc = 0x283D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283D90u;
    // 0x283d94: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x283D90u, 0x283D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D98u;
label_283d98:
    // 0x283d98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x283d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283d9c:
    // 0x283d9c: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_283da0:
    if (ctx->pc == 0x283DA0u) {
        ctx->pc = 0x283DA4u;
        goto label_283da4;
    }
    ctx->pc = 0x283D9Cu;
    {
        const bool branch_taken_0x283d9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x283d9c) {
            ctx->pc = 0x283DD8u;
            goto label_283dd8;
        }
    }
    ctx->pc = 0x283DA4u;
label_283da4:
    // 0x283da4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_283da8:
    if (ctx->pc == 0x283DA8u) {
        ctx->pc = 0x283DACu;
        goto label_283dac;
    }
    ctx->pc = 0x283DA4u;
    {
        const bool branch_taken_0x283da4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x283da4) {
            ctx->pc = 0x283DC0u;
            goto label_283dc0;
        }
    }
    ctx->pc = 0x283DACu;
label_283dac:
    // 0x283dac: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x283dacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_283db0:
    // 0x283db0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x283db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_283db4:
    // 0x283db4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x283db4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_283db8:
    // 0x283db8: 0x320f809  jalr        $t9
label_283dbc:
    if (ctx->pc == 0x283DBCu) {
        ctx->pc = 0x283DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DB8u;
        // 0x283dbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283DC0u;
        goto label_283dc0;
    }
    ctx->pc = 0x283DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x283DC0u);
        ctx->pc = 0x283DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DB8u;
        // 0x283dbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283DB8u, 0x283DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283DC0u;
label_283dc0:
    // 0x283dc0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x283dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_283dc4:
    // 0x283dc4: 0xc09d4d8  jal         func_275360
label_283dc8:
    if (ctx->pc == 0x283DC8u) {
        ctx->pc = 0x283DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DC4u;
        // 0x283dc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283DCCu;
        goto label_283dcc;
    }
    ctx->pc = 0x283DC4u;
    SET_GPR_U32(ctx, 31, 0x283DCCu);
    ctx->pc = 0x283DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283DC4u;
    // 0x283dc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x283DC4u, 0x283DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283DCCu;
label_283dcc:
    // 0x283dcc: 0x10000048  b           . + 4 + (0x48 << 2)
label_283dd0:
    if (ctx->pc == 0x283DD0u) {
        ctx->pc = 0x283DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DCCu;
        // 0x283dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283DD4u;
        goto label_283dd4;
    }
    ctx->pc = 0x283DCCu;
    {
        const bool branch_taken_0x283dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DCCu;
        // 0x283dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283dcc) {
            ctx->pc = 0x283EF0u;
            goto label_283ef0;
        }
    }
    ctx->pc = 0x283DD4u;
label_283dd4:
    // 0x283dd4: 0x0  nop
    ctx->pc = 0x283dd4u;
    // NOP
label_283dd8:
    // 0x283dd8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x283dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_283ddc:
    // 0x283ddc: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x283ddcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_283de0:
    // 0x283de0: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x283de0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_283de4:
    // 0x283de4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x283de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_283de8:
    // 0x283de8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x283de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_283dec:
    // 0x283dec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x283decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_283df0:
    // 0x283df0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x283df0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_283df4:
    // 0x283df4: 0xc096b38  jal         func_25ACE0
label_283df8:
    if (ctx->pc == 0x283DF8u) {
        ctx->pc = 0x283DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DF4u;
        // 0x283df8: 0x268b0020  addiu       $t3, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283DFCu;
        goto label_283dfc;
    }
    ctx->pc = 0x283DF4u;
    SET_GPR_U32(ctx, 31, 0x283DFCu);
    ctx->pc = 0x283DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283DF4u;
    // 0x283df8: 0x268b0020  addiu       $t3, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x283DF4u, 0x283DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283DFCu;
label_283dfc:
    // 0x283dfc: 0x92620050  lbu         $v0, 0x50($s3)
    ctx->pc = 0x283dfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 80)));
label_283e00:
    // 0x283e00: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x283e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_283e04:
    // 0x283e04: 0xa2620050  sb          $v0, 0x50($s3)
    ctx->pc = 0x283e04u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
label_283e08:
    // 0x283e08: 0xa660005a  sh          $zero, 0x5A($s3)
    ctx->pc = 0x283e08u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 90), (uint16_t)GPR_U32(ctx, 0));
label_283e0c:
    // 0x283e0c: 0xa6600058  sh          $zero, 0x58($s3)
    ctx->pc = 0x283e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 88), (uint16_t)GPR_U32(ctx, 0));
label_283e10:
    // 0x283e10: 0xa6600056  sh          $zero, 0x56($s3)
    ctx->pc = 0x283e10u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
label_283e14:
    // 0x283e14: 0xa2600051  sb          $zero, 0x51($s3)
    ctx->pc = 0x283e14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 81), (uint8_t)GPR_U32(ctx, 0));
label_283e18:
    // 0x283e18: 0xae720070  sw          $s2, 0x70($s3)
    ctx->pc = 0x283e18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 18));
label_283e1c:
    // 0x283e1c: 0xae710074  sw          $s1, 0x74($s3)
    ctx->pc = 0x283e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 17));
label_283e20:
    // 0x283e20: 0xae700078  sw          $s0, 0x78($s3)
    ctx->pc = 0x283e20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 16));
label_283e24:
    // 0x283e24: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x283e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
label_283e28:
    // 0x283e28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_283e2c:
    // 0x283e2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_283e30:
    if (ctx->pc == 0x283E30u) {
        ctx->pc = 0x283E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E2Cu;
        // 0x283e30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E34u;
        goto label_283e34;
    }
    ctx->pc = 0x283E2Cu;
    {
        const bool branch_taken_0x283e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E2Cu;
        // 0x283e30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e2c) {
            ctx->pc = 0x283E3Cu;
            goto label_283e3c;
        }
    }
    ctx->pc = 0x283E34u;
label_283e34:
    // 0x283e34: 0x10000003  b           . + 4 + (0x3 << 2)
label_283e38:
    if (ctx->pc == 0x283E38u) {
        ctx->pc = 0x283E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E34u;
        // 0x283e38: 0xa6620084  sh          $v0, 0x84($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 132), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E3Cu;
        goto label_283e3c;
    }
    ctx->pc = 0x283E34u;
    {
        const bool branch_taken_0x283e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E34u;
        // 0x283e38: 0xa6620084  sh          $v0, 0x84($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 132), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e34) {
            ctx->pc = 0x283E44u;
            goto label_283e44;
        }
    }
    ctx->pc = 0x283E3Cu;
label_283e3c:
    // 0x283e3c: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x283e3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
label_283e40:
    // 0x283e40: 0xa6620084  sh          $v0, 0x84($s3)
    ctx->pc = 0x283e40u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 132), (uint16_t)GPR_U32(ctx, 2));
label_283e44:
    // 0x283e44: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x283e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_283e48:
    // 0x283e48: 0xa6620080  sh          $v0, 0x80($s3)
    ctx->pc = 0x283e48u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 128), (uint16_t)GPR_U32(ctx, 2));
label_283e4c:
    // 0x283e4c: 0xa6620082  sh          $v0, 0x82($s3)
    ctx->pc = 0x283e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 130), (uint16_t)GPR_U32(ctx, 2));
label_283e50:
    // 0x283e50: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x283e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_283e54:
    // 0x283e54: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x283e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_283e58:
    // 0x283e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_283e5c:
    // 0x283e5c: 0xc0741a4  jal         func_1D0690
label_283e60:
    if (ctx->pc == 0x283E60u) {
        ctx->pc = 0x283E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E5Cu;
        // 0x283e60: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E64u;
        goto label_283e64;
    }
    ctx->pc = 0x283E5Cu;
    SET_GPR_U32(ctx, 31, 0x283E64u);
    ctx->pc = 0x283E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283E5Cu;
    // 0x283e60: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x283E5Cu, 0x283E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E64u;
label_283e64:
    // 0x283e64: 0xae62007c  sw          $v0, 0x7C($s3)
    ctx->pc = 0x283e64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 2));
label_283e68:
    // 0x283e68: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x283e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_283e6c:
    // 0x283e6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_283e70:
    if (ctx->pc == 0x283E70u) {
        ctx->pc = 0x283E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E6Cu;
        // 0x283e70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E74u;
        goto label_283e74;
    }
    ctx->pc = 0x283E6Cu;
    {
        const bool branch_taken_0x283e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E6Cu;
        // 0x283e70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e6c) {
            ctx->pc = 0x283E90u;
            goto label_283e90;
        }
    }
    ctx->pc = 0x283E74u;
label_283e74:
    // 0x283e74: 0xc074268  jal         func_1D09A0
label_283e78:
    if (ctx->pc == 0x283E78u) {
        ctx->pc = 0x283E7Cu;
        goto label_283e7c;
    }
    ctx->pc = 0x283E74u;
    SET_GPR_U32(ctx, 31, 0x283E7Cu);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x283E74u, 0x283E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E7Cu;
label_283e7c:
    // 0x283e7c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x283e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_283e80:
    // 0x283e80: 0xc09d4d8  jal         func_275360
label_283e84:
    if (ctx->pc == 0x283E84u) {
        ctx->pc = 0x283E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E80u;
        // 0x283e84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E88u;
        goto label_283e88;
    }
    ctx->pc = 0x283E80u;
    SET_GPR_U32(ctx, 31, 0x283E88u);
    ctx->pc = 0x283E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283E80u;
    // 0x283e84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x283E80u, 0x283E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E88u;
label_283e88:
    // 0x283e88: 0x10000019  b           . + 4 + (0x19 << 2)
label_283e8c:
    if (ctx->pc == 0x283E8Cu) {
        ctx->pc = 0x283E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E88u;
        // 0x283e8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283E90u;
        goto label_283e90;
    }
    ctx->pc = 0x283E88u;
    {
        const bool branch_taken_0x283e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E88u;
        // 0x283e8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e88) {
            ctx->pc = 0x283EF0u;
            goto label_283ef0;
        }
    }
    ctx->pc = 0x283E90u;
label_283e90:
    // 0x283e90: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x283e90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_283e94:
    // 0x283e94: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x283e94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_283e98:
    // 0x283e98: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_283e9c:
    if (ctx->pc == 0x283E9Cu) {
        ctx->pc = 0x283E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E98u;
        // 0x283e9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283EA0u;
        goto label_283ea0;
    }
    ctx->pc = 0x283E98u;
    {
        const bool branch_taken_0x283e98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E98u;
        // 0x283e9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e98) {
            ctx->pc = 0x283EC8u;
            goto label_283ec8;
        }
    }
    ctx->pc = 0x283EA0u;
label_283ea0:
    // 0x283ea0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x283ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283ea4:
    // 0x283ea4: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x283ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_283ea8:
    // 0x283ea8: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x283ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_283eac:
    // 0x283eac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x283eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_283eb0:
    // 0x283eb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x283eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_283eb4:
    // 0x283eb4: 0xa4430020  sh          $v1, 0x20($v0)
    ctx->pc = 0x283eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 3));
label_283eb8:
    // 0x283eb8: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x283eb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_283ebc:
    // 0x283ebc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x283ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_283ec0:
    // 0x283ec0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_283ec4:
    if (ctx->pc == 0x283EC4u) {
        ctx->pc = 0x283EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283EC0u;
        // 0x283ec4: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283EC8u;
        goto label_283ec8;
    }
    ctx->pc = 0x283EC0u;
    {
        const bool branch_taken_0x283ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283EC0u;
        // 0x283ec4: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ec0) {
            ctx->pc = 0x283EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283ea8;
        }
    }
    ctx->pc = 0x283EC8u;
label_283ec8:
    // 0x283ec8: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x283ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_283ecc:
    // 0x283ecc: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x283eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_283ed0:
    // 0x283ed0: 0xc09d4d8  jal         func_275360
label_283ed4:
    if (ctx->pc == 0x283ED4u) {
        ctx->pc = 0x283ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283ED0u;
        // 0x283ed4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283ED8u;
        goto label_283ed8;
    }
    ctx->pc = 0x283ED0u;
    SET_GPR_U32(ctx, 31, 0x283ED8u);
    ctx->pc = 0x283ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283ED0u;
    // 0x283ed4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x283ED0u, 0x283ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283ED8u;
label_283ed8:
    // 0x283ed8: 0x10000005  b           . + 4 + (0x5 << 2)
label_283edc:
    if (ctx->pc == 0x283EDCu) {
        ctx->pc = 0x283EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283ED8u;
        // 0x283edc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283EE0u;
        goto label_283ee0;
    }
    ctx->pc = 0x283ED8u;
    {
        const bool branch_taken_0x283ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283ED8u;
        // 0x283edc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ed8) {
            ctx->pc = 0x283EF0u;
            goto label_283ef0;
        }
    }
    ctx->pc = 0x283EE0u;
label_283ee0:
    // 0x283ee0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x283ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_283ee4:
    // 0x283ee4: 0xc09d4d8  jal         func_275360
label_283ee8:
    if (ctx->pc == 0x283EE8u) {
        ctx->pc = 0x283EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283EE4u;
        // 0x283ee8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283EECu;
        goto label_283eec;
    }
    ctx->pc = 0x283EE4u;
    SET_GPR_U32(ctx, 31, 0x283EECu);
    ctx->pc = 0x283EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283EE4u;
    // 0x283ee8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x283EE4u, 0x283EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283EECu;
label_283eec:
    // 0x283eec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283ef0:
    // 0x283ef0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x283ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_283ef4:
    // 0x283ef4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x283ef4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_283ef8:
    // 0x283ef8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x283ef8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_283efc:
    // 0x283efc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x283efcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_283f00:
    // 0x283f00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x283f00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_283f04:
    // 0x283f04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x283f04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_283f08:
    // 0x283f08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x283f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_283f0c:
    // 0x283f0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x283f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_283f10:
    // 0x283f10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_283f14:
    // 0x283f14: 0x3e00008  jr          $ra
label_283f18:
    if (ctx->pc == 0x283F18u) {
        ctx->pc = 0x283F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F14u;
        // 0x283f18: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283F1Cu;
        goto label_fallthrough_0x283f14;
    }
    ctx->pc = 0x283F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F14u;
        // 0x283f18: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x283f14:
    ctx->pc = 0x283F1Cu;
}

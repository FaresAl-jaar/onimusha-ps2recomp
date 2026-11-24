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

// Function: sub_00346CD0
// Address: 0x346cd0 - 0x346e8c
void sub_00346CD0_0x346cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346CD0_0x346cd0");
#endif

    switch (ctx->pc) {
        case 0x346cd0u: goto label_346cd0;
        case 0x346cd4u: goto label_346cd4;
        case 0x346cd8u: goto label_346cd8;
        case 0x346cdcu: goto label_346cdc;
        case 0x346ce0u: goto label_346ce0;
        case 0x346ce4u: goto label_346ce4;
        case 0x346ce8u: goto label_346ce8;
        case 0x346cecu: goto label_346cec;
        case 0x346cf0u: goto label_346cf0;
        case 0x346cf4u: goto label_346cf4;
        case 0x346cf8u: goto label_346cf8;
        case 0x346cfcu: goto label_346cfc;
        case 0x346d00u: goto label_346d00;
        case 0x346d04u: goto label_346d04;
        case 0x346d08u: goto label_346d08;
        case 0x346d0cu: goto label_346d0c;
        case 0x346d10u: goto label_346d10;
        case 0x346d14u: goto label_346d14;
        case 0x346d18u: goto label_346d18;
        case 0x346d1cu: goto label_346d1c;
        case 0x346d20u: goto label_346d20;
        case 0x346d24u: goto label_346d24;
        case 0x346d28u: goto label_346d28;
        case 0x346d2cu: goto label_346d2c;
        case 0x346d30u: goto label_346d30;
        case 0x346d34u: goto label_346d34;
        case 0x346d38u: goto label_346d38;
        case 0x346d3cu: goto label_346d3c;
        case 0x346d40u: goto label_346d40;
        case 0x346d44u: goto label_346d44;
        case 0x346d48u: goto label_346d48;
        case 0x346d4cu: goto label_346d4c;
        case 0x346d50u: goto label_346d50;
        case 0x346d54u: goto label_346d54;
        case 0x346d58u: goto label_346d58;
        case 0x346d5cu: goto label_346d5c;
        case 0x346d60u: goto label_346d60;
        case 0x346d64u: goto label_346d64;
        case 0x346d68u: goto label_346d68;
        case 0x346d6cu: goto label_346d6c;
        case 0x346d70u: goto label_346d70;
        case 0x346d74u: goto label_346d74;
        case 0x346d78u: goto label_346d78;
        case 0x346d7cu: goto label_346d7c;
        case 0x346d80u: goto label_346d80;
        case 0x346d84u: goto label_346d84;
        case 0x346d88u: goto label_346d88;
        case 0x346d8cu: goto label_346d8c;
        case 0x346d90u: goto label_346d90;
        case 0x346d94u: goto label_346d94;
        case 0x346d98u: goto label_346d98;
        case 0x346d9cu: goto label_346d9c;
        case 0x346da0u: goto label_346da0;
        case 0x346da4u: goto label_346da4;
        case 0x346da8u: goto label_346da8;
        case 0x346dacu: goto label_346dac;
        case 0x346db0u: goto label_346db0;
        case 0x346db4u: goto label_346db4;
        case 0x346db8u: goto label_346db8;
        case 0x346dbcu: goto label_346dbc;
        case 0x346dc0u: goto label_346dc0;
        case 0x346dc4u: goto label_346dc4;
        case 0x346dc8u: goto label_346dc8;
        case 0x346dccu: goto label_346dcc;
        case 0x346dd0u: goto label_346dd0;
        case 0x346dd4u: goto label_346dd4;
        case 0x346dd8u: goto label_346dd8;
        case 0x346ddcu: goto label_346ddc;
        case 0x346de0u: goto label_346de0;
        case 0x346de4u: goto label_346de4;
        case 0x346de8u: goto label_346de8;
        case 0x346decu: goto label_346dec;
        case 0x346df0u: goto label_346df0;
        case 0x346df4u: goto label_346df4;
        case 0x346df8u: goto label_346df8;
        case 0x346dfcu: goto label_346dfc;
        case 0x346e00u: goto label_346e00;
        case 0x346e04u: goto label_346e04;
        case 0x346e08u: goto label_346e08;
        case 0x346e0cu: goto label_346e0c;
        case 0x346e10u: goto label_346e10;
        case 0x346e14u: goto label_346e14;
        case 0x346e18u: goto label_346e18;
        case 0x346e1cu: goto label_346e1c;
        case 0x346e20u: goto label_346e20;
        case 0x346e24u: goto label_346e24;
        case 0x346e28u: goto label_346e28;
        case 0x346e2cu: goto label_346e2c;
        case 0x346e30u: goto label_346e30;
        case 0x346e34u: goto label_346e34;
        case 0x346e38u: goto label_346e38;
        case 0x346e3cu: goto label_346e3c;
        case 0x346e40u: goto label_346e40;
        case 0x346e44u: goto label_346e44;
        case 0x346e48u: goto label_346e48;
        case 0x346e4cu: goto label_346e4c;
        case 0x346e50u: goto label_346e50;
        case 0x346e54u: goto label_346e54;
        case 0x346e58u: goto label_346e58;
        case 0x346e5cu: goto label_346e5c;
        case 0x346e60u: goto label_346e60;
        case 0x346e64u: goto label_346e64;
        case 0x346e68u: goto label_346e68;
        case 0x346e6cu: goto label_346e6c;
        case 0x346e70u: goto label_346e70;
        case 0x346e74u: goto label_346e74;
        case 0x346e78u: goto label_346e78;
        case 0x346e7cu: goto label_346e7c;
        case 0x346e80u: goto label_346e80;
        case 0x346e84u: goto label_346e84;
        case 0x346e88u: goto label_346e88;
        default: break;
    }

    ctx->pc = 0x346cd0u;

label_346cd0:
    // 0x346cd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x346cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_346cd4:
    // 0x346cd4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x346cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_346cd8:
    // 0x346cd8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x346cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_346cdc:
    // 0x346cdc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x346cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_346ce0:
    // 0x346ce0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x346ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_346ce4:
    // 0x346ce4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x346ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_346ce8:
    // 0x346ce8: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x346ce8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_346cec:
    // 0x346cec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x346cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_346cf0:
    // 0x346cf0: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x346cf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_346cf4:
    // 0x346cf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x346cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_346cf8:
    // 0x346cf8: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x346cf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_346cfc:
    // 0x346cfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x346cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_346d00:
    // 0x346d00: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x346d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_346d04:
    // 0x346d04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x346d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_346d08:
    // 0x346d08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x346d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_346d0c:
    // 0x346d0c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x346d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_346d10:
    // 0x346d10: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x346d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_346d14:
    // 0x346d14: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x346d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_346d18:
    // 0x346d18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x346d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_346d1c:
    // 0x346d1c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x346d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_346d20:
    // 0x346d20: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x346d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_346d24:
    // 0x346d24: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x346d24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_346d28:
    // 0x346d28: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x346d28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_346d2c:
    // 0x346d2c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x346d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_346d30:
    // 0x346d30: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x346d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_346d34:
    // 0x346d34: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x346d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_346d38:
    // 0x346d38: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x346d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_346d3c:
    // 0x346d3c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x346d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_346d40:
    // 0x346d40: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x346d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_346d44:
    // 0x346d44: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x346d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_346d48:
    // 0x346d48: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x346d48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_346d4c:
    // 0x346d4c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x346d4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_346d50:
    // 0x346d50: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x346d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_346d54:
    // 0x346d54: 0xc0a4408  jal         func_291020
label_346d58:
    if (ctx->pc == 0x346D58u) {
        ctx->pc = 0x346D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D54u;
        // 0x346d58: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x346D5Cu;
        goto label_346d5c;
    }
    ctx->pc = 0x346D54u;
    SET_GPR_U32(ctx, 31, 0x346D5Cu);
    ctx->pc = 0x346D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D54u;
    // 0x346d58: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x346D54u, 0x346D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D5Cu;
label_346d5c:
    // 0x346d5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x346d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_346d60:
    // 0x346d60: 0xc0a43fc  jal         func_290FF0
label_346d64:
    if (ctx->pc == 0x346D64u) {
        ctx->pc = 0x346D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D60u;
        // 0x346d64: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x346D68u;
        goto label_346d68;
    }
    ctx->pc = 0x346D60u;
    SET_GPR_U32(ctx, 31, 0x346D68u);
    ctx->pc = 0x346D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D60u;
    // 0x346d64: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x346D60u, 0x346D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D68u;
label_346d68:
    // 0x346d68: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x346d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_346d6c:
    // 0x346d6c: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x346d6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_346d70:
    // 0x346d70: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x346d70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_346d74:
    // 0x346d74: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x346d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_346d78:
    // 0x346d78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x346d78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346d7c:
    // 0x346d7c: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x346d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_346d80:
    // 0x346d80: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x346d80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_346d84:
    // 0x346d84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x346d84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346d88:
    // 0x346d88: 0xc0510e0  jal         func_144380
label_346d8c:
    if (ctx->pc == 0x346D8Cu) {
        ctx->pc = 0x346D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D88u;
        // 0x346d8c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346D90u;
        goto label_346d90;
    }
    ctx->pc = 0x346D88u;
    SET_GPR_U32(ctx, 31, 0x346D90u);
    ctx->pc = 0x346D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D88u;
    // 0x346d8c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x346D88u, 0x346D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D90u;
label_346d90:
    // 0x346d90: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x346d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_346d94:
    // 0x346d94: 0x16a3000a  bne         $s5, $v1, . + 4 + (0xA << 2)
label_346d98:
    if (ctx->pc == 0x346D98u) {
        ctx->pc = 0x346D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D94u;
        // 0x346d98: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346D9Cu;
        goto label_346d9c;
    }
    ctx->pc = 0x346D94u;
    {
        const bool branch_taken_0x346d94 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x346D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D94u;
        // 0x346d98: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d94) {
            ctx->pc = 0x346DC0u;
            goto label_346dc0;
        }
    }
    ctx->pc = 0x346D9Cu;
label_346d9c:
    // 0x346d9c: 0x97a500b8  lhu         $a1, 0xB8($sp)
    ctx->pc = 0x346d9cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 184)));
label_346da0:
    // 0x346da0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x346da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_346da4:
    // 0x346da4: 0xc0ce208  jal         func_338820
label_346da8:
    if (ctx->pc == 0x346DA8u) {
        ctx->pc = 0x346DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346DA4u;
        // 0x346da8: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346DACu;
        goto label_346dac;
    }
    ctx->pc = 0x346DA4u;
    SET_GPR_U32(ctx, 31, 0x346DACu);
    ctx->pc = 0x346DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346DA4u;
    // 0x346da8: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338820u, 0x346DA4u, 0x346DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DACu;
label_346dac:
    // 0x346dac: 0x97a400b8  lhu         $a0, 0xB8($sp)
    ctx->pc = 0x346dacu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 184)));
label_346db0:
    // 0x346db0: 0xc0dad88  jal         func_36B620
label_346db4:
    if (ctx->pc == 0x346DB4u) {
        ctx->pc = 0x346DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346DB0u;
        // 0x346db4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x346DB8u;
        goto label_346db8;
    }
    ctx->pc = 0x346DB0u;
    SET_GPR_U32(ctx, 31, 0x346DB8u);
    ctx->pc = 0x346DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346DB0u;
    // 0x346db4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B620u, 0x346DB0u, 0x346DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DB8u;
label_346db8:
    // 0x346db8: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x346db8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
label_346dbc:
    // 0x346dbc: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x346dbcu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
label_346dc0:
    // 0x346dc0: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
label_346dc4:
    if (ctx->pc == 0x346DC4u) {
        ctx->pc = 0x346DC8u;
        goto label_346dc8;
    }
    ctx->pc = 0x346DC0u;
    {
        const bool branch_taken_0x346dc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x346dc0) {
            ctx->pc = 0x346E68u;
            goto label_346e68;
        }
    }
    ctx->pc = 0x346DC8u;
label_346dc8:
    // 0x346dc8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x346dc8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_346dcc:
    // 0x346dcc: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x346dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_346dd0:
    // 0x346dd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x346dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_346dd4:
    // 0x346dd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x346dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_346dd8:
    // 0x346dd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_346ddc:
    // 0x346ddc: 0x2405021c  addiu       $a1, $zero, 0x21C
    ctx->pc = 0x346ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
label_346de0:
    // 0x346de0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x346de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_346de4:
    // 0x346de4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x346de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_346de8:
    // 0x346de8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x346de8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_346dec:
    // 0x346dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_346df0:
    // 0x346df0: 0x0  nop
    ctx->pc = 0x346df0u;
    // NOP
label_346df4:
    // 0x346df4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x346df4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_346df8:
    // 0x346df8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x346df8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_346dfc:
    // 0x346dfc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x346dfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_346e00:
    // 0x346e00: 0x0  nop
    ctx->pc = 0x346e00u;
    // NOP
label_346e04:
    // 0x346e04: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x346e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_346e08:
    // 0x346e08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x346e08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_346e0c:
    // 0x346e0c: 0xc0d0484  jal         func_341210
label_346e10:
    if (ctx->pc == 0x346E10u) {
        ctx->pc = 0x346E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E0Cu;
        // 0x346e10: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x346E14u;
        goto label_346e14;
    }
    ctx->pc = 0x346E0Cu;
    SET_GPR_U32(ctx, 31, 0x346E14u);
    ctx->pc = 0x346E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E0Cu;
    // 0x346e10: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x346E0Cu, 0x346E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E14u;
label_346e14:
    // 0x346e14: 0x8e5904d4  lw          $t9, 0x4D4($s2)
    ctx->pc = 0x346e14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1236)));
label_346e18:
    // 0x346e18: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x346e18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_346e1c:
    // 0x346e1c: 0x320f809  jalr        $t9
label_346e20:
    if (ctx->pc == 0x346E20u) {
        ctx->pc = 0x346E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E1Cu;
        // 0x346e20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346E24u;
        goto label_346e24;
    }
    ctx->pc = 0x346E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x346E24u);
        ctx->pc = 0x346E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E1Cu;
        // 0x346e20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346E1Cu, 0x346E24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x346E24u;
label_346e24:
    // 0x346e24: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x346e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_346e28:
    // 0x346e28: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x346e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_346e2c:
    // 0x346e2c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x346e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_346e30:
    // 0x346e30: 0xc0d0ae0  jal         func_342B80
label_346e34:
    if (ctx->pc == 0x346E34u) {
        ctx->pc = 0x346E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E30u;
        // 0x346e34: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346E38u;
        goto label_346e38;
    }
    ctx->pc = 0x346E30u;
    SET_GPR_U32(ctx, 31, 0x346E38u);
    ctx->pc = 0x346E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E30u;
    // 0x346e34: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B80u, 0x346E30u, 0x346E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E38u;
label_346e38:
    // 0x346e38: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x346e38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_346e3c:
    // 0x346e3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x346e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_346e40:
    // 0x346e40: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x346e40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_346e44:
    // 0x346e44: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x346e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_346e48:
    // 0x346e48: 0xc0e307c  jal         func_38C1F0
label_346e4c:
    if (ctx->pc == 0x346E4Cu) {
        ctx->pc = 0x346E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E48u;
        // 0x346e4c: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346E50u;
        goto label_346e50;
    }
    ctx->pc = 0x346E48u;
    SET_GPR_U32(ctx, 31, 0x346E50u);
    ctx->pc = 0x346E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E48u;
    // 0x346e4c: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C1F0u, 0x346E48u, 0x346E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E50u;
label_346e50:
    // 0x346e50: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x346e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_346e54:
    // 0x346e54: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x346e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_346e58:
    // 0x346e58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x346e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_346e5c:
    // 0x346e5c: 0xc0e3668  jal         func_38D9A0
label_346e60:
    if (ctx->pc == 0x346E60u) {
        ctx->pc = 0x346E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E5Cu;
        // 0x346e60: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346E64u;
        goto label_346e64;
    }
    ctx->pc = 0x346E5Cu;
    SET_GPR_U32(ctx, 31, 0x346E64u);
    ctx->pc = 0x346E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E5Cu;
    // 0x346e60: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D9A0u, 0x346E5Cu, 0x346E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E64u;
label_346e64:
    // 0x346e64: 0x0  nop
    ctx->pc = 0x346e64u;
    // NOP
label_346e68:
    // 0x346e68: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x346e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_346e6c:
    // 0x346e6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x346e6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_346e70:
    // 0x346e70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x346e70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_346e74:
    // 0x346e74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x346e74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_346e78:
    // 0x346e78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x346e78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_346e7c:
    // 0x346e7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x346e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_346e80:
    // 0x346e80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x346e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_346e84:
    // 0x346e84: 0x3e00008  jr          $ra
label_346e88:
    if (ctx->pc == 0x346E88u) {
        ctx->pc = 0x346E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E84u;
        // 0x346e88: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346E8Cu;
        goto label_fallthrough_0x346e84;
    }
    ctx->pc = 0x346E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E84u;
        // 0x346e88: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x346e84:
    ctx->pc = 0x346E8Cu;
}

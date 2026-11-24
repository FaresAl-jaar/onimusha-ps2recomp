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

// Function: sub_00253C80
// Address: 0x253c80 - 0x253eb0
void sub_00253C80_0x253c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253C80_0x253c80");
#endif

    switch (ctx->pc) {
        case 0x253cc8u: goto label_253cc8;
        case 0x253cd8u: goto label_253cd8;
        case 0x253db4u: goto label_253db4;
        case 0x253e08u: goto label_253e08;
        case 0x253e48u: goto label_253e48;
        case 0x253e5cu: goto label_253e5c;
        case 0x253e6cu: goto label_253e6c;
        case 0x253e80u: goto label_253e80;
        case 0x253e94u: goto label_253e94;
        case 0x253ea0u: goto label_253ea0;
        default: break;
    }

    ctx->pc = 0x253c80u;

    // 0x253c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253c84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x253c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x253c8c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x253c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x253c90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x253c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x253c94: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x253c94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x253c98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c9c: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x253c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x253ca0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x253ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x253ca4: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x253ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x253ca8: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x253ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x253cac: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x253cacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x253cb0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x253cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x253cb4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x253cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x253cb8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x253cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x253cbc: 0xa0800014  sb          $zero, 0x14($a0)
    ctx->pc = 0x253cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x253cc0: 0xc049590  jal         func_125640
    ctx->pc = 0x253CC0u;
    SET_GPR_U32(ctx, 31, 0x253CC8u);
    ctx->pc = 0x253CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253CC0u;
    // 0x253cc4: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x253CC0u, 0x253CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253CC8u;
label_253cc8:
    // 0x253cc8: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x253cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x253ccc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253cd0: 0xc049590  jal         func_125640
    ctx->pc = 0x253CD0u;
    SET_GPR_U32(ctx, 31, 0x253CD8u);
    ctx->pc = 0x253CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253CD0u;
    // 0x253cd4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x253CD0u, 0x253CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253CD8u;
label_253cd8:
    // 0x253cd8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x253cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x253cdc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x253cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x253ce0: 0xa6000038  sh          $zero, 0x38($s0)
    ctx->pc = 0x253ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x253ce4: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x253ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x253ce8: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x253ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x253cec: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x253cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x253cf0: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x253cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x253cf4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x253cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x253cf8: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x253cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x253cfc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x253cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x253d00: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x253d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x253d04: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x253d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x253d08: 0xa200004c  sb          $zero, 0x4C($s0)
    ctx->pc = 0x253d08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x253d0c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x253d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x253d10: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x253d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x253d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x253d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253d18: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253d1c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x253d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x253d20: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253d24: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x253d24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x253d28: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253d2c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x253d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x253d30: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253d34: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x253d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x253d38: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253d3c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x253d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x253d40: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253d44: 0xa4400014  sh          $zero, 0x14($v0)
    ctx->pc = 0x253d44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x253d48: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253d4c: 0xa4400016  sh          $zero, 0x16($v0)
    ctx->pc = 0x253d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x253d50: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253d54: 0xa4400018  sh          $zero, 0x18($v0)
    ctx->pc = 0x253d54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x253d58: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253d5c: 0xa440001a  sh          $zero, 0x1A($v0)
    ctx->pc = 0x253d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x253d60: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253d64: 0xa440001c  sh          $zero, 0x1C($v0)
    ctx->pc = 0x253d64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x253d68: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253d6c: 0xa440001e  sh          $zero, 0x1E($v0)
    ctx->pc = 0x253d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x253d70: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253d74: 0xa4400020  sh          $zero, 0x20($v0)
    ctx->pc = 0x253d74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x253d78: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253d7c: 0xa4460022  sh          $a2, 0x22($v0)
    ctx->pc = 0x253d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 6));
    // 0x253d80: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253d84: 0xac450024  sw          $a1, 0x24($v0)
    ctx->pc = 0x253d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 5));
    // 0x253d88: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253d8c: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x253d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x253d90: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253d94: 0xa440002c  sh          $zero, 0x2C($v0)
    ctx->pc = 0x253d94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x253d98: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253d9c: 0xa043002e  sb          $v1, 0x2E($v0)
    ctx->pc = 0x253d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 3));
    // 0x253da0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253da4: 0xa040002f  sb          $zero, 0x2F($v0)
    ctx->pc = 0x253da4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 47), (uint8_t)GPR_U32(ctx, 0));
    // 0x253da8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253dac: 0xc0b787c  jal         func_2DE1F0
    ctx->pc = 0x253DACu;
    SET_GPR_U32(ctx, 31, 0x253DB4u);
    ctx->pc = 0x253DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253DACu;
    // 0x253db0: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE1F0u, 0x253DACu, 0x253DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253DB4u;
label_253db4:
    // 0x253db4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253dbc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x253dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x253dc0: 0xa040003c  sb          $zero, 0x3C($v0)
    ctx->pc = 0x253dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x253dc4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253dc8: 0xa040003d  sb          $zero, 0x3D($v0)
    ctx->pc = 0x253dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 61), (uint8_t)GPR_U32(ctx, 0));
    // 0x253dcc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253dd0: 0xa440003e  sh          $zero, 0x3E($v0)
    ctx->pc = 0x253dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 62), (uint16_t)GPR_U32(ctx, 0));
    // 0x253dd4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253dd8: 0xa4400040  sh          $zero, 0x40($v0)
    ctx->pc = 0x253dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x253ddc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253de0: 0xa4400042  sh          $zero, 0x42($v0)
    ctx->pc = 0x253de0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x253de4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253de8: 0xa4400044  sh          $zero, 0x44($v0)
    ctx->pc = 0x253de8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x253dec: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253df0: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x253df0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x253df4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253df8: 0xa4400048  sh          $zero, 0x48($v0)
    ctx->pc = 0x253df8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x253dfc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253e00: 0xc049590  jal         func_125640
    ctx->pc = 0x253E00u;
    SET_GPR_U32(ctx, 31, 0x253E08u);
    ctx->pc = 0x253E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E00u;
    // 0x253e04: 0x2444004a  addiu       $a0, $v0, 0x4A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 74));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x253E00u, 0x253E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E08u;
label_253e08:
    // 0x253e08: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253e0c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x253e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x253e10: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x253e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x253e14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253e18: 0xa040008a  sb          $zero, 0x8A($v0)
    ctx->pc = 0x253e18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 138), (uint8_t)GPR_U32(ctx, 0));
    // 0x253e1c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253e20: 0xa440009c  sh          $zero, 0x9C($v0)
    ctx->pc = 0x253e20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 156), (uint16_t)GPR_U32(ctx, 0));
    // 0x253e24: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253e28: 0xa045009e  sb          $a1, 0x9E($v0)
    ctx->pc = 0x253e28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 158), (uint8_t)GPR_U32(ctx, 5));
    // 0x253e2c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253e30: 0xa043009f  sb          $v1, 0x9F($v0)
    ctx->pc = 0x253e30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 159), (uint8_t)GPR_U32(ctx, 3));
    // 0x253e34: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253e38: 0xa04000a0  sb          $zero, 0xA0($v0)
    ctx->pc = 0x253e38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 0));
    // 0x253e3c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x253e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x253e40: 0xc09547c  jal         func_2551F0
    ctx->pc = 0x253E40u;
    SET_GPR_U32(ctx, 31, 0x253E48u);
    ctx->pc = 0x253E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E40u;
    // 0x253e44: 0xa04000a1  sb          $zero, 0xA1($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 161), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2551F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2551F0u, 0x253E40u, 0x253E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E48u;
label_253e48:
    // 0x253e48: 0x26041140  addiu       $a0, $s0, 0x1140
    ctx->pc = 0x253e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4416));
    // 0x253e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253e50: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x253e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x253e54: 0xc049590  jal         func_125640
    ctx->pc = 0x253E54u;
    SET_GPR_U32(ctx, 31, 0x253E5Cu);
    ctx->pc = 0x253E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E54u;
    // 0x253e58: 0xae00110c  sw          $zero, 0x110C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4364), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x253E54u, 0x253E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E5Cu;
label_253e5c:
    // 0x253e5c: 0x26043140  addiu       $a0, $s0, 0x3140
    ctx->pc = 0x253e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12608));
    // 0x253e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253e64: 0xc049590  jal         func_125640
    ctx->pc = 0x253E64u;
    SET_GPR_U32(ctx, 31, 0x253E6Cu);
    ctx->pc = 0x253E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E64u;
    // 0x253e68: 0x3406a000  ori         $a2, $zero, 0xA000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x253E64u, 0x253E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E6Cu;
label_253e6c:
    // 0x253e6c: 0x3401d140  ori         $at, $zero, 0xD140
    ctx->pc = 0x253e6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53568);
    // 0x253e70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253e74: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x253e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x253e78: 0xc049590  jal         func_125640
    ctx->pc = 0x253E78u;
    SET_GPR_U32(ctx, 31, 0x253E80u);
    ctx->pc = 0x253E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E78u;
    // 0x253e7c: 0x24060500  addiu       $a2, $zero, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x253E78u, 0x253E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E80u;
label_253e80:
    // 0x253e80: 0x3401d640  ori         $at, $zero, 0xD640
    ctx->pc = 0x253e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54848);
    // 0x253e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253e88: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x253e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x253e8c: 0xc049590  jal         func_125640
    ctx->pc = 0x253E8Cu;
    SET_GPR_U32(ctx, 31, 0x253E94u);
    ctx->pc = 0x253E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E8Cu;
    // 0x253e90: 0x24060500  addiu       $a2, $zero, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x253E8Cu, 0x253E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E94u;
label_253e94:
    // 0x253e94: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x253e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x253e98: 0xc0ca5f0  jal         func_3297C0
    ctx->pc = 0x253E98u;
    SET_GPR_U32(ctx, 31, 0x253EA0u);
    ctx->pc = 0x253E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E98u;
    // 0x253e9c: 0x24840e70  addiu       $a0, $a0, 0xE70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3297C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3297C0u, 0x253E98u, 0x253EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253EA0u;
label_253ea0:
    // 0x253ea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x253ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253ea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x253EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EA8u;
        // 0x253eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253EB0u;
}

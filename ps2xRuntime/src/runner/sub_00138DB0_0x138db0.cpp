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

// Function: sub_00138DB0
// Address: 0x138db0 - 0x139aa0
void sub_00138DB0_0x138db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138DB0_0x138db0");
#endif

    switch (ctx->pc) {
        case 0x138e28u: goto label_138e28;
        case 0x138e38u: goto label_138e38;
        case 0x138e48u: goto label_138e48;
        case 0x138e58u: goto label_138e58;
        case 0x138e68u: goto label_138e68;
        case 0x138e70u: goto label_138e70;
        case 0x138f10u: goto label_138f10;
        case 0x138fd8u: goto label_138fd8;
        case 0x138ff8u: goto label_138ff8;
        case 0x139050u: goto label_139050;
        case 0x1390a0u: goto label_1390a0;
        case 0x1391ecu: goto label_1391ec;
        case 0x139214u: goto label_139214;
        case 0x13923cu: goto label_13923c;
        case 0x139268u: goto label_139268;
        case 0x139280u: goto label_139280;
        case 0x1392d8u: goto label_1392d8;
        case 0x139330u: goto label_139330;
        case 0x139388u: goto label_139388;
        case 0x1393e0u: goto label_1393e0;
        case 0x139438u: goto label_139438;
        case 0x139448u: goto label_139448;
        case 0x139458u: goto label_139458;
        case 0x139468u: goto label_139468;
        case 0x139478u: goto label_139478;
        case 0x1394a8u: goto label_1394a8;
        case 0x1396a0u: goto label_1396a0;
        case 0x1396bcu: goto label_1396bc;
        case 0x1396e4u: goto label_1396e4;
        case 0x1396f0u: goto label_1396f0;
        case 0x139760u: goto label_139760;
        case 0x1397a0u: goto label_1397a0;
        case 0x1397e8u: goto label_1397e8;
        case 0x139854u: goto label_139854;
        case 0x13989cu: goto label_13989c;
        case 0x1398e0u: goto label_1398e0;
        case 0x1399d8u: goto label_1399d8;
        case 0x139a1cu: goto label_139a1c;
        default: break;
    }

    ctx->pc = 0x138db0u;

    // 0x138db0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x138db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x138db4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x138db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x138db8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x138db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x138dbc: 0x3002ffff  andi        $v0, $zero, 0xFFFF
    ctx->pc = 0x138dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x138dc0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x138dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x138dc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138dc8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x138dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x138dcc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x138dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x138dd0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x138dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x138dd4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x138dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x138dd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x138dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x138ddc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x138ddcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138de0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x138de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x138de4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x138de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x138de8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x138de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x138dec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x138decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x138df0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x138df0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x138df4: 0xa4800850  sh          $zero, 0x850($a0)
    ctx->pc = 0x138df4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2128), (uint16_t)GPR_U32(ctx, 0));
    // 0x138df8: 0xac820858  sw          $v0, 0x858($a0)
    ctx->pc = 0x138df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2136), GPR_U32(ctx, 2));
    // 0x138dfc: 0xac820854  sw          $v0, 0x854($a0)
    ctx->pc = 0x138dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2132), GPR_U32(ctx, 2));
    // 0x138e00: 0xac820848  sw          $v0, 0x848($a0)
    ctx->pc = 0x138e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2120), GPR_U32(ctx, 2));
    // 0x138e04: 0xac820844  sw          $v0, 0x844($a0)
    ctx->pc = 0x138e04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2116), GPR_U32(ctx, 2));
    // 0x138e08: 0xac820840  sw          $v0, 0x840($a0)
    ctx->pc = 0x138e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2112), GPR_U32(ctx, 2));
    // 0x138e0c: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x138e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x138e10: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x138e10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x138e14: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x138e14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x138e18: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x138e18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x138e1c: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x138e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x138e20: 0xc049590  jal         func_125640
    ctx->pc = 0x138E20u;
    SET_GPR_U32(ctx, 31, 0x138E28u);
    ctx->pc = 0x138E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E20u;
    // 0x138e24: 0x26a4085c  addiu       $a0, $s5, 0x85C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x138E20u, 0x138E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E28u;
label_138e28:
    // 0x138e28: 0x26a408dc  addiu       $a0, $s5, 0x8DC
    ctx->pc = 0x138e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2268));
    // 0x138e2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e30: 0xc049590  jal         func_125640
    ctx->pc = 0x138E30u;
    SET_GPR_U32(ctx, 31, 0x138E38u);
    ctx->pc = 0x138E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E30u;
    // 0x138e34: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x138E30u, 0x138E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E38u;
label_138e38:
    // 0x138e38: 0x26a4095c  addiu       $a0, $s5, 0x95C
    ctx->pc = 0x138e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2396));
    // 0x138e3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e40: 0xc049590  jal         func_125640
    ctx->pc = 0x138E40u;
    SET_GPR_U32(ctx, 31, 0x138E48u);
    ctx->pc = 0x138E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E40u;
    // 0x138e44: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x138E40u, 0x138E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E48u;
label_138e48:
    // 0x138e48: 0x26a409dc  addiu       $a0, $s5, 0x9DC
    ctx->pc = 0x138e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2524));
    // 0x138e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e50: 0xc049590  jal         func_125640
    ctx->pc = 0x138E50u;
    SET_GPR_U32(ctx, 31, 0x138E58u);
    ctx->pc = 0x138E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E50u;
    // 0x138e54: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x138E50u, 0x138E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E58u;
label_138e58:
    // 0x138e58: 0x26a40a5c  addiu       $a0, $s5, 0xA5C
    ctx->pc = 0x138e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2652));
    // 0x138e5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e60: 0xc049590  jal         func_125640
    ctx->pc = 0x138E60u;
    SET_GPR_U32(ctx, 31, 0x138E68u);
    ctx->pc = 0x138E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E60u;
    // 0x138e64: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x138E60u, 0x138E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E68u;
label_138e68:
    // 0x138e68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x138e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e6c: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x138e6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_138e70:
    // 0x138e70: 0xac600ad0  sw          $zero, 0xAD0($v1)
    ctx->pc = 0x138e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2768), GPR_U32(ctx, 0));
    // 0x138e74: 0xac600bd0  sw          $zero, 0xBD0($v1)
    ctx->pc = 0x138e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3024), GPR_U32(ctx, 0));
    // 0x138e78: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x138e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x138e7c: 0xac600cd0  sw          $zero, 0xCD0($v1)
    ctx->pc = 0x138e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3280), GPR_U32(ctx, 0));
    // 0x138e80: 0x2c820040  sltiu       $v0, $a0, 0x40
    ctx->pc = 0x138e80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x138e84: 0xac600dd0  sw          $zero, 0xDD0($v1)
    ctx->pc = 0x138e84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3536), GPR_U32(ctx, 0));
    // 0x138e88: 0xac600ad4  sw          $zero, 0xAD4($v1)
    ctx->pc = 0x138e88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2772), GPR_U32(ctx, 0));
    // 0x138e8c: 0xac600bd4  sw          $zero, 0xBD4($v1)
    ctx->pc = 0x138e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3028), GPR_U32(ctx, 0));
    // 0x138e90: 0xac600cd4  sw          $zero, 0xCD4($v1)
    ctx->pc = 0x138e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3284), GPR_U32(ctx, 0));
    // 0x138e94: 0xac600dd4  sw          $zero, 0xDD4($v1)
    ctx->pc = 0x138e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3540), GPR_U32(ctx, 0));
    // 0x138e98: 0xac600ad8  sw          $zero, 0xAD8($v1)
    ctx->pc = 0x138e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2776), GPR_U32(ctx, 0));
    // 0x138e9c: 0xac600bd8  sw          $zero, 0xBD8($v1)
    ctx->pc = 0x138e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3032), GPR_U32(ctx, 0));
    // 0x138ea0: 0xac600cd8  sw          $zero, 0xCD8($v1)
    ctx->pc = 0x138ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3288), GPR_U32(ctx, 0));
    // 0x138ea4: 0xac600dd8  sw          $zero, 0xDD8($v1)
    ctx->pc = 0x138ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3544), GPR_U32(ctx, 0));
    // 0x138ea8: 0xac600adc  sw          $zero, 0xADC($v1)
    ctx->pc = 0x138ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2780), GPR_U32(ctx, 0));
    // 0x138eac: 0xac600bdc  sw          $zero, 0xBDC($v1)
    ctx->pc = 0x138eacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3036), GPR_U32(ctx, 0));
    // 0x138eb0: 0xac600cdc  sw          $zero, 0xCDC($v1)
    ctx->pc = 0x138eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3292), GPR_U32(ctx, 0));
    // 0x138eb4: 0xac600ddc  sw          $zero, 0xDDC($v1)
    ctx->pc = 0x138eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3548), GPR_U32(ctx, 0));
    // 0x138eb8: 0xac600ae0  sw          $zero, 0xAE0($v1)
    ctx->pc = 0x138eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2784), GPR_U32(ctx, 0));
    // 0x138ebc: 0xac600be0  sw          $zero, 0xBE0($v1)
    ctx->pc = 0x138ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3040), GPR_U32(ctx, 0));
    // 0x138ec0: 0xac600ce0  sw          $zero, 0xCE0($v1)
    ctx->pc = 0x138ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3296), GPR_U32(ctx, 0));
    // 0x138ec4: 0xac600de0  sw          $zero, 0xDE0($v1)
    ctx->pc = 0x138ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3552), GPR_U32(ctx, 0));
    // 0x138ec8: 0xac600ae4  sw          $zero, 0xAE4($v1)
    ctx->pc = 0x138ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2788), GPR_U32(ctx, 0));
    // 0x138ecc: 0xac600be4  sw          $zero, 0xBE4($v1)
    ctx->pc = 0x138eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3044), GPR_U32(ctx, 0));
    // 0x138ed0: 0xac600ce4  sw          $zero, 0xCE4($v1)
    ctx->pc = 0x138ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3300), GPR_U32(ctx, 0));
    // 0x138ed4: 0xac600de4  sw          $zero, 0xDE4($v1)
    ctx->pc = 0x138ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3556), GPR_U32(ctx, 0));
    // 0x138ed8: 0xac600ae8  sw          $zero, 0xAE8($v1)
    ctx->pc = 0x138ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2792), GPR_U32(ctx, 0));
    // 0x138edc: 0xac600be8  sw          $zero, 0xBE8($v1)
    ctx->pc = 0x138edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3048), GPR_U32(ctx, 0));
    // 0x138ee0: 0xac600ce8  sw          $zero, 0xCE8($v1)
    ctx->pc = 0x138ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3304), GPR_U32(ctx, 0));
    // 0x138ee4: 0xac600de8  sw          $zero, 0xDE8($v1)
    ctx->pc = 0x138ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3560), GPR_U32(ctx, 0));
    // 0x138ee8: 0xac600aec  sw          $zero, 0xAEC($v1)
    ctx->pc = 0x138ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2796), GPR_U32(ctx, 0));
    // 0x138eec: 0xac600bec  sw          $zero, 0xBEC($v1)
    ctx->pc = 0x138eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3052), GPR_U32(ctx, 0));
    // 0x138ef0: 0xac600cec  sw          $zero, 0xCEC($v1)
    ctx->pc = 0x138ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3308), GPR_U32(ctx, 0));
    // 0x138ef4: 0xac600dec  sw          $zero, 0xDEC($v1)
    ctx->pc = 0x138ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3564), GPR_U32(ctx, 0));
    // 0x138ef8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x138EF8u;
    {
        const bool branch_taken_0x138ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138EF8u;
        // 0x138efc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ef8) {
            ctx->pc = 0x138E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138e70;
        }
    }
    ctx->pc = 0x138F00u;
    // 0x138f00: 0x26a400c0  addiu       $a0, $s5, 0xC0
    ctx->pc = 0x138f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x138f04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f08: 0xc049590  jal         func_125640
    ctx->pc = 0x138F08u;
    SET_GPR_U32(ctx, 31, 0x138F10u);
    ctx->pc = 0x138F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F08u;
    // 0x138f0c: 0x24060780  addiu       $a2, $zero, 0x780 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x138F08u, 0x138F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F10u;
label_138f10:
    // 0x138f10: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x138f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x138f14: 0x8c222650  lw          $v0, 0x2650($at)
    ctx->pc = 0x138f14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7E2650u));
    // 0x138f18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138F18u;
    {
        const bool branch_taken_0x138f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F18u;
        // 0x138f1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f18) {
            ctx->pc = 0x138F28u;
            goto label_138f28;
        }
    }
    ctx->pc = 0x138F20u;
    // 0x138f20: 0x100002d3  b           . + 4 + (0x2D3 << 2)
    ctx->pc = 0x138F20u;
    {
        const bool branch_taken_0x138f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138f20) {
            ctx->pc = 0x139A70u;
            goto label_139a70;
        }
    }
    ctx->pc = 0x138F28u;
label_138f28:
    // 0x138f28: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x138f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x138f2c: 0x94226ad2  lhu         $v0, 0x6AD2($at)
    ctx->pc = 0x138f2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7E6AD2u));
    // 0x138f30: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x138F30u;
    {
        const bool branch_taken_0x138f30 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x138F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F30u;
        // 0x138f34: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f30) {
            ctx->pc = 0x138F44u;
            goto label_138f44;
        }
    }
    ctx->pc = 0x138F38u;
    // 0x138f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x138f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138f3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x138F3Cu;
    {
        const bool branch_taken_0x138f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F3Cu;
        // 0x138f40: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f3c) {
            ctx->pc = 0x138F5Cu;
            goto label_138f5c;
        }
    }
    ctx->pc = 0x138F44u;
label_138f44:
    // 0x138f44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x138f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x138f48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x138f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x138f4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138f4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138f50: 0x0  nop
    ctx->pc = 0x138f50u;
    // NOP
    // 0x138f54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x138f54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x138f58: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x138f58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_138f5c:
    // 0x138f5c: 0xe6a00f30  swc1        $f0, 0xF30($s5)
    ctx->pc = 0x138f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3888), bits); }
    // 0x138f60: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x138f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x138f64: 0x8c242650  lw          $a0, 0x2650($at)
    ctx->pc = 0x138f64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7E2650u));
    // 0x138f68: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x138f68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x138f6c: 0xa6a20004  sh          $v0, 0x4($s5)
    ctx->pc = 0x138f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x138f70: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x138f70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x138f74: 0xa6a20006  sh          $v0, 0x6($s5)
    ctx->pc = 0x138f74u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x138f78: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x138f78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x138f7c: 0xa6a20008  sh          $v0, 0x8($s5)
    ctx->pc = 0x138f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x138f80: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x138f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x138f84: 0xaea4001c  sw          $a0, 0x1C($s5)
    ctx->pc = 0x138f84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 4));
    // 0x138f88: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x138f88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x138f8c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x138f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x138f90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138f94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x138f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x138f98: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x138f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x138f9c: 0xaea40020  sw          $a0, 0x20($s5)
    ctx->pc = 0x138f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 4));
    // 0x138fa0: 0x96a20006  lhu         $v0, 0x6($s5)
    ctx->pc = 0x138fa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x138fa4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x138fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x138fa8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x138fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x138fac: 0xaea40024  sw          $a0, 0x24($s5)
    ctx->pc = 0x138facu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 4));
    // 0x138fb0: 0x96a20006  lhu         $v0, 0x6($s5)
    ctx->pc = 0x138fb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x138fb4: 0x8ea70020  lw          $a3, 0x20($s5)
    ctx->pc = 0x138fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x138fb8: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x138fb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x138fbc: 0x10200082  beqz        $at, . + 4 + (0x82 << 2)
    ctx->pc = 0x138FBCu;
    {
        const bool branch_taken_0x138fbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x138FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FBCu;
        // 0x138fc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fbc) {
            ctx->pc = 0x1391C8u;
            goto label_1391c8;
        }
    }
    ctx->pc = 0x138FC4u;
    // 0x138fc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x138fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138fc8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x138fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x138fcc: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x138fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x138fd0: 0x3c0a00ff  lui         $t2, 0xFF
    ctx->pc = 0x138fd0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)255 << 16));
    // 0x138fd4: 0x0  nop
    ctx->pc = 0x138fd4u;
    // NOP
label_138fd8:
    // 0x138fd8: 0x9ce90004  lwu         $t1, 0x4($a3)
    ctx->pc = 0x138fd8u;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x138fdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x138fdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fe0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x138fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fe4: 0xffa90110  sd          $t1, 0x110($sp)
    ctx->pc = 0x138fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 9));
    // 0x138fe8: 0x9583c  dsll32      $t3, $t1, 0
    ctx->pc = 0x138fe8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 0));
    // 0x138fec: 0x9ce90000  lwu         $t1, 0x0($a3)
    ctx->pc = 0x138fecu;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x138ff0: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x138ff0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x138ff4: 0xffa90110  sd          $t1, 0x110($sp)
    ctx->pc = 0x138ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 9));
label_138ff8:
    // 0x138ff8: 0xdfa90110  ld          $t1, 0x110($sp)
    ctx->pc = 0x138ff8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x138ffc: 0x1045814  dsllv       $t3, $a0, $t0
    ctx->pc = 0x138ffcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x139000: 0x12b4824  and         $t1, $t1, $t3
    ctx->pc = 0x139000u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 11));
    // 0x139004: 0x11200066  beqz        $t1, . + 4 + (0x66 << 2)
    ctx->pc = 0x139004u;
    {
        const bool branch_taken_0x139004 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x139004) {
            ctx->pc = 0x1391A0u;
            goto label_1391a0;
        }
    }
    ctx->pc = 0x13900Cu;
    // 0x13900c: 0x8ceb0010  lw          $t3, 0x10($a3)
    ctx->pc = 0x13900cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x139010: 0x1634824  and         $t1, $t3, $v1
    ctx->pc = 0x139010u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x139014: 0x1120003a  beqz        $t1, . + 4 + (0x3A << 2)
    ctx->pc = 0x139014u;
    {
        const bool branch_taken_0x139014 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x139014) {
            ctx->pc = 0x139100u;
            goto label_139100;
        }
    }
    ctx->pc = 0x13901Cu;
    // 0x13901c: 0xa2a40001  sb          $a0, 0x1($s5)
    ctx->pc = 0x13901cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x139020: 0x96ab0850  lhu         $t3, 0x850($s5)
    ctx->pc = 0x139020u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2128)));
    // 0x139024: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x139024u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x139028: 0xa6ab0850  sh          $t3, 0x850($s5)
    ctx->pc = 0x139028u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 2128), (uint16_t)GPR_U32(ctx, 11));
    // 0x13902c: 0x8cec0010  lw          $t4, 0x10($a3)
    ctx->pc = 0x13902cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x139030: 0x318b00ff  andi        $t3, $t4, 0xFF
    ctx->pc = 0x139030u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x139034: 0x11600012  beqz        $t3, . + 4 + (0x12 << 2)
    ctx->pc = 0x139034u;
    {
        const bool branch_taken_0x139034 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x139038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139034u;
        // 0x139038: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139034) {
            ctx->pc = 0x139080u;
            goto label_139080;
        }
    }
    ctx->pc = 0x13903Cu;
    // 0x13903c: 0x8eab0854  lw          $t3, 0x854($s5)
    ctx->pc = 0x13903cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2132)));
    // 0x139040: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x139040u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139044: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x139044u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x139048: 0xaeab0854  sw          $t3, 0x854($s5)
    ctx->pc = 0x139048u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2132), GPR_U32(ctx, 11));
    // 0x13904c: 0x9cec0010  lwu         $t4, 0x10($a3)
    ctx->pc = 0x13904cu;
    SET_GPR_ZE32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_139050:
    // 0x139050: 0x1a45814  dsllv       $t3, $a0, $t5
    ctx->pc = 0x139050u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) << (GPR_U32(ctx, 13) & 0x3F));
    // 0x139054: 0x18b5824  and         $t3, $t4, $t3
    ctx->pc = 0x139054u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & GPR_U64(ctx, 11));
    // 0x139058: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x139058u;
    {
        const bool branch_taken_0x139058 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x13905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139058u;
        // 0x13905c: 0x31ab00ff  andi        $t3, $t5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139058) {
            ctx->pc = 0x139068u;
            goto label_139068;
        }
    }
    ctx->pc = 0x139060u;
    // 0x139060: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x139060u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x139064: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x139064u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_139068:
    // 0x139068: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x139068u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x13906c: 0x2dab0007  sltiu       $t3, $t5, 0x7
    ctx->pc = 0x13906cu;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x139070: 0x1560fff7  bnez        $t3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x139070u;
    {
        const bool branch_taken_0x139070 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x139070) {
            ctx->pc = 0x139050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_139050;
        }
    }
    ctx->pc = 0x139078u;
    // 0x139078: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x139078u;
    {
        const bool branch_taken_0x139078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139078) {
            ctx->pc = 0x1390D0u;
            goto label_1390d0;
        }
    }
    ctx->pc = 0x139080u;
label_139080:
    // 0x139080: 0x318bff00  andi        $t3, $t4, 0xFF00
    ctx->pc = 0x139080u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65280);
    // 0x139084: 0x11600012  beqz        $t3, . + 4 + (0x12 << 2)
    ctx->pc = 0x139084u;
    {
        const bool branch_taken_0x139084 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x139084) {
            ctx->pc = 0x1390D0u;
            goto label_1390d0;
        }
    }
    ctx->pc = 0x13908Cu;
    // 0x13908c: 0x8eab0858  lw          $t3, 0x858($s5)
    ctx->pc = 0x13908cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2136)));
    // 0x139090: 0x240c0009  addiu       $t4, $zero, 0x9
    ctx->pc = 0x139090u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x139094: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x139094u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x139098: 0xaeab0858  sw          $t3, 0x858($s5)
    ctx->pc = 0x139098u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2136), GPR_U32(ctx, 11));
    // 0x13909c: 0x9ced0010  lwu         $t5, 0x10($a3)
    ctx->pc = 0x13909cu;
    SET_GPR_ZE32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_1390a0:
    // 0x1390a0: 0x1845814  dsllv       $t3, $a0, $t4
    ctx->pc = 0x1390a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) << (GPR_U32(ctx, 12) & 0x3F));
    // 0x1390a4: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x1390a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x1390a8: 0x11600005  beqz        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1390A8u;
    {
        const bool branch_taken_0x1390a8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1390ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1390A8u;
        // 0x1390ac: 0x258bfff8  addiu       $t3, $t4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1390a8) {
            ctx->pc = 0x1390C0u;
            goto label_1390c0;
        }
    }
    ctx->pc = 0x1390B0u;
    // 0x1390b0: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x1390b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x1390b4: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x1390b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1390b8: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x1390b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x1390bc: 0x0  nop
    ctx->pc = 0x1390bcu;
    // NOP
label_1390c0:
    // 0x1390c0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1390c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1390c4: 0x2d8b000f  sltiu       $t3, $t4, 0xF
    ctx->pc = 0x1390c4u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1390c8: 0x1560fff5  bnez        $t3, . + 4 + (-0xB << 2)
    ctx->pc = 0x1390C8u;
    {
        const bool branch_taken_0x1390c8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x1390c8) {
            ctx->pc = 0x1390A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1390a0;
        }
    }
    ctx->pc = 0x1390D0u;
label_1390d0:
    // 0x1390d0: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1390D0u;
    {
        const bool branch_taken_0x1390d0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1390d0) {
            ctx->pc = 0x1390E0u;
            goto label_1390e0;
        }
    }
    ctx->pc = 0x1390D8u;
    // 0x1390d8: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x1390d8u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1390dc: 0x0  nop
    ctx->pc = 0x1390dcu;
    // NOP
label_1390e0:
    // 0x1390e0: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x1390e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x1390e4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1390e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1390e8: 0x2a95821  addu        $t3, $s5, $t1
    ctx->pc = 0x1390e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
    // 0x1390ec: 0x8d690a58  lw          $t1, 0xA58($t3)
    ctx->pc = 0x1390ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 2648)));
    // 0x1390f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1390f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1390f4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1390F4u;
    {
        const bool branch_taken_0x1390f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1390F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1390F4u;
        // 0x1390f8: 0xad690a58  sw          $t1, 0xA58($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 2648), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1390f4) {
            ctx->pc = 0x1391A0u;
            goto label_1391a0;
        }
    }
    ctx->pc = 0x1390FCu;
    // 0x1390fc: 0x0  nop
    ctx->pc = 0x1390fcu;
    // NOP
label_139100:
    // 0x139100: 0x1624824  and         $t1, $t3, $v0
    ctx->pc = 0x139100u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x139104: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x139104u;
    {
        const bool branch_taken_0x139104 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x139104) {
            ctx->pc = 0x139128u;
            goto label_139128;
        }
    }
    ctx->pc = 0x13910Cu;
    // 0x13910c: 0x8ea90844  lw          $t1, 0x844($s5)
    ctx->pc = 0x13910cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2116)));
    // 0x139110: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x139110u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x139114: 0xaea90844  sw          $t1, 0x844($s5)
    ctx->pc = 0x139114u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2116), GPR_U32(ctx, 9));
    // 0x139118: 0x94c908dc  lhu         $t1, 0x8DC($a2)
    ctx->pc = 0x139118u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2268)));
    // 0x13911c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x13911cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x139120: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x139120u;
    {
        const bool branch_taken_0x139120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139120u;
        // 0x139124: 0xa4c908dc  sh          $t1, 0x8DC($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 2268), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139120) {
            ctx->pc = 0x1391A0u;
            goto label_1391a0;
        }
    }
    ctx->pc = 0x139128u;
label_139128:
    // 0x139128: 0x316900ff  andi        $t1, $t3, 0xFF
    ctx->pc = 0x139128u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x13912c: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13912Cu;
    {
        const bool branch_taken_0x13912c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x13912c) {
            ctx->pc = 0x139150u;
            goto label_139150;
        }
    }
    ctx->pc = 0x139134u;
    // 0x139134: 0x8ea90840  lw          $t1, 0x840($s5)
    ctx->pc = 0x139134u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2112)));
    // 0x139138: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x139138u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x13913c: 0xaea90840  sw          $t1, 0x840($s5)
    ctx->pc = 0x13913cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2112), GPR_U32(ctx, 9));
    // 0x139140: 0x94c9085c  lhu         $t1, 0x85C($a2)
    ctx->pc = 0x139140u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2140)));
    // 0x139144: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x139144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x139148: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x139148u;
    {
        const bool branch_taken_0x139148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139148u;
        // 0x13914c: 0xa4c9085c  sh          $t1, 0x85C($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 2140), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139148) {
            ctx->pc = 0x1391A0u;
            goto label_1391a0;
        }
    }
    ctx->pc = 0x139150u;
label_139150:
    // 0x139150: 0x3169ff00  andi        $t1, $t3, 0xFF00
    ctx->pc = 0x139150u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65280);
    // 0x139154: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x139154u;
    {
        const bool branch_taken_0x139154 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x139154) {
            ctx->pc = 0x139178u;
            goto label_139178;
        }
    }
    ctx->pc = 0x13915Cu;
    // 0x13915c: 0x8ea90844  lw          $t1, 0x844($s5)
    ctx->pc = 0x13915cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2116)));
    // 0x139160: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x139160u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x139164: 0xaea90844  sw          $t1, 0x844($s5)
    ctx->pc = 0x139164u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2116), GPR_U32(ctx, 9));
    // 0x139168: 0x94c908dc  lhu         $t1, 0x8DC($a2)
    ctx->pc = 0x139168u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2268)));
    // 0x13916c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x13916cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x139170: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x139170u;
    {
        const bool branch_taken_0x139170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139170u;
        // 0x139174: 0xa4c908dc  sh          $t1, 0x8DC($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 2268), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139170) {
            ctx->pc = 0x1391A0u;
            goto label_1391a0;
        }
    }
    ctx->pc = 0x139178u;
label_139178:
    // 0x139178: 0x16a4824  and         $t1, $t3, $t2
    ctx->pc = 0x139178u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x13917c: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13917Cu;
    {
        const bool branch_taken_0x13917c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x13917c) {
            ctx->pc = 0x1391A0u;
            goto label_1391a0;
        }
    }
    ctx->pc = 0x139184u;
    // 0x139184: 0x8ea90848  lw          $t1, 0x848($s5)
    ctx->pc = 0x139184u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2120)));
    // 0x139188: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x139188u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x13918c: 0xaea90848  sw          $t1, 0x848($s5)
    ctx->pc = 0x13918cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2120), GPR_U32(ctx, 9));
    // 0x139190: 0x94c9095c  lhu         $t1, 0x95C($a2)
    ctx->pc = 0x139190u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2396)));
    // 0x139194: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x139194u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x139198: 0xa4c9095c  sh          $t1, 0x95C($a2)
    ctx->pc = 0x139198u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2396), (uint16_t)GPR_U32(ctx, 9));
    // 0x13919c: 0x0  nop
    ctx->pc = 0x13919cu;
    // NOP
label_1391a0:
    // 0x1391a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1391a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1391a4: 0x2d090040  sltiu       $t1, $t0, 0x40
    ctx->pc = 0x1391a4u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1391a8: 0x1520ff93  bnez        $t1, . + 4 + (-0x6D << 2)
    ctx->pc = 0x1391A8u;
    {
        const bool branch_taken_0x1391a8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1391ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391A8u;
        // 0x1391ac: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391a8) {
            ctx->pc = 0x138FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138ff8;
        }
    }
    ctx->pc = 0x1391B0u;
    // 0x1391b0: 0x96a60006  lhu         $a2, 0x6($s5)
    ctx->pc = 0x1391b0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1391b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1391b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1391b8: 0xa6302b  sltu        $a2, $a1, $a2
    ctx->pc = 0x1391b8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1391bc: 0x14c0ff86  bnez        $a2, . + 4 + (-0x7A << 2)
    ctx->pc = 0x1391BCu;
    {
        const bool branch_taken_0x1391bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1391C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391BCu;
        // 0x1391c0: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391bc) {
            ctx->pc = 0x138FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138fd8;
        }
    }
    ctx->pc = 0x1391C4u;
    // 0x1391c4: 0x0  nop
    ctx->pc = 0x1391c4u;
    // NOP
label_1391c8:
    // 0x1391c8: 0x8ea30840  lw          $v1, 0x840($s5)
    ctx->pc = 0x1391c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2112)));
    // 0x1391cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1391CCu;
    {
        const bool branch_taken_0x1391cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1391D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391CCu;
        // 0x1391d0: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391cc) {
            ctx->pc = 0x1391F0u;
            goto label_1391f0;
        }
    }
    ctx->pc = 0x1391D4u;
    // 0x1391d4: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1391d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x1391d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1391d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1391dc: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x1391dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x1391e0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1391e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1391e4: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x1391E4u;
    SET_GPR_U32(ctx, 31, 0x1391ECu);
    ctx->pc = 0x1391E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1391E4u;
    // 0x1391e8: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x1391E4u, 0x1391ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1391ECu;
label_1391ec:
    // 0x1391ec: 0xaea20abc  sw          $v0, 0xABC($s5)
    ctx->pc = 0x1391ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2748), GPR_U32(ctx, 2));
label_1391f0:
    // 0x1391f0: 0x8ea30844  lw          $v1, 0x844($s5)
    ctx->pc = 0x1391f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2116)));
    // 0x1391f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1391F4u;
    {
        const bool branch_taken_0x1391f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1391F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391F4u;
        // 0x1391f8: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391f4) {
            ctx->pc = 0x139218u;
            goto label_139218;
        }
    }
    ctx->pc = 0x1391FCu;
    // 0x1391fc: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1391fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x139200: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x139200u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139204: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x139204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x139208: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x139208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13920c: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x13920Cu;
    SET_GPR_U32(ctx, 31, 0x139214u);
    ctx->pc = 0x139210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13920Cu;
    // 0x139210: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x13920Cu, 0x139214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139214u;
label_139214:
    // 0x139214: 0xaea20ac0  sw          $v0, 0xAC0($s5)
    ctx->pc = 0x139214u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2752), GPR_U32(ctx, 2));
label_139218:
    // 0x139218: 0x8ea30848  lw          $v1, 0x848($s5)
    ctx->pc = 0x139218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2120)));
    // 0x13921c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13921Cu;
    {
        const bool branch_taken_0x13921c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x139220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13921Cu;
        // 0x139220: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13921c) {
            ctx->pc = 0x139240u;
            goto label_139240;
        }
    }
    ctx->pc = 0x139224u;
    // 0x139224: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x139224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x139228: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x139228u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13922c: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x13922cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x139230: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x139230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x139234: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x139234u;
    SET_GPR_U32(ctx, 31, 0x13923Cu);
    ctx->pc = 0x139238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139234u;
    // 0x139238: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x139234u, 0x13923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13923Cu;
label_13923c:
    // 0x13923c: 0xaea20ac4  sw          $v0, 0xAC4($s5)
    ctx->pc = 0x13923cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2756), GPR_U32(ctx, 2));
label_139240:
    // 0x139240: 0x96a20850  lhu         $v0, 0x850($s5)
    ctx->pc = 0x139240u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2128)));
    // 0x139244: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x139244u;
    {
        const bool branch_taken_0x139244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139244u;
        // 0x139248: 0x3043ffff  andi        $v1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139244) {
            ctx->pc = 0x139270u;
            goto label_139270;
        }
    }
    ctx->pc = 0x13924Cu;
    // 0x13924c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x13924cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x139250: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x139250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x139254: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x139254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x139258: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x139258u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13925c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x13925cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x139260: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x139260u;
    SET_GPR_U32(ctx, 31, 0x139268u);
    ctx->pc = 0x139264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139260u;
    // 0x139264: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x139260u, 0x139268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139268u;
label_139268:
    // 0x139268: 0xaea20acc  sw          $v0, 0xACC($s5)
    ctx->pc = 0x139268u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2764), GPR_U32(ctx, 2));
    // 0x13926c: 0x0  nop
    ctx->pc = 0x13926cu;
    // NOP
label_139270:
    // 0x139270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139274: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x139274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139278: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x139278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13927c: 0x0  nop
    ctx->pc = 0x13927cu;
    // NOP
label_139280:
    // 0x139280: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x139280u;
    {
        const bool branch_taken_0x139280 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x139280) {
            ctx->pc = 0x139298u;
            goto label_139298;
        }
    }
    ctx->pc = 0x139288u;
    // 0x139288: 0x8ea20abc  lw          $v0, 0xABC($s5)
    ctx->pc = 0x139288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2748)));
    // 0x13928c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13928Cu;
    {
        const bool branch_taken_0x13928c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13928Cu;
        // 0x139290: 0xace20ad0  sw          $v0, 0xAD0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 2768), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13928c) {
            ctx->pc = 0x1392B8u;
            goto label_1392b8;
        }
    }
    ctx->pc = 0x139294u;
    // 0x139294: 0x0  nop
    ctx->pc = 0x139294u;
    // NOP
label_139298:
    // 0x139298: 0x94c4085a  lhu         $a0, 0x85A($a2)
    ctx->pc = 0x139298u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2138)));
    // 0x13929c: 0x8ce20acc  lw          $v0, 0xACC($a3)
    ctx->pc = 0x13929cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2764)));
    // 0x1392a0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1392a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1392a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1392a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1392a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1392a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1392ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1392acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1392b0: 0xace20ad0  sw          $v0, 0xAD0($a3)
    ctx->pc = 0x1392b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2768), GPR_U32(ctx, 2));
    // 0x1392b4: 0x0  nop
    ctx->pc = 0x1392b4u;
    // NOP
label_1392b8:
    // 0x1392b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1392b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1392bc: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x1392bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1392c0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1392c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1392c4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1392C4u;
    {
        const bool branch_taken_0x1392c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1392C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392C4u;
        // 0x1392c8: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1392c4) {
            ctx->pc = 0x139280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_139280;
        }
    }
    ctx->pc = 0x1392CCu;
    // 0x1392cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1392ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1392d0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1392d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1392d4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1392d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1392d8:
    // 0x1392d8: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1392D8u;
    {
        const bool branch_taken_0x1392d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1392d8) {
            ctx->pc = 0x1392F0u;
            goto label_1392f0;
        }
    }
    ctx->pc = 0x1392E0u;
    // 0x1392e0: 0x8ea20ac0  lw          $v0, 0xAC0($s5)
    ctx->pc = 0x1392e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2752)));
    // 0x1392e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1392E4u;
    {
        const bool branch_taken_0x1392e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1392E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392E4u;
        // 0x1392e8: 0xace20bd0  sw          $v0, 0xBD0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 3024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1392e4) {
            ctx->pc = 0x139310u;
            goto label_139310;
        }
    }
    ctx->pc = 0x1392ECu;
    // 0x1392ec: 0x0  nop
    ctx->pc = 0x1392ecu;
    // NOP
label_1392f0:
    // 0x1392f0: 0x94c408da  lhu         $a0, 0x8DA($a2)
    ctx->pc = 0x1392f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2266)));
    // 0x1392f4: 0x8ce20bcc  lw          $v0, 0xBCC($a3)
    ctx->pc = 0x1392f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3020)));
    // 0x1392f8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1392f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1392fc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1392fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139300: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x139300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x139304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139308: 0xace20bd0  sw          $v0, 0xBD0($a3)
    ctx->pc = 0x139308u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3024), GPR_U32(ctx, 2));
    // 0x13930c: 0x0  nop
    ctx->pc = 0x13930cu;
    // NOP
label_139310:
    // 0x139310: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x139310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x139314: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x139314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x139318: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x139318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x13931c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x13931Cu;
    {
        const bool branch_taken_0x13931c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13931Cu;
        // 0x139320: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13931c) {
            ctx->pc = 0x1392D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1392d8;
        }
    }
    ctx->pc = 0x139324u;
    // 0x139324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139328: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x139328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13932c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x13932cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_139330:
    // 0x139330: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x139330u;
    {
        const bool branch_taken_0x139330 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x139330) {
            ctx->pc = 0x139348u;
            goto label_139348;
        }
    }
    ctx->pc = 0x139338u;
    // 0x139338: 0x8ea20ac4  lw          $v0, 0xAC4($s5)
    ctx->pc = 0x139338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2756)));
    // 0x13933c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13933Cu;
    {
        const bool branch_taken_0x13933c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13933Cu;
        // 0x139340: 0xace20cd0  sw          $v0, 0xCD0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 3280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13933c) {
            ctx->pc = 0x139368u;
            goto label_139368;
        }
    }
    ctx->pc = 0x139344u;
    // 0x139344: 0x0  nop
    ctx->pc = 0x139344u;
    // NOP
label_139348:
    // 0x139348: 0x94c4095a  lhu         $a0, 0x95A($a2)
    ctx->pc = 0x139348u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2394)));
    // 0x13934c: 0x8ce20ccc  lw          $v0, 0xCCC($a3)
    ctx->pc = 0x13934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3276)));
    // 0x139350: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x139350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x139354: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x139354u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139358: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x139358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13935c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13935cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139360: 0xace20cd0  sw          $v0, 0xCD0($a3)
    ctx->pc = 0x139360u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3280), GPR_U32(ctx, 2));
    // 0x139364: 0x0  nop
    ctx->pc = 0x139364u;
    // NOP
label_139368:
    // 0x139368: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x139368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13936c: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x13936cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x139370: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x139370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x139374: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x139374u;
    {
        const bool branch_taken_0x139374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139374u;
        // 0x139378: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139374) {
            ctx->pc = 0x139330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_139330;
        }
    }
    ctx->pc = 0x13937Cu;
    // 0x13937c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13937cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139380: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x139380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139384: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x139384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_139388:
    // 0x139388: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x139388u;
    {
        const bool branch_taken_0x139388 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x139388) {
            ctx->pc = 0x1393A0u;
            goto label_1393a0;
        }
    }
    ctx->pc = 0x139390u;
    // 0x139390: 0x8ea20ac8  lw          $v0, 0xAC8($s5)
    ctx->pc = 0x139390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2760)));
    // 0x139394: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x139394u;
    {
        const bool branch_taken_0x139394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139394u;
        // 0x139398: 0xace20dd0  sw          $v0, 0xDD0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 3536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139394) {
            ctx->pc = 0x1393C0u;
            goto label_1393c0;
        }
    }
    ctx->pc = 0x13939Cu;
    // 0x13939c: 0x0  nop
    ctx->pc = 0x13939cu;
    // NOP
label_1393a0:
    // 0x1393a0: 0x94c409da  lhu         $a0, 0x9DA($a2)
    ctx->pc = 0x1393a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2522)));
    // 0x1393a4: 0x8ce20dcc  lw          $v0, 0xDCC($a3)
    ctx->pc = 0x1393a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3532)));
    // 0x1393a8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1393a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1393ac: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1393acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1393b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1393b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1393b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1393b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1393b8: 0xace20dd0  sw          $v0, 0xDD0($a3)
    ctx->pc = 0x1393b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3536), GPR_U32(ctx, 2));
    // 0x1393bc: 0x0  nop
    ctx->pc = 0x1393bcu;
    // NOP
label_1393c0:
    // 0x1393c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1393c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1393c4: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x1393c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1393c8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1393c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1393cc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1393CCu;
    {
        const bool branch_taken_0x1393cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1393D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393CCu;
        // 0x1393d0: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1393cc) {
            ctx->pc = 0x139388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_139388;
        }
    }
    ctx->pc = 0x1393D4u;
    // 0x1393d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1393d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393d8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1393d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393dc: 0x0  nop
    ctx->pc = 0x1393dcu;
    // NOP
label_1393e0:
    // 0x1393e0: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1393E0u;
    {
        const bool branch_taken_0x1393e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1393e0) {
            ctx->pc = 0x1393F8u;
            goto label_1393f8;
        }
    }
    ctx->pc = 0x1393E8u;
    // 0x1393e8: 0x8ea20acc  lw          $v0, 0xACC($s5)
    ctx->pc = 0x1393e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2764)));
    // 0x1393ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1393ECu;
    {
        const bool branch_taken_0x1393ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1393F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393ECu;
        // 0x1393f0: 0xacc20ed0  sw          $v0, 0xED0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 3792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1393ec) {
            ctx->pc = 0x139418u;
            goto label_139418;
        }
    }
    ctx->pc = 0x1393F4u;
    // 0x1393f4: 0x0  nop
    ctx->pc = 0x1393f4u;
    // NOP
label_1393f8:
    // 0x1393f8: 0x8cc40a58  lw          $a0, 0xA58($a2)
    ctx->pc = 0x1393f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2648)));
    // 0x1393fc: 0x8cc20ecc  lw          $v0, 0xECC($a2)
    ctx->pc = 0x1393fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3788)));
    // 0x139400: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x139400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x139404: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x139404u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139408: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x139408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13940c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139410: 0xacc20ed0  sw          $v0, 0xED0($a2)
    ctx->pc = 0x139410u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3792), GPR_U32(ctx, 2));
    // 0x139414: 0x0  nop
    ctx->pc = 0x139414u;
    // NOP
label_139418:
    // 0x139418: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x139418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13941c: 0x2ca20018  sltiu       $v0, $a1, 0x18
    ctx->pc = 0x13941cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x139420: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x139420u;
    {
        const bool branch_taken_0x139420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139420u;
        // 0x139424: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139420) {
            ctx->pc = 0x1393E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1393e0;
        }
    }
    ctx->pc = 0x139428u;
    // 0x139428: 0x26a4085c  addiu       $a0, $s5, 0x85C
    ctx->pc = 0x139428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2140));
    // 0x13942c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13942cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139430: 0xc049590  jal         func_125640
    ctx->pc = 0x139430u;
    SET_GPR_U32(ctx, 31, 0x139438u);
    ctx->pc = 0x139434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139430u;
    // 0x139434: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x139430u, 0x139438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139438u;
label_139438:
    // 0x139438: 0x26a408dc  addiu       $a0, $s5, 0x8DC
    ctx->pc = 0x139438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2268));
    // 0x13943c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13943cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139440: 0xc049590  jal         func_125640
    ctx->pc = 0x139440u;
    SET_GPR_U32(ctx, 31, 0x139448u);
    ctx->pc = 0x139444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139440u;
    // 0x139444: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x139440u, 0x139448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139448u;
label_139448:
    // 0x139448: 0x26a4095c  addiu       $a0, $s5, 0x95C
    ctx->pc = 0x139448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2396));
    // 0x13944c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13944cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139450: 0xc049590  jal         func_125640
    ctx->pc = 0x139450u;
    SET_GPR_U32(ctx, 31, 0x139458u);
    ctx->pc = 0x139454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139450u;
    // 0x139454: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x139450u, 0x139458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139458u;
label_139458:
    // 0x139458: 0x26a409dc  addiu       $a0, $s5, 0x9DC
    ctx->pc = 0x139458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2524));
    // 0x13945c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13945cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139460: 0xc049590  jal         func_125640
    ctx->pc = 0x139460u;
    SET_GPR_U32(ctx, 31, 0x139468u);
    ctx->pc = 0x139464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139460u;
    // 0x139464: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x139460u, 0x139468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139468u;
label_139468:
    // 0x139468: 0x26a40a5c  addiu       $a0, $s5, 0xA5C
    ctx->pc = 0x139468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2652));
    // 0x13946c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13946cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139470: 0xc049590  jal         func_125640
    ctx->pc = 0x139470u;
    SET_GPR_U32(ctx, 31, 0x139478u);
    ctx->pc = 0x139474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139470u;
    // 0x139474: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x139470u, 0x139478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139478u;
label_139478:
    // 0x139478: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x139478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x13947c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x13947cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x139480: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x139480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x139484: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x139484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x139488: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x139488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x13948c: 0x96a20006  lhu         $v0, 0x6($s5)
    ctx->pc = 0x13948cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x139490: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x139490u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x139494: 0x10200172  beqz        $at, . + 4 + (0x172 << 2)
    ctx->pc = 0x139494u;
    {
        const bool branch_taken_0x139494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x139498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139494u;
        // 0x139498: 0x27be0120  addiu       $fp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139494) {
            ctx->pc = 0x139A60u;
            goto label_139a60;
        }
    }
    ctx->pc = 0x13949Cu;
    // 0x13949c: 0x27b40134  addiu       $s4, $sp, 0x134
    ctx->pc = 0x13949cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x1394a0: 0x27b60144  addiu       $s6, $sp, 0x144
    ctx->pc = 0x1394a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x1394a4: 0x27b70154  addiu       $s7, $sp, 0x154
    ctx->pc = 0x1394a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_1394a8:
    // 0x1394a8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1394a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1394ac: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x1394acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
    // 0x1394b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1394b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1394b4: 0x27b30110  addiu       $s3, $sp, 0x110
    ctx->pc = 0x1394b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1394b8: 0x265248e8  addiu       $s2, $s2, 0x48E8
    ctx->pc = 0x1394b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 18664));
    // 0x1394bc: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x1394bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1394c0: 0x9c430004  lwu         $v1, 0x4($v0)
    ctx->pc = 0x1394c0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1394c4: 0xffa30110  sd          $v1, 0x110($sp)
    ctx->pc = 0x1394c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 3));
    // 0x1394c8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1394c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1394cc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1394ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1394d0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1394d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1394d4: 0x9c630000  lwu         $v1, 0x0($v1)
    ctx->pc = 0x1394d4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1394d8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1394d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1394dc: 0xffa30110  sd          $v1, 0x110($sp)
    ctx->pc = 0x1394dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 3));
    // 0x1394e0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1394e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1394e4: 0x9c64000c  lwu         $a0, 0xC($v1)
    ctx->pc = 0x1394e4u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1394e8: 0x27a30118  addiu       $v1, $sp, 0x118
    ctx->pc = 0x1394e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1394ec: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1394ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1394f0: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1394f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1394f4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1394f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1394f8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1394f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1394fc: 0x9c630008  lwu         $v1, 0x8($v1)
    ctx->pc = 0x1394fcu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x139500: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x139500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x139504: 0x27a30118  addiu       $v1, $sp, 0x118
    ctx->pc = 0x139504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x139508: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x139508u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13950c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x13950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x139510: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x139510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x139514: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x139514u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x139518: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x139518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13951c: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x13951cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x139520: 0x27a30124  addiu       $v1, $sp, 0x124
    ctx->pc = 0x139520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x139524: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x139524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x139528: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x139528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13952c: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x13952cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x139530: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x139530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x139534: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139538: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x139538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13953c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x13953cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x139540: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139544: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x139544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139548: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x139548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x13954c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x13954cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x139550: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x139550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x139554: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x139554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x139558: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x139558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x13955c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13955cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139560: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x139560u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x139564: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x139564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x139568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13956c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x13956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139570: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x139570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x139574: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x139574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x139578: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x139578u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x13957c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x13957cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x139580: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139584: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x139584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x139588: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x139588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13958c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13958cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139590: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x139590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139594: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x139594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x139598: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x139598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x13959c: 0x27a3013c  addiu       $v1, $sp, 0x13C
    ctx->pc = 0x13959cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x1395a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1395a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1395a4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1395a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1395a8: 0x8464001a  lh          $a0, 0x1A($v1)
    ctx->pc = 0x1395a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x1395ac: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1395acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1395b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1395b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1395b4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1395b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1395b8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1395b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1395bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1395bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1395c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1395c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1395c4: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x1395c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1395c8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1395c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1395cc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1395ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1395d0: 0x8464001a  lh          $a0, 0x1A($v1)
    ctx->pc = 0x1395d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x1395d4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1395d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1395d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1395d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1395dc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1395dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1395e0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1395e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1395e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1395e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1395e8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1395e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1395ec: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x1395ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x1395f0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1395f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1395f4: 0x8464001a  lh          $a0, 0x1A($v1)
    ctx->pc = 0x1395f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x1395f8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1395f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1395fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1395fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139600: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x139600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x139604: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x139604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x139608: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13960c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x13960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139610: 0x27a30148  addiu       $v1, $sp, 0x148
    ctx->pc = 0x139610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x139614: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x139614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x139618: 0x27a3014c  addiu       $v1, $sp, 0x14C
    ctx->pc = 0x139618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x13961c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13961cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x139620: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x139620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x139624: 0x8464001c  lh          $a0, 0x1C($v1)
    ctx->pc = 0x139624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x139628: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x139628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x13962c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13962cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139630: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x139630u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x139634: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x139634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x139638: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13963c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139640: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x139640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x139644: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x139644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x139648: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x139648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13964c: 0x8464001c  lh          $a0, 0x1C($v1)
    ctx->pc = 0x13964cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x139650: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x139650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x139654: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139658: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x139658u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13965c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x13965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x139660: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139664: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x139664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139668: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x139668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x13966c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x13966cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x139670: 0x8464001c  lh          $a0, 0x1C($v1)
    ctx->pc = 0x139670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x139674: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x139674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x139678: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13967c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x13967cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x139680: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x139680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x139684: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139688: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x139688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13968c: 0x27a30158  addiu       $v1, $sp, 0x158
    ctx->pc = 0x13968cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x139690: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x139690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x139694: 0x27a3015c  addiu       $v1, $sp, 0x15C
    ctx->pc = 0x139694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x139698: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x139698u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13969c: 0x0  nop
    ctx->pc = 0x13969cu;
    // NOP
label_1396a0:
    // 0x1396a0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1396a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1396a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1396a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396a8: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x1396a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1396ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1396acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1396b0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1396b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1396b4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1396B4u;
    SET_GPR_U32(ctx, 31, 0x1396BCu);
    ctx->pc = 0x1396B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1396B4u;
    // 0x1396b8: 0x24450130  addiu       $a1, $v0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1396B4u, 0x1396BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396BCu;
label_1396bc:
    // 0x1396bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1396bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1396c0: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1396c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1396c4: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x1396c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1396c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1396c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1396cc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1396CCu;
    {
        const bool branch_taken_0x1396cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1396D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396CCu;
        // 0x1396d0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396cc) {
            ctx->pc = 0x1396A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1396a0;
        }
    }
    ctx->pc = 0x1396D4u;
    // 0x1396d4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1396d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1396d8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1396d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1396dc: 0xc041460  jal         func_105180
    ctx->pc = 0x1396DCu;
    SET_GPR_U32(ctx, 31, 0x1396E4u);
    ctx->pc = 0x1396E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1396DCu;
    // 0x1396e0: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x1396DCu, 0x1396E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396E4u;
label_1396e4:
    // 0x1396e4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1396e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1396e8: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1396E8u;
    SET_GPR_U32(ctx, 31, 0x1396F0u);
    ctx->pc = 0x1396ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1396E8u;
    // 0x1396ec: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1396E8u, 0x1396F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396F0u;
label_1396f0:
    // 0x1396f0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1396f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1396f4: 0x27a2016c  addiu       $v0, $sp, 0x16C
    ctx->pc = 0x1396f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x1396f8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1396f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1396fc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1396fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x139700: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x139700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x139704: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x139704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139708: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x139708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x13970c: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x13970cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139710: 0xc6840000  lwc1        $f4, 0x0($s4)
    ctx->pc = 0x139710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x139714: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x139714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139718: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13971c: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x13971cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x139720: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x139720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x139724: 0x27a20164  addiu       $v0, $sp, 0x164
    ctx->pc = 0x139724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    // 0x139728: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x139728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13972c: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x13972cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x139730: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x139730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x139734: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x139734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139738: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x139738u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x13973c: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x13973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x139740: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x139740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139744: 0x46032818  adda.s      $f5, $f3
    ctx->pc = 0x139744u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[5], ctx->f[3]));
    // 0x139748: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x139748u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x13974c: 0x27a2016c  addiu       $v0, $sp, 0x16C
    ctx->pc = 0x13974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x139750: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x139750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x139754: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x139754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x139758: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x139758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x13975c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13975cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_139760:
    // 0x139760: 0xdfa30110  ld          $v1, 0x110($sp)
    ctx->pc = 0x139760u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x139764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139768: 0x2022014  dsllv       $a0, $v0, $s0
    ctx->pc = 0x139768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x13976c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x13976cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x139770: 0x106000ab  beqz        $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x139770u;
    {
        const bool branch_taken_0x139770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139770) {
            ctx->pc = 0x139A20u;
            goto label_139a20;
        }
    }
    ctx->pc = 0x139778u;
    // 0x139778: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x139778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x13977c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13977cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x139780: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x139780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x139784: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x139784u;
    {
        const bool branch_taken_0x139784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x139788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139784u;
        // 0x139788: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139784) {
            ctx->pc = 0x139860u;
            goto label_139860;
        }
    }
    ctx->pc = 0x13978Cu;
    // 0x13978c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13978Cu;
    {
        const bool branch_taken_0x13978c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x139790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13978Cu;
        // 0x139790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13978c) {
            ctx->pc = 0x1397D0u;
            goto label_1397d0;
        }
    }
    ctx->pc = 0x139794u;
    // 0x139794: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x139794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x139798: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x139798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x13979c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13979cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1397a0:
    // 0x1397a0: 0x441814  dsllv       $v1, $a0, $v0
    ctx->pc = 0x1397a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x1397a4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1397a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1397a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1397A8u;
    {
        const bool branch_taken_0x1397a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1397ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397A8u;
        // 0x1397ac: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397a8) {
            ctx->pc = 0x1397B8u;
            goto label_1397b8;
        }
    }
    ctx->pc = 0x1397B0u;
    // 0x1397b0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1397b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1397b4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1397b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1397b8:
    // 0x1397b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1397b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1397bc: 0x2c430007  sltiu       $v1, $v0, 0x7
    ctx->pc = 0x1397bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1397c0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1397C0u;
    {
        const bool branch_taken_0x1397c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1397c0) {
            ctx->pc = 0x1397A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1397a0;
        }
    }
    ctx->pc = 0x1397C8u;
    // 0x1397c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1397C8u;
    {
        const bool branch_taken_0x1397c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1397c8) {
            ctx->pc = 0x139818u;
            goto label_139818;
        }
    }
    ctx->pc = 0x1397D0u;
label_1397d0:
    // 0x1397d0: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x1397d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x1397d4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1397D4u;
    {
        const bool branch_taken_0x1397d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1397D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397D4u;
        // 0x1397d8: 0x4303c  dsll32      $a2, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397d4) {
            ctx->pc = 0x139818u;
            goto label_139818;
        }
    }
    ctx->pc = 0x1397DCu;
    // 0x1397dc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1397dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1397e0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1397e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1397e4: 0x0  nop
    ctx->pc = 0x1397e4u;
    // NOP
label_1397e8:
    // 0x1397e8: 0x821814  dsllv       $v1, $v0, $a0
    ctx->pc = 0x1397e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1397ec: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1397ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1397f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1397F0u;
    {
        const bool branch_taken_0x1397f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1397F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397F0u;
        // 0x1397f4: 0x2483fff8  addiu       $v1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397f0) {
            ctx->pc = 0x139808u;
            goto label_139808;
        }
    }
    ctx->pc = 0x1397F8u;
    // 0x1397f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1397f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1397fc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1397fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x139800: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x139800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x139804: 0x0  nop
    ctx->pc = 0x139804u;
    // NOP
label_139808:
    // 0x139808: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x139808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13980c: 0x2c83000f  sltiu       $v1, $a0, 0xF
    ctx->pc = 0x13980cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x139810: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x139810u;
    {
        const bool branch_taken_0x139810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x139810) {
            ctx->pc = 0x1397E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1397e8;
        }
    }
    ctx->pc = 0x139818u;
label_139818:
    // 0x139818: 0x10a00081  beqz        $a1, . + 4 + (0x81 << 2)
    ctx->pc = 0x139818u;
    {
        const bool branch_taken_0x139818 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139818u;
        // 0x13981c: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139818) {
            ctx->pc = 0x139A20u;
            goto label_139a20;
        }
    }
    ctx->pc = 0x139820u;
    // 0x139820: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x139820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x139824: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x139824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x139828: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x139828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13982c: 0x2a23821  addu        $a3, $s5, $v0
    ctx->pc = 0x13982cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x139830: 0x8ce40a58  lw          $a0, 0xA58($a3)
    ctx->pc = 0x139830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2648)));
    // 0x139834: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x139834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x139838: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x139838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13983c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x13983cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x139840: 0xace30a58  sw          $v1, 0xA58($a3)
    ctx->pc = 0x139840u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2648), GPR_U32(ctx, 3));
    // 0x139844: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x139844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x139848: 0x8ce20ecc  lw          $v0, 0xECC($a3)
    ctx->pc = 0x139848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3788)));
    // 0x13984c: 0xc049522  jal         func_125488
    ctx->pc = 0x13984Cu;
    SET_GPR_U32(ctx, 31, 0x139854u);
    ctx->pc = 0x139850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13984Cu;
    // 0x139850: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x13984Cu, 0x139854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139854u;
label_139854:
    // 0x139854: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x139854u;
    {
        const bool branch_taken_0x139854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139854) {
            ctx->pc = 0x139A20u;
            goto label_139a20;
        }
    }
    ctx->pc = 0x13985Cu;
    // 0x13985c: 0x0  nop
    ctx->pc = 0x13985cu;
    // NOP
label_139860:
    // 0x139860: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x139860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x139864: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x139864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x139868: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x139868u;
    {
        const bool branch_taken_0x139868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139868) {
            ctx->pc = 0x1398A8u;
            goto label_1398a8;
        }
    }
    ctx->pc = 0x139870u;
    // 0x139870: 0x964408dc  lhu         $a0, 0x8DC($s2)
    ctx->pc = 0x139870u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2268)));
    // 0x139874: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x139874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x139878: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x139878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x13987c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x13987cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x139880: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x139880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x139884: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x139884u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x139888: 0xa64308dc  sh          $v1, 0x8DC($s2)
    ctx->pc = 0x139888u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2268), (uint16_t)GPR_U32(ctx, 3));
    // 0x13988c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13988cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x139890: 0x8e220bd0  lw          $v0, 0xBD0($s1)
    ctx->pc = 0x139890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3024)));
    // 0x139894: 0xc049522  jal         func_125488
    ctx->pc = 0x139894u;
    SET_GPR_U32(ctx, 31, 0x13989Cu);
    ctx->pc = 0x139898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139894u;
    // 0x139898: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x139894u, 0x13989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13989Cu;
label_13989c:
    // 0x13989c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x13989Cu;
    {
        const bool branch_taken_0x13989c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13989c) {
            ctx->pc = 0x139A20u;
            goto label_139a20;
        }
    }
    ctx->pc = 0x1398A4u;
    // 0x1398a4: 0x0  nop
    ctx->pc = 0x1398a4u;
    // NOP
label_1398a8:
    // 0x1398a8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1398a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1398ac: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1398ACu;
    {
        const bool branch_taken_0x1398ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1398ac) {
            ctx->pc = 0x1399A0u;
            goto label_1399a0;
        }
    }
    ctx->pc = 0x1398B4u;
    // 0x1398b4: 0x9644085c  lhu         $a0, 0x85C($s2)
    ctx->pc = 0x1398b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2140)));
    // 0x1398b8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1398b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1398bc: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x1398bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1398c0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1398c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1398c4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1398c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1398c8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1398c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1398cc: 0xa643085c  sh          $v1, 0x85C($s2)
    ctx->pc = 0x1398ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2140), (uint16_t)GPR_U32(ctx, 3));
    // 0x1398d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1398d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1398d4: 0x8e220ad0  lw          $v0, 0xAD0($s1)
    ctx->pc = 0x1398d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2768)));
    // 0x1398d8: 0xc049522  jal         func_125488
    ctx->pc = 0x1398D8u;
    SET_GPR_U32(ctx, 31, 0x1398E0u);
    ctx->pc = 0x1398DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1398D8u;
    // 0x1398dc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1398D8u, 0x1398E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1398E0u;
label_1398e0:
    // 0x1398e0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1398e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1398e4: 0xc4216ad4  lwc1        $f1, 0x6AD4($at)
    ctx->pc = 0x1398e4u;
    { uint32_t bits = FAST_READ32(0x7E6AD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1398e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1398e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1398ec: 0x0  nop
    ctx->pc = 0x1398ecu;
    // NOP
    // 0x1398f0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1398f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1398f4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1398F4u;
    {
        const bool branch_taken_0x1398f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1398f4) {
            ctx->pc = 0x139948u;
            goto label_139948;
        }
    }
    ctx->pc = 0x1398FCu;
    // 0x1398fc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1398fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139900: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x139900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x139904: 0xe4206ad4  swc1        $f0, 0x6AD4($at)
    ctx->pc = 0x139904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7E6AD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6AD4u, _value); } while (0); }
    // 0x139908: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x139908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x13990c: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x13990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139910: 0xc4206ad4  lwc1        $f0, 0x6AD4($at)
    ctx->pc = 0x139910u;
    { uint32_t bits = FAST_READ32(0x7E6AD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139914: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x139914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139918: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x139918u;
    {
        const bool branch_taken_0x139918 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139918u;
        // 0x13991c: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139918) {
            ctx->pc = 0x139928u;
            goto label_139928;
        }
    }
    ctx->pc = 0x139920u;
    // 0x139920: 0xe4216ad4  swc1        $f1, 0x6AD4($at)
    ctx->pc = 0x139920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 27348), bits); }
    // 0x139924: 0x0  nop
    ctx->pc = 0x139924u;
    // NOP
label_139928:
    // 0x139928: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x139928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x13992c: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x13992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139930: 0xc4206ad4  lwc1        $f0, 0x6AD4($at)
    ctx->pc = 0x139930u;
    { uint32_t bits = FAST_READ32(0x7E6AD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139934: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x139934u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139938: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x139938u;
    {
        const bool branch_taken_0x139938 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139938u;
        // 0x13993c: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139938) {
            ctx->pc = 0x139A20u;
            goto label_139a20;
        }
    }
    ctx->pc = 0x139940u;
    // 0x139940: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x139940u;
    {
        const bool branch_taken_0x139940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139940u;
        // 0x139944: 0xe4216ad4  swc1        $f1, 0x6AD4($at) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 27348), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139940) {
            ctx->pc = 0x139A20u;
            goto label_139a20;
        }
    }
    ctx->pc = 0x139948u;
label_139948:
    // 0x139948: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x139948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13994c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13994cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139950: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x139950u;
    {
        const bool branch_taken_0x139950 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x139954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139950u;
        // 0x139954: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139950) {
            ctx->pc = 0x139960u;
            goto label_139960;
        }
    }
    ctx->pc = 0x139958u;
    // 0x139958: 0xe4206ad4  swc1        $f0, 0x6AD4($at)
    ctx->pc = 0x139958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 27348), bits); }
    // 0x13995c: 0x0  nop
    ctx->pc = 0x13995cu;
    // NOP
label_139960:
    // 0x139960: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x139960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x139964: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x139964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139968: 0xc4206ad4  lwc1        $f0, 0x6AD4($at)
    ctx->pc = 0x139968u;
    { uint32_t bits = FAST_READ32(0x7E6AD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13996c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13996cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139970: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x139970u;
    {
        const bool branch_taken_0x139970 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x139974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139970u;
        // 0x139974: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139970) {
            ctx->pc = 0x139980u;
            goto label_139980;
        }
    }
    ctx->pc = 0x139978u;
    // 0x139978: 0xe4216ad4  swc1        $f1, 0x6AD4($at)
    ctx->pc = 0x139978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 27348), bits); }
    // 0x13997c: 0x0  nop
    ctx->pc = 0x13997cu;
    // NOP
label_139980:
    // 0x139980: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x139980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x139984: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x139984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139988: 0xc4206ad4  lwc1        $f0, 0x6AD4($at)
    ctx->pc = 0x139988u;
    { uint32_t bits = FAST_READ32(0x7E6AD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13998c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13998cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139990: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x139990u;
    {
        const bool branch_taken_0x139990 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x139994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139990u;
        // 0x139994: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139990) {
            ctx->pc = 0x139A20u;
            goto label_139a20;
        }
    }
    ctx->pc = 0x139998u;
    // 0x139998: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x139998u;
    {
        const bool branch_taken_0x139998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139998u;
        // 0x13999c: 0xe4216ad4  swc1        $f1, 0x6AD4($at) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 27348), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139998) {
            ctx->pc = 0x139A20u;
            goto label_139a20;
        }
    }
    ctx->pc = 0x1399A0u;
label_1399a0:
    // 0x1399a0: 0x3082ff00  andi        $v0, $a0, 0xFF00
    ctx->pc = 0x1399a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x1399a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1399A4u;
    {
        const bool branch_taken_0x1399a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1399a4) {
            ctx->pc = 0x1399E0u;
            goto label_1399e0;
        }
    }
    ctx->pc = 0x1399ACu;
    // 0x1399ac: 0x964408dc  lhu         $a0, 0x8DC($s2)
    ctx->pc = 0x1399acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2268)));
    // 0x1399b0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1399b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1399b4: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x1399b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1399b8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1399b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1399bc: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1399bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1399c0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1399c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1399c4: 0xa64308dc  sh          $v1, 0x8DC($s2)
    ctx->pc = 0x1399c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2268), (uint16_t)GPR_U32(ctx, 3));
    // 0x1399c8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1399c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1399cc: 0x8e220bd0  lw          $v0, 0xBD0($s1)
    ctx->pc = 0x1399ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3024)));
    // 0x1399d0: 0xc049522  jal         func_125488
    ctx->pc = 0x1399D0u;
    SET_GPR_U32(ctx, 31, 0x1399D8u);
    ctx->pc = 0x1399D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1399D0u;
    // 0x1399d4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1399D0u, 0x1399D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1399D8u;
label_1399d8:
    // 0x1399d8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1399D8u;
    {
        const bool branch_taken_0x1399d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1399d8) {
            ctx->pc = 0x139A20u;
            goto label_139a20;
        }
    }
    ctx->pc = 0x1399E0u;
label_1399e0:
    // 0x1399e0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1399e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1399e4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1399e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1399e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1399E8u;
    {
        const bool branch_taken_0x1399e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1399e8) {
            ctx->pc = 0x139A20u;
            goto label_139a20;
        }
    }
    ctx->pc = 0x1399F0u;
    // 0x1399f0: 0x9644095c  lhu         $a0, 0x95C($s2)
    ctx->pc = 0x1399f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2396)));
    // 0x1399f4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1399f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1399f8: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x1399f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1399fc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1399fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x139a00: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x139a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x139a04: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x139a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x139a08: 0xa643095c  sh          $v1, 0x95C($s2)
    ctx->pc = 0x139a08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2396), (uint16_t)GPR_U32(ctx, 3));
    // 0x139a0c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x139a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x139a10: 0x8e220cd0  lw          $v0, 0xCD0($s1)
    ctx->pc = 0x139a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3280)));
    // 0x139a14: 0xc049522  jal         func_125488
    ctx->pc = 0x139A14u;
    SET_GPR_U32(ctx, 31, 0x139A1Cu);
    ctx->pc = 0x139A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139A14u;
    // 0x139a18: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x139A14u, 0x139A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A1Cu;
label_139a1c:
    // 0x139a1c: 0x0  nop
    ctx->pc = 0x139a1cu;
    // NOP
label_139a20:
    // 0x139a20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x139a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x139a24: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x139a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x139a28: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x139a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x139a2c: 0x1440ff4c  bnez        $v0, . + 4 + (-0xB4 << 2)
    ctx->pc = 0x139A2Cu;
    {
        const bool branch_taken_0x139a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A2Cu;
        // 0x139a30: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a2c) {
            ctx->pc = 0x139760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_139760;
        }
    }
    ctx->pc = 0x139A34u;
    // 0x139a34: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x139a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x139a38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x139a3c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x139a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x139a40: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x139a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x139a44: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x139a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x139a48: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x139a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x139a4c: 0x96a30006  lhu         $v1, 0x6($s5)
    ctx->pc = 0x139a4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x139a50: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x139a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x139a54: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x139a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x139a58: 0x1440fe93  bnez        $v0, . + 4 + (-0x16D << 2)
    ctx->pc = 0x139A58u;
    {
        const bool branch_taken_0x139a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139a58) {
            ctx->pc = 0x1394A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1394a8;
        }
    }
    ctx->pc = 0x139A60u;
label_139a60:
    // 0x139a60: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x139a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x139a64: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x139a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x139a68: 0xac226ad8  sw          $v0, 0x6AD8($at)
    ctx->pc = 0x139a68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6AD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6AD8u, _value); } while (0);
    // 0x139a6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x139a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139a70:
    // 0x139a70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x139a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x139a74: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x139a74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x139a78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x139a78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x139a7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x139a7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x139a80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x139a80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x139a84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x139a84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139a88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x139a88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139a8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x139a8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139a90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139a94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139a98: 0x3e00008  jr          $ra
    ctx->pc = 0x139A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A98u;
        // 0x139a9c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139AA0u;
}

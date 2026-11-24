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

// Function: sub_00377C80
// Address: 0x377c80 - 0x377e24
void sub_00377C80_0x377c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377C80_0x377c80");
#endif

    switch (ctx->pc) {
        case 0x377ce0u: goto label_377ce0;
        case 0x377d08u: goto label_377d08;
        case 0x377d30u: goto label_377d30;
        case 0x377dd8u: goto label_377dd8;
        case 0x377de8u: goto label_377de8;
        default: break;
    }

    ctx->pc = 0x377c80u;

    // 0x377c80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x377c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x377c84: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x377c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x377c88: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x377c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x377c8c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x377c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x377c90: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x377c90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377c94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x377c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x377c98: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x377c98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377c9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x377c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x377ca0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x377ca0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377ca4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x377ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x377ca8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x377ca8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377cac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x377cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x377cb0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x377cb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377cb4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x377cb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x377cbc: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x377cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x377cc0: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x377cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377cc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x377cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377cc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377ccc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x377cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377cd0: 0x240705c0  addiu       $a3, $zero, 0x5C0
    ctx->pc = 0x377cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1472));
    // 0x377cd4: 0x25087a50  addiu       $t0, $t0, 0x7A50
    ctx->pc = 0x377cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 31312));
    // 0x377cd8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x377CD8u;
    SET_GPR_U32(ctx, 31, 0x377CE0u);
    ctx->pc = 0x377CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377CD8u;
    // 0x377cdc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x377CD8u, 0x377CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377CE0u;
label_377ce0:
    // 0x377ce0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x377ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377ce4: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x377CE4u;
    {
        const bool branch_taken_0x377ce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x377CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377CE4u;
        // 0x377ce8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377ce4) {
            ctx->pc = 0x377DF0u;
            goto label_377df0;
        }
    }
    ctx->pc = 0x377CECu;
    // 0x377cec: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x377cecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377cf0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x377cf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377cf4: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x377cf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x377cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377cfc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x377cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x377d00: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x377D00u;
    SET_GPR_U32(ctx, 31, 0x377D08u);
    ctx->pc = 0x377D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D00u;
    // 0x377d04: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x377D00u, 0x377D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377D08u;
label_377d08:
    // 0x377d08: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x377d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x377d0c: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x377d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x377d10: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x377d10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x377d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x377d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377d18: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x377d18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x377d1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x377d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377d20: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x377d20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x377d24: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x377d24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x377d28: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x377D28u;
    SET_GPR_U32(ctx, 31, 0x377D30u);
    ctx->pc = 0x377D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D28u;
    // 0x377d2c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x377D28u, 0x377D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377D30u;
label_377d30:
    // 0x377d30: 0xae0005a0  sw          $zero, 0x5A0($s0)
    ctx->pc = 0x377d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 0));
    // 0x377d34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x377d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x377d38: 0xae0205a4  sw          $v0, 0x5A4($s0)
    ctx->pc = 0x377d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1444), GPR_U32(ctx, 2));
    // 0x377d3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x377d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x377d40: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x377d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x377d44: 0xa21705a8  sb          $s7, 0x5A8($s0)
    ctx->pc = 0x377d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1448), (uint8_t)GPR_U32(ctx, 23));
    // 0x377d48: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x377d48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x377d4c: 0xa21105a9  sb          $s1, 0x5A9($s0)
    ctx->pc = 0x377d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1449), (uint8_t)GPR_U32(ctx, 17));
    // 0x377d50: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x377d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x377d54: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x377d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x377d58: 0x24421ba8  addiu       $v0, $v0, 0x1BA8
    ctx->pc = 0x377d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7080));
    // 0x377d5c: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x377d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x377d60: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x377d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377d64: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x377d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x377d68: 0x24421bac  addiu       $v0, $v0, 0x1BAC
    ctx->pc = 0x377d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7084));
    // 0x377d6c: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x377d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x377d70: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x377d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x377d74: 0x24421bb8  addiu       $v0, $v0, 0x1BB8
    ctx->pc = 0x377d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7096));
    // 0x377d78: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x377d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x377d7c: 0xe60005b0  swc1        $f0, 0x5B0($s0)
    ctx->pc = 0x377d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1456), bits); }
    // 0x377d80: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x377d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x377d84: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x377d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x377d88: 0x24421ba0  addiu       $v0, $v0, 0x1BA0
    ctx->pc = 0x377d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7072));
    // 0x377d8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x377d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x377d90: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x377d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x377d94: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x377d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x377d98: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x377d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377d9c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x377d9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x377da0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x377da0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x377da4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x377da4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x377da8: 0xe60005b4  swc1        $f0, 0x5B4($s0)
    ctx->pc = 0x377da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1460), bits); }
    // 0x377dac: 0xa60305aa  sh          $v1, 0x5AA($s0)
    ctx->pc = 0x377dacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1450), (uint16_t)GPR_U32(ctx, 3));
    // 0x377db0: 0xa60005ac  sh          $zero, 0x5AC($s0)
    ctx->pc = 0x377db0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1452), (uint16_t)GPR_U32(ctx, 0));
    // 0x377db4: 0xae0005b8  sw          $zero, 0x5B8($s0)
    ctx->pc = 0x377db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 0));
    // 0x377db8: 0xae0005bc  sw          $zero, 0x5BC($s0)
    ctx->pc = 0x377db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1468), GPR_U32(ctx, 0));
    // 0x377dbc: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x377dbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x377dc0: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x377dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x377dc4: 0x78235c70  lq          $v1, 0x5C70($at)
    ctx->pc = 0x377dc4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C70u));
    // 0x377dc8: 0x7e030590  sq          $v1, 0x590($s0)
    ctx->pc = 0x377dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1424), GPR_VEC(ctx, 3));
    // 0x377dcc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x377dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x377dd0: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x377DD0u;
    SET_GPR_U32(ctx, 31, 0x377DD8u);
    ctx->pc = 0x377DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377DD0u;
    // 0x377dd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x377DD0u, 0x377DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377DD8u;
label_377dd8:
    // 0x377dd8: 0x3c02c475  lui         $v0, 0xC475
    ctx->pc = 0x377dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50293 << 16));
    // 0x377ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x377ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377de0: 0xc0ddeb4  jal         func_377AD0
    ctx->pc = 0x377DE0u;
    SET_GPR_U32(ctx, 31, 0x377DE8u);
    ctx->pc = 0x377DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377DE0u;
    // 0x377de4: 0xae0200a4  sw          $v0, 0xA4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377AD0u, 0x377DE0u, 0x377DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377DE8u;
label_377de8:
    // 0x377de8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x377DE8u;
    {
        const bool branch_taken_0x377de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377DE8u;
        // 0x377dec: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377de8) {
            ctx->pc = 0x377DF8u;
            goto label_377df8;
        }
    }
    ctx->pc = 0x377DF0u;
label_377df0:
    // 0x377df0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x377df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377df4: 0x0  nop
    ctx->pc = 0x377df4u;
    // NOP
label_377df8:
    // 0x377df8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x377df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x377dfc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x377dfcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x377e00: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x377e00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x377e04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x377e04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377e08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x377e08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377e0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x377e0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377e10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x377e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377e14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377e18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x377E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E1Cu;
        // 0x377e20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377E24u;
}

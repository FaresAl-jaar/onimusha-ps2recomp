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

// Function: sub_003C7CB0
// Address: 0x3c7cb0 - 0x3c7e54
void sub_003C7CB0_0x3c7cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7CB0_0x3c7cb0");
#endif

    switch (ctx->pc) {
        case 0x3c7d10u: goto label_3c7d10;
        case 0x3c7d38u: goto label_3c7d38;
        case 0x3c7d60u: goto label_3c7d60;
        case 0x3c7e08u: goto label_3c7e08;
        case 0x3c7e18u: goto label_3c7e18;
        default: break;
    }

    ctx->pc = 0x3c7cb0u;

    // 0x3c7cb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3c7cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3c7cb4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3c7cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3c7cb8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3c7cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3c7cbc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3c7cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3c7cc0: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3c7cc0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7cc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3c7cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3c7cc8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3c7cc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7ccc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3c7cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3c7cd0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3c7cd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7cd4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c7cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c7cd8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3c7cd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7cdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c7cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c7ce0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3c7ce0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7ce4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3c7ce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c7ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c7cec: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x3c7cecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x3c7cf0: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x3c7cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7cf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3c7cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7cf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c7cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7cfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c7cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7d00: 0x240705c0  addiu       $a3, $zero, 0x5C0
    ctx->pc = 0x3c7d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1472));
    // 0x3c7d04: 0x250879d0  addiu       $t0, $t0, 0x79D0
    ctx->pc = 0x3c7d04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 31184));
    // 0x3c7d08: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3C7D08u;
    SET_GPR_U32(ctx, 31, 0x3C7D10u);
    ctx->pc = 0x3C7D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7D08u;
    // 0x3c7d0c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3C7D08u, 0x3C7D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7D10u;
label_3c7d10:
    // 0x3c7d10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c7d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7d14: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x3C7D14u;
    {
        const bool branch_taken_0x3c7d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D14u;
        // 0x3c7d18: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7d14) {
            ctx->pc = 0x3C7E20u;
            goto label_3c7e20;
        }
    }
    ctx->pc = 0x3C7D1Cu;
    // 0x3c7d1c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3c7d1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7d20: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3c7d20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7d24: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3c7d24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c7d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7d2c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3c7d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3c7d30: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3C7D30u;
    SET_GPR_U32(ctx, 31, 0x3C7D38u);
    ctx->pc = 0x3C7D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7D30u;
    // 0x3c7d34: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3C7D30u, 0x3C7D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7D38u;
label_3c7d38:
    // 0x3c7d38: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3c7d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3c7d3c: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x3c7d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x3c7d40: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x3c7d40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c7d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c7d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7d48: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3c7d48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c7d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c7d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c7d50: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3c7d50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c7d54: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3c7d54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c7d58: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3C7D58u;
    SET_GPR_U32(ctx, 31, 0x3C7D60u);
    ctx->pc = 0x3C7D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7D58u;
    // 0x3c7d5c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3C7D58u, 0x3C7D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7D60u;
label_3c7d60:
    // 0x3c7d60: 0xae0005a0  sw          $zero, 0x5A0($s0)
    ctx->pc = 0x3c7d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 0));
    // 0x3c7d64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c7d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c7d68: 0xae0205a4  sw          $v0, 0x5A4($s0)
    ctx->pc = 0x3c7d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1444), GPR_U32(ctx, 2));
    // 0x3c7d6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c7d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c7d70: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3c7d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3c7d74: 0xa21705a8  sb          $s7, 0x5A8($s0)
    ctx->pc = 0x3c7d74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1448), (uint8_t)GPR_U32(ctx, 23));
    // 0x3c7d78: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x3c7d78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3c7d7c: 0xa21105a9  sb          $s1, 0x5A9($s0)
    ctx->pc = 0x3c7d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1449), (uint8_t)GPR_U32(ctx, 17));
    // 0x3c7d80: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c7d84: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3c7d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3c7d88: 0x24422e78  addiu       $v0, $v0, 0x2E78
    ctx->pc = 0x3c7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11896));
    // 0x3c7d8c: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x3c7d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c7d90: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x3c7d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7d94: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c7d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c7d98: 0x24422e7c  addiu       $v0, $v0, 0x2E7C
    ctx->pc = 0x3c7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11900));
    // 0x3c7d9c: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x3c7d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c7da0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c7da4: 0x24422e88  addiu       $v0, $v0, 0x2E88
    ctx->pc = 0x3c7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11912));
    // 0x3c7da8: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x3c7da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c7dac: 0xe60005b0  swc1        $f0, 0x5B0($s0)
    ctx->pc = 0x3c7dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1456), bits); }
    // 0x3c7db0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c7db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c7db4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3c7db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7db8: 0x24422e70  addiu       $v0, $v0, 0x2E70
    ctx->pc = 0x3c7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11888));
    // 0x3c7dbc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c7dc0: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3c7dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3c7dc4: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x3c7dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7dc8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x3c7dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7dcc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3c7dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3c7dd0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c7dd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c7dd4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3c7dd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3c7dd8: 0xe60005b4  swc1        $f0, 0x5B4($s0)
    ctx->pc = 0x3c7dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1460), bits); }
    // 0x3c7ddc: 0xa60305aa  sh          $v1, 0x5AA($s0)
    ctx->pc = 0x3c7ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1450), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c7de0: 0xa60005ac  sh          $zero, 0x5AC($s0)
    ctx->pc = 0x3c7de0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1452), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c7de4: 0xae0005b8  sw          $zero, 0x5B8($s0)
    ctx->pc = 0x3c7de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 0));
    // 0x3c7de8: 0xae0005bc  sw          $zero, 0x5BC($s0)
    ctx->pc = 0x3c7de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1468), GPR_U32(ctx, 0));
    // 0x3c7dec: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x3c7decu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c7df0: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x3c7df0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x3c7df4: 0x78235c70  lq          $v1, 0x5C70($at)
    ctx->pc = 0x3c7df4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C70u));
    // 0x3c7df8: 0x7e030590  sq          $v1, 0x590($s0)
    ctx->pc = 0x3c7df8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1424), GPR_VEC(ctx, 3));
    // 0x3c7dfc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3c7dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c7e00: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3C7E00u;
    SET_GPR_U32(ctx, 31, 0x3C7E08u);
    ctx->pc = 0x3C7E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7E00u;
    // 0x3c7e04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3C7E00u, 0x3C7E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7E08u;
label_3c7e08:
    // 0x3c7e08: 0x3c02c475  lui         $v0, 0xC475
    ctx->pc = 0x3c7e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50293 << 16));
    // 0x3c7e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c7e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7e10: 0xc0f1e94  jal         func_3C7A50
    ctx->pc = 0x3C7E10u;
    SET_GPR_U32(ctx, 31, 0x3C7E18u);
    ctx->pc = 0x3C7E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7E10u;
    // 0x3c7e14: 0xae0200a4  sw          $v0, 0xA4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7A50u, 0x3C7E10u, 0x3C7E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7E18u;
label_3c7e18:
    // 0x3c7e18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C7E18u;
    {
        const bool branch_taken_0x3c7e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7E18u;
        // 0x3c7e1c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7e18) {
            ctx->pc = 0x3C7E28u;
            goto label_3c7e28;
        }
    }
    ctx->pc = 0x3C7E20u;
label_3c7e20:
    // 0x3c7e20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c7e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7e24: 0x0  nop
    ctx->pc = 0x3c7e24u;
    // NOP
label_3c7e28:
    // 0x3c7e28: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3c7e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c7e2c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3c7e2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c7e30: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3c7e30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c7e34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3c7e34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c7e38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3c7e38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c7e3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c7e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c7e40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c7e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c7e44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c7e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c7e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c7e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7E4Cu;
        // 0x3c7e50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7E54u;
}

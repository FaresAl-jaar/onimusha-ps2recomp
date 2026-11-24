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

// Function: sub_003019F0
// Address: 0x3019f0 - 0x301b90
void sub_003019F0_0x3019f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003019F0_0x3019f0");
#endif

    switch (ctx->pc) {
        case 0x301a58u: goto label_301a58;
        case 0x301ad0u: goto label_301ad0;
        default: break;
    }

    ctx->pc = 0x3019f0u;

    // 0x3019f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3019f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3019f4: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x3019f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x3019f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3019f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3019fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3019fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x301a00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x301a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x301a04: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x301a04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x301a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x301a0c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x301a0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a10: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x301a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x301a14: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x301a14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x301a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x301a1c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x301a1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x301a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x301a24: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x301a24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x301a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x301a2c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x301a2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x301a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x301a34: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x301a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a38: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x301a38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x301a3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x301a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a40: 0x2091821  addu        $v1, $s0, $t1
    ctx->pc = 0x301a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x301a44: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x301a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x301a48: 0x8c630194  lw          $v1, 0x194($v1)
    ctx->pc = 0x301a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
    // 0x301a4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x301a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a50: 0xc0a7114  jal         func_29C450
    ctx->pc = 0x301A50u;
    SET_GPR_U32(ctx, 31, 0x301A58u);
    ctx->pc = 0x301A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301A50u;
    // 0x301a54: 0xac430194  sw          $v1, 0x194($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 404), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C450u, 0x301A50u, 0x301A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301A58u;
label_301a58:
    // 0x301a58: 0xa2d5052c  sb          $s5, 0x52C($s6)
    ctx->pc = 0x301a58u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1324), (uint8_t)GPR_U32(ctx, 21));
    // 0x301a5c: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x301a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x301a60: 0xa2d4052d  sb          $s4, 0x52D($s6)
    ctx->pc = 0x301a60u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1325), (uint8_t)GPR_U32(ctx, 20));
    // 0x301a64: 0xa2c00520  sb          $zero, 0x520($s6)
    ctx->pc = 0x301a64u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1312), (uint8_t)GPR_U32(ctx, 0));
    // 0x301a68: 0xa2d3052e  sb          $s3, 0x52E($s6)
    ctx->pc = 0x301a68u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1326), (uint8_t)GPR_U32(ctx, 19));
    // 0x301a6c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x301a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x301a70: 0xaec30530  sw          $v1, 0x530($s6)
    ctx->pc = 0x301a70u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1328), GPR_U32(ctx, 3));
    // 0x301a74: 0xaec00518  sw          $zero, 0x518($s6)
    ctx->pc = 0x301a74u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1304), GPR_U32(ctx, 0));
    // 0x301a78: 0xaec00534  sw          $zero, 0x534($s6)
    ctx->pc = 0x301a78u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1332), GPR_U32(ctx, 0));
    // 0x301a7c: 0x8c420858  lw          $v0, 0x858($v0)
    ctx->pc = 0x301a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2136)));
    // 0x301a80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x301A80u;
    {
        const bool branch_taken_0x301a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301a80) {
            ctx->pc = 0x301A90u;
            goto label_301a90;
        }
    }
    ctx->pc = 0x301A88u;
    // 0x301a88: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x301a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x301a8c: 0xaec20534  sw          $v0, 0x534($s6)
    ctx->pc = 0x301a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1332), GPR_U32(ctx, 2));
label_301a90:
    // 0x301a90: 0xa2d20538  sb          $s2, 0x538($s6)
    ctx->pc = 0x301a90u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1336), (uint8_t)GPR_U32(ctx, 18));
    // 0x301a94: 0xa2c0052f  sb          $zero, 0x52F($s6)
    ctx->pc = 0x301a94u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1327), (uint8_t)GPR_U32(ctx, 0));
    // 0x301a98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a9c: 0xa2c00523  sb          $zero, 0x523($s6)
    ctx->pc = 0x301a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1315), (uint8_t)GPR_U32(ctx, 0));
    // 0x301aa0: 0xa2c00522  sb          $zero, 0x522($s6)
    ctx->pc = 0x301aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1314), (uint8_t)GPR_U32(ctx, 0));
    // 0x301aa4: 0xa2c00521  sb          $zero, 0x521($s6)
    ctx->pc = 0x301aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x301aa8: 0xa6c00512  sh          $zero, 0x512($s6)
    ctx->pc = 0x301aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1298), (uint16_t)GPR_U32(ctx, 0));
    // 0x301aac: 0xa6c00510  sh          $zero, 0x510($s6)
    ctx->pc = 0x301aacu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x301ab0: 0xa2c00514  sb          $zero, 0x514($s6)
    ctx->pc = 0x301ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x301ab4: 0xa2c00515  sb          $zero, 0x515($s6)
    ctx->pc = 0x301ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x301ab8: 0xa6c0052a  sh          $zero, 0x52A($s6)
    ctx->pc = 0x301ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1322), (uint16_t)GPR_U32(ctx, 0));
    // 0x301abc: 0xa6c00528  sh          $zero, 0x528($s6)
    ctx->pc = 0x301abcu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1320), (uint16_t)GPR_U32(ctx, 0));
    // 0x301ac0: 0xa6c00526  sh          $zero, 0x526($s6)
    ctx->pc = 0x301ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1318), (uint16_t)GPR_U32(ctx, 0));
    // 0x301ac4: 0xa2c00539  sb          $zero, 0x539($s6)
    ctx->pc = 0x301ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1337), (uint8_t)GPR_U32(ctx, 0));
    // 0x301ac8: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x301AC8u;
    SET_GPR_U32(ctx, 31, 0x301AD0u);
    ctx->pc = 0x301ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301AC8u;
    // 0x301acc: 0xa2c0053a  sb          $zero, 0x53A($s6) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 22), 1338), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x301AC8u, 0x301AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301AD0u;
label_301ad0:
    // 0x301ad0: 0xa2c2053b  sb          $v0, 0x53B($s6)
    ctx->pc = 0x301ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1339), (uint8_t)GPR_U32(ctx, 2));
    // 0x301ad4: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x301ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x301ad8: 0xa6c3053c  sh          $v1, 0x53C($s6)
    ctx->pc = 0x301ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1340), (uint16_t)GPR_U32(ctx, 3));
    // 0x301adc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x301adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x301ae0: 0xa2c3053e  sb          $v1, 0x53E($s6)
    ctx->pc = 0x301ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1342), (uint8_t)GPR_U32(ctx, 3));
    // 0x301ae4: 0xa2c0053f  sb          $zero, 0x53F($s6)
    ctx->pc = 0x301ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1343), (uint8_t)GPR_U32(ctx, 0));
    // 0x301ae8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x301ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x301aec: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x301aecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x301af0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x301AF0u;
    {
        const bool branch_taken_0x301af0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x301af0) {
            ctx->pc = 0x301B08u;
            goto label_301b08;
        }
    }
    ctx->pc = 0x301AF8u;
    // 0x301af8: 0x92c3053f  lbu         $v1, 0x53F($s6)
    ctx->pc = 0x301af8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1343)));
    // 0x301afc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x301afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x301b00: 0xa2c3053f  sb          $v1, 0x53F($s6)
    ctx->pc = 0x301b00u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1343), (uint8_t)GPR_U32(ctx, 3));
    // 0x301b04: 0x0  nop
    ctx->pc = 0x301b04u;
    // NOP
label_301b08:
    // 0x301b08: 0xa2c00002  sb          $zero, 0x2($s6)
    ctx->pc = 0x301b08u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x301b0c: 0xa2c00003  sb          $zero, 0x3($s6)
    ctx->pc = 0x301b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x301b10: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x301b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x301b14: 0x7ae50000  lq          $a1, 0x0($s7)
    ctx->pc = 0x301b14u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x301b18: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x301b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x301b1c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x301b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x301b20: 0x7ec50020  sq          $a1, 0x20($s6)
    ctx->pc = 0x301b20u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), GPR_VEC(ctx, 5));
    // 0x301b24: 0xaec4002c  sw          $a0, 0x2C($s6)
    ctx->pc = 0x301b24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 44), GPR_U32(ctx, 4));
    // 0x301b28: 0x7ac40020  lq          $a0, 0x20($s6)
    ctx->pc = 0x301b28u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x301b2c: 0x7ec40080  sq          $a0, 0x80($s6)
    ctx->pc = 0x301b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 128), GPR_VEC(ctx, 4));
    // 0x301b30: 0x78245c10  lq          $a0, 0x5C10($at)
    ctx->pc = 0x301b30u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x665C10u));
    // 0x301b34: 0x7ec40090  sq          $a0, 0x90($s6)
    ctx->pc = 0x301b34u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 144), GPR_VEC(ctx, 4));
    // 0x301b38: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x301b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x301b3c: 0x78245c10  lq          $a0, 0x5C10($at)
    ctx->pc = 0x301b3cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x665C10u));
    // 0x301b40: 0x7ec400a0  sq          $a0, 0xA0($s6)
    ctx->pc = 0x301b40u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 160), GPR_VEC(ctx, 4));
    // 0x301b44: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x301b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x301b48: 0x78245c10  lq          $a0, 0x5C10($at)
    ctx->pc = 0x301b48u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x665C10u));
    // 0x301b4c: 0x7ec400b0  sq          $a0, 0xB0($s6)
    ctx->pc = 0x301b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 176), GPR_VEC(ctx, 4));
    // 0x301b50: 0xa6c000c6  sh          $zero, 0xC6($s6)
    ctx->pc = 0x301b50u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 198), (uint16_t)GPR_U32(ctx, 0));
    // 0x301b54: 0xa6c000c4  sh          $zero, 0xC4($s6)
    ctx->pc = 0x301b54u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 196), (uint16_t)GPR_U32(ctx, 0));
    // 0x301b58: 0xa6c000c2  sh          $zero, 0xC2($s6)
    ctx->pc = 0x301b58u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 194), (uint16_t)GPR_U32(ctx, 0));
    // 0x301b5c: 0xa6c000c0  sh          $zero, 0xC0($s6)
    ctx->pc = 0x301b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x301b60: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x301b60u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x301b64: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x301b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x301b68: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x301b68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x301b6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x301b6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x301b70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x301b70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x301b74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x301b74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x301b78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x301b78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x301b7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x301b7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x301b80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x301b80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x301b84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x301b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301b88: 0x3e00008  jr          $ra
    ctx->pc = 0x301B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301B88u;
        // 0x301b8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301B90u;
}

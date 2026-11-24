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

// Function: sub_001F5838
// Address: 0x1f5838 - 0x1f59a4
void sub_001F5838_0x1f5838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5838_0x1f5838");
#endif

    ctx->pc = 0x1f5838u;

    // 0x1f5838: 0x24830160  addiu       $v1, $a0, 0x160
    ctx->pc = 0x1f5838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x1f583c: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x1f583cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x1f5840: 0x8c6502c4  lw          $a1, 0x2C4($v1)
    ctx->pc = 0x1f5840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 708)));
    // 0x1f5844: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f5844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5848: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1f5848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1f584c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1f584cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1f5850: 0x8c6202c8  lw          $v0, 0x2C8($v1)
    ctx->pc = 0x1f5850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 712)));
    // 0x1f5854: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f5854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1f5858: 0x8c6502cc  lw          $a1, 0x2CC($v1)
    ctx->pc = 0x1f5858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 716)));
    // 0x1f585c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1f585cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1f5860: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x1f5860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1f5864: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1f5864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1f5868: 0x8c6500dc  lw          $a1, 0xDC($v1)
    ctx->pc = 0x1f5868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x1f586c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1f586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1f5870: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x1f5870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x1f5874: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1f5874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1f5878: 0x8c6500bc  lw          $a1, 0xBC($v1)
    ctx->pc = 0x1f5878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1f587c: 0x8c6600e0  lw          $a2, 0xE0($v1)
    ctx->pc = 0x1f587cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x1f5880: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x1f5880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x1f5884: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x1f5884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x1f5888: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x1f5888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1f588c: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1f588cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x1f5890: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x1f5890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x1f5894: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x1f5894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x1f5898: 0x8c6200c8  lw          $v0, 0xC8($v1)
    ctx->pc = 0x1f5898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1f589c: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x1f589cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x1f58a0: 0x8c6500cc  lw          $a1, 0xCC($v1)
    ctx->pc = 0x1f58a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1f58a4: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x1f58a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x1f58a8: 0x8c62043c  lw          $v0, 0x43C($v1)
    ctx->pc = 0x1f58a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1084)));
    // 0x1f58ac: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f58acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f58b0: 0x8c65042c  lw          $a1, 0x42C($v1)
    ctx->pc = 0x1f58b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1068)));
    // 0x1f58b4: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x1f58b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x1f58b8: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x1f58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x1f58bc: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x1f58bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1f58c0: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x1f58c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x1f58c4: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x1f58c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x1f58c8: 0xac870044  sw          $a3, 0x44($a0)
    ctx->pc = 0x1f58c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 7));
    // 0x1f58cc: 0x8c6202d4  lw          $v0, 0x2D4($v1)
    ctx->pc = 0x1f58ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 724)));
    // 0x1f58d0: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x1f58d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x1f58d4: 0x8c6502d8  lw          $a1, 0x2D8($v1)
    ctx->pc = 0x1f58d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 728)));
    // 0x1f58d8: 0xac85004c  sw          $a1, 0x4C($a0)
    ctx->pc = 0x1f58d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 5));
    // 0x1f58dc: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1f58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1f58e0: 0x8c650134  lw          $a1, 0x134($v1)
    ctx->pc = 0x1f58e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1f58e4: 0x94670080  lhu         $a3, 0x80($v1)
    ctx->pc = 0x1f58e4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x1f58e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1f58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1f58ec: 0x94680084  lhu         $t0, 0x84($v1)
    ctx->pc = 0x1f58ecu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x1f58f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f58f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f58f4: 0x8c66011c  lw          $a2, 0x11C($v1)
    ctx->pc = 0x1f58f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x1f58f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1f58f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1f58fc: 0xa4870050  sh          $a3, 0x50($a0)
    ctx->pc = 0x1f58fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 7));
    // 0x1f5900: 0xa4880052  sh          $t0, 0x52($a0)
    ctx->pc = 0x1f5900u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 8));
    // 0x1f5904: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f5904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f5908: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x1f5908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x1f590c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1f590cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f5910: 0x90a561a0  lbu         $a1, 0x61A0($a1)
    ctx->pc = 0x1f5910u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24992)));
    // 0x1f5914: 0xa0850054  sb          $a1, 0x54($a0)
    ctx->pc = 0x1f5914u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f5918: 0x9062013c  lbu         $v0, 0x13C($v1)
    ctx->pc = 0x1f5918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 316)));
    // 0x1f591c: 0xa0820055  sb          $v0, 0x55($a0)
    ctx->pc = 0x1f591cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5920: 0x9065011c  lbu         $a1, 0x11C($v1)
    ctx->pc = 0x1f5920u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x1f5924: 0xa0850056  sb          $a1, 0x56($a0)
    ctx->pc = 0x1f5924u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f5928: 0x90620134  lbu         $v0, 0x134($v1)
    ctx->pc = 0x1f5928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1f592c: 0xa0820057  sb          $v0, 0x57($a0)
    ctx->pc = 0x1f592cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 87), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5930: 0x906503c4  lbu         $a1, 0x3C4($v1)
    ctx->pc = 0x1f5930u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 964)));
    // 0x1f5934: 0xa0850058  sb          $a1, 0x58($a0)
    ctx->pc = 0x1f5934u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f5938: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x1f5938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1f593c: 0xa0820059  sb          $v0, 0x59($a0)
    ctx->pc = 0x1f593cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5940: 0x90650020  lbu         $a1, 0x20($v1)
    ctx->pc = 0x1f5940u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f5944: 0xa085005a  sb          $a1, 0x5A($a0)
    ctx->pc = 0x1f5944u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f5948: 0x90620064  lbu         $v0, 0x64($v1)
    ctx->pc = 0x1f5948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1f594c: 0xa082005b  sb          $v0, 0x5B($a0)
    ctx->pc = 0x1f594cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5950: 0x90650068  lbu         $a1, 0x68($v1)
    ctx->pc = 0x1f5950u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1f5954: 0xa085005c  sb          $a1, 0x5C($a0)
    ctx->pc = 0x1f5954u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f5958: 0x90620044  lbu         $v0, 0x44($v1)
    ctx->pc = 0x1f5958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1f595c: 0xa082005d  sb          $v0, 0x5D($a0)
    ctx->pc = 0x1f595cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5960: 0x90650048  lbu         $a1, 0x48($v1)
    ctx->pc = 0x1f5960u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1f5964: 0xa085005e  sb          $a1, 0x5E($a0)
    ctx->pc = 0x1f5964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f5968: 0x90620060  lbu         $v0, 0x60($v1)
    ctx->pc = 0x1f5968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1f596c: 0xa082005f  sb          $v0, 0x5F($a0)
    ctx->pc = 0x1f596cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5970: 0x9065006c  lbu         $a1, 0x6C($v1)
    ctx->pc = 0x1f5970u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1f5974: 0xa0850060  sb          $a1, 0x60($a0)
    ctx->pc = 0x1f5974u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f5978: 0x90620070  lbu         $v0, 0x70($v1)
    ctx->pc = 0x1f5978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1f597c: 0xa0820061  sb          $v0, 0x61($a0)
    ctx->pc = 0x1f597cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5980: 0x90650074  lbu         $a1, 0x74($v1)
    ctx->pc = 0x1f5980u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x1f5984: 0xa0850062  sb          $a1, 0x62($a0)
    ctx->pc = 0x1f5984u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 98), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f5988: 0x90620078  lbu         $v0, 0x78($v1)
    ctx->pc = 0x1f5988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x1f598c: 0xa0820063  sb          $v0, 0x63($a0)
    ctx->pc = 0x1f598cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 99), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5990: 0x9065007c  lbu         $a1, 0x7C($v1)
    ctx->pc = 0x1f5990u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1f5994: 0xa0850064  sb          $a1, 0x64($a0)
    ctx->pc = 0x1f5994u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f5998: 0x8c6204ac  lw          $v0, 0x4AC($v1)
    ctx->pc = 0x1f5998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1196)));
    // 0x1f599c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F599Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F59A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F599Cu;
        // 0x1f59a0: 0xac820068  sw          $v0, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F599Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F59A4u;
}

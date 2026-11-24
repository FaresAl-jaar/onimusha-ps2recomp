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

// Function: sub_001FA620
// Address: 0x1fa620 - 0x1fa7d4
void sub_001FA620_0x1fa620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA620_0x1fa620");
#endif

    ctx->pc = 0x1fa620u;

    // 0x1fa620: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fa620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1fa624: 0x3c18004c  lui         $t8, 0x4C
    ctx->pc = 0x1fa624u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)76 << 16));
    // 0x1fa628: 0x2442a7d8  addiu       $v0, $v0, -0x5828
    ctx->pc = 0x1fa628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944728));
    // 0x1fa62c: 0x3c19004c  lui         $t9, 0x4C
    ctx->pc = 0x1fa62cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)76 << 16));
    // 0x1fa630: 0xaf0280cc  sw          $v0, -0x7F34($t8)
    ctx->pc = 0x1fa630u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B80CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B80CCu, _value); } while (0);
    // 0x1fa634: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fa634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1fa638: 0x2442a7e8  addiu       $v0, $v0, -0x5818
    ctx->pc = 0x1fa638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944744));
    // 0x1fa63c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fa63cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fa640: 0xaf2280d0  sw          $v0, -0x7F30($t9)
    ctx->pc = 0x1fa640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B80D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B80D0u, _value); } while (0);
    // 0x1fa644: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fa644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1fa648: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1fa648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1fa64c: 0x3c1e004c  lui         $fp, 0x4C
    ctx->pc = 0x1fa64cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)76 << 16));
    // 0x1fa650: 0x2442a898  addiu       $v0, $v0, -0x5768
    ctx->pc = 0x1fa650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944920));
    // 0x1fa654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa658: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fa658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fa65c: 0x3c11004c  lui         $s1, 0x4C
    ctx->pc = 0x1fa65cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
    // 0x1fa660: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fa660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fa664: 0x3c12004c  lui         $s2, 0x4C
    ctx->pc = 0x1fa664u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)76 << 16));
    // 0x1fa668: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fa668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fa66c: 0x3c13004c  lui         $s3, 0x4C
    ctx->pc = 0x1fa66cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)76 << 16));
    // 0x1fa670: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fa670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fa674: 0x3c14004c  lui         $s4, 0x4C
    ctx->pc = 0x1fa674u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)76 << 16));
    // 0x1fa678: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fa678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fa67c: 0x3c15004c  lui         $s5, 0x4C
    ctx->pc = 0x1fa67cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)76 << 16));
    // 0x1fa680: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1fa680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1fa684: 0x3c16004c  lui         $s6, 0x4C
    ctx->pc = 0x1fa684u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)76 << 16));
    // 0x1fa688: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1fa688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1fa68c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1fa68cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa690: 0xafc280d4  sw          $v0, -0x7F2C($fp)
    ctx->pc = 0x1fa690u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B80D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B80D4u, _value); } while (0);
    // 0x1fa694: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fa694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1fa698: 0x2442aac0  addiu       $v0, $v0, -0x5540
    ctx->pc = 0x1fa698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945472));
    // 0x1fa69c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fa69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1fa6a0: 0xaec280d8  sw          $v0, -0x7F28($s6)
    ctx->pc = 0x1fa6a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B80D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B80D8u, _value); } while (0);
    // 0x1fa6a4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fa6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1fa6a8: 0x2442aac8  addiu       $v0, $v0, -0x5538
    ctx->pc = 0x1fa6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945480));
    // 0x1fa6ac: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x1fa6acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x1fa6b0: 0xaea280dc  sw          $v0, -0x7F24($s5)
    ctx->pc = 0x1fa6b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B80DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B80DCu, _value); } while (0);
    // 0x1fa6b4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fa6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1fa6b8: 0x2442ac18  addiu       $v0, $v0, -0x53E8
    ctx->pc = 0x1fa6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945816));
    // 0x1fa6bc: 0x3c0f004c  lui         $t7, 0x4C
    ctx->pc = 0x1fa6bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)76 << 16));
    // 0x1fa6c0: 0xae8280e0  sw          $v0, -0x7F20($s4)
    ctx->pc = 0x1fa6c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B80E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B80E0u, _value); } while (0);
    // 0x1fa6c4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1fa6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa6c8: 0x2442ac70  addiu       $v0, $v0, -0x5390
    ctx->pc = 0x1fa6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945904));
    // 0x1fa6cc: 0x3c0e004c  lui         $t6, 0x4C
    ctx->pc = 0x1fa6ccu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)76 << 16));
    // 0x1fa6d0: 0xae6280e4  sw          $v0, -0x7F1C($s3)
    ctx->pc = 0x1fa6d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B80E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B80E4u, _value); } while (0);
    // 0x1fa6d4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fa6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1fa6d8: 0x2442ac68  addiu       $v0, $v0, -0x5398
    ctx->pc = 0x1fa6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945896));
    // 0x1fa6dc: 0x3c0d004c  lui         $t5, 0x4C
    ctx->pc = 0x1fa6dcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)76 << 16));
    // 0x1fa6e0: 0xae4280e8  sw          $v0, -0x7F18($s2)
    ctx->pc = 0x1fa6e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B80E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B80E8u, _value); } while (0);
    // 0x1fa6e4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1fa6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1fa6e8: 0x244251b0  addiu       $v0, $v0, 0x51B0
    ctx->pc = 0x1fa6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20912));
    // 0x1fa6ec: 0x3c0c004c  lui         $t4, 0x4C
    ctx->pc = 0x1fa6ecu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)76 << 16));
    // 0x1fa6f0: 0xae2280ec  sw          $v0, -0x7F14($s1)
    ctx->pc = 0x1fa6f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B80ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B80ECu, _value); } while (0);
    // 0x1fa6f4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1fa6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1fa6f8: 0x24425220  addiu       $v0, $v0, 0x5220
    ctx->pc = 0x1fa6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21024));
    // 0x1fa6fc: 0x3c0b004c  lui         $t3, 0x4C
    ctx->pc = 0x1fa6fcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)76 << 16));
    // 0x1fa700: 0xae0280f0  sw          $v0, -0x7F10($s0)
    ctx->pc = 0x1fa700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B80F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B80F0u, _value); } while (0);
    // 0x1fa704: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1fa704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1fa708: 0x244253e0  addiu       $v0, $v0, 0x53E0
    ctx->pc = 0x1fa708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21472));
    // 0x1fa70c: 0x3c0a004c  lui         $t2, 0x4C
    ctx->pc = 0x1fa70cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)76 << 16));
    // 0x1fa710: 0xade280f4  sw          $v0, -0x7F0C($t7)
    ctx->pc = 0x1fa710u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B80F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B80F4u, _value); } while (0);
    // 0x1fa714: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1fa714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1fa718: 0x24425328  addiu       $v0, $v0, 0x5328
    ctx->pc = 0x1fa718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21288));
    // 0x1fa71c: 0x3c09004c  lui         $t1, 0x4C
    ctx->pc = 0x1fa71cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)76 << 16));
    // 0x1fa720: 0xadc280f8  sw          $v0, -0x7F08($t6)
    ctx->pc = 0x1fa720u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B80F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B80F8u, _value); } while (0);
    // 0x1fa724: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1fa724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1fa728: 0x24425758  addiu       $v0, $v0, 0x5758
    ctx->pc = 0x1fa728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22360));
    // 0x1fa72c: 0x3c08004c  lui         $t0, 0x4C
    ctx->pc = 0x1fa72cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)76 << 16));
    // 0x1fa730: 0xada280fc  sw          $v0, -0x7F04($t5)
    ctx->pc = 0x1fa730u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B80FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B80FCu, _value); } while (0);
    // 0x1fa734: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1fa734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1fa738: 0x24425780  addiu       $v0, $v0, 0x5780
    ctx->pc = 0x1fa738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22400));
    // 0x1fa73c: 0x3c07004c  lui         $a3, 0x4C
    ctx->pc = 0x1fa73cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)76 << 16));
    // 0x1fa740: 0xad828100  sw          $v0, -0x7F00($t4)
    ctx->pc = 0x1fa740u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B8100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B8100u, _value); } while (0);
    // 0x1fa744: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1fa744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1fa748: 0x24425790  addiu       $v0, $v0, 0x5790
    ctx->pc = 0x1fa748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22416));
    // 0x1fa74c: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x1fa74cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x1fa750: 0xad628104  sw          $v0, -0x7EFC($t3)
    ctx->pc = 0x1fa750u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B8104u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B8104u, _value); } while (0);
    // 0x1fa754: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1fa754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1fa758: 0x244257b8  addiu       $v0, $v0, 0x57B8
    ctx->pc = 0x1fa758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22456));
    // 0x1fa75c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x1fa75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x1fa760: 0xad428108  sw          $v0, -0x7EF8($t2)
    ctx->pc = 0x1fa760u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B8108u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B8108u, _value); } while (0);
    // 0x1fa764: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1fa764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1fa768: 0x24425438  addiu       $v0, $v0, 0x5438
    ctx->pc = 0x1fa768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21560));
    // 0x1fa76c: 0xac9780c8  sw          $s7, -0x7F38($a0)
    ctx->pc = 0x1fa76cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x4B80C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B80C8u, _value); } while (0);
    // 0x1fa770: 0xad22810c  sw          $v0, -0x7EF4($t1)
    ctx->pc = 0x1fa770u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B810Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B810Cu, _value); } while (0);
    // 0x1fa774: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1fa774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1fa778: 0x24425538  addiu       $v0, $v0, 0x5538
    ctx->pc = 0x1fa778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21816));
    // 0x1fa77c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa77cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa780: 0xad028110  sw          $v0, -0x7EF0($t0)
    ctx->pc = 0x1fa780u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B8110u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B8110u, _value); } while (0);
    // 0x1fa784: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1fa784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1fa788: 0x24425598  addiu       $v0, $v0, 0x5598
    ctx->pc = 0x1fa788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21912));
    // 0x1fa78c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa78cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa790: 0xace28114  sw          $v0, -0x7EEC($a3)
    ctx->pc = 0x1fa790u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B8114u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B8114u, _value); } while (0);
    // 0x1fa794: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1fa794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1fa798: 0x24425628  addiu       $v0, $v0, 0x5628
    ctx->pc = 0x1fa798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22056));
    // 0x1fa79c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fa79cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa7a0: 0xacc28118  sw          $v0, -0x7EE8($a2)
    ctx->pc = 0x1fa7a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B8118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B8118u, _value); } while (0);
    // 0x1fa7a4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1fa7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1fa7a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fa7a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fa7ac: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x1fa7acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x1fa7b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fa7b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa7b4: 0x244253e8  addiu       $v0, $v0, 0x53E8
    ctx->pc = 0x1fa7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21480));
    // 0x1fa7b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fa7b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fa7bc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1fa7bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa7c0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1fa7c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fa7c4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1fa7c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fa7c8: 0xaca2811c  sw          $v0, -0x7EE4($a1)
    ctx->pc = 0x1fa7c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B811Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B811Cu, _value); } while (0);
    // 0x1fa7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7CCu;
        // 0x1fa7d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA7D4u;
}

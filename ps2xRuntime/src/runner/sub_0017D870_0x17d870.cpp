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

// Function: sub_0017D870
// Address: 0x17d870 - 0x17dc9c
void sub_0017D870_0x17d870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D870_0x17d870");
#endif

    switch (ctx->pc) {
        case 0x17d8b8u: goto label_17d8b8;
        case 0x17d8c4u: goto label_17d8c4;
        case 0x17d978u: goto label_17d978;
        case 0x17da20u: goto label_17da20;
        case 0x17da78u: goto label_17da78;
        default: break;
    }

    ctx->pc = 0x17d870u;

    // 0x17d870: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x17d870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x17d874: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x17d874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x17d878: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17d878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x17d87c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x17d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17d880: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17d880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17d884: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x17d884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17d888: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17d888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17d88c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17d890: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17d890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17d894: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17d894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17d898: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17d898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17d89c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17d89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17d8a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d8a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17d8a8: 0xafa4015c  sw          $a0, 0x15C($sp)
    ctx->pc = 0x17d8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
    // 0x17d8ac: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x17d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x17d8b0: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x17d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x17d8b4: 0x0  nop
    ctx->pc = 0x17d8b4u;
    // NOP
label_17d8b8:
    // 0x17d8b8: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x17d8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17d8bc: 0xc05f59c  jal         func_17D670
    ctx->pc = 0x17D8BCu;
    SET_GPR_U32(ctx, 31, 0x17D8C4u);
    ctx->pc = 0x17D8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D8BCu;
    // 0x17d8c0: 0x8fa4015c  lw          $a0, 0x15C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D670u, 0x17D8BCu, 0x17D8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D8C4u;
label_17d8c4:
    // 0x17d8c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8c8: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x17d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x17d8cc: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x17d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x17d8d0: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x17d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x17d8d4: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x17d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x17d8d8: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x17d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x17d8dc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x17d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x17d8e0: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x17d8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x17d8e4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x17d8e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d8e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17d8ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d8f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17d8f4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x17d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17d8f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d8fc: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x17d8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x17d900: 0x3c083000  lui         $t0, 0x3000
    ctx->pc = 0x17d900u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12288 << 16));
    // 0x17d904: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x17d904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x17d908: 0x8803c  dsll32      $s0, $t0, 0
    ctx->pc = 0x17d908u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8) << (32 + 0));
    // 0x17d90c: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x17d90cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17d910: 0x1f0f025  or          $fp, $t7, $s0
    ctx->pc = 0x17d910u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 15) | GPR_U64(ctx, 16));
    // 0x17d914: 0x3c0e6c01  lui         $t6, 0x6C01
    ctx->pc = 0x17d914u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)27649 << 16));
    // 0x17d918: 0x350f0001  ori         $t7, $t0, 0x1
    ctx->pc = 0x17d918u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x17d91c: 0x35d78000  ori         $s7, $t6, 0x8000
    ctx->pc = 0x17d91cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)32768);
    // 0x17d920: 0x7faf00b0  sq          $t7, 0xB0($sp)
    ctx->pc = 0x17d920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 15));
    // 0x17d924: 0x3c105000  lui         $s0, 0x5000
    ctx->pc = 0x17d924u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20480 << 16));
    // 0x17d928: 0x360f0001  ori         $t7, $s0, 0x1
    ctx->pc = 0x17d928u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x17d92c: 0x34470104  ori         $a3, $v0, 0x104
    ctx->pc = 0x17d92cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)260);
    // 0x17d930: 0x344c0404  ori         $t4, $v0, 0x404
    ctx->pc = 0x17d930u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x17d934: 0x7faf00a0  sq          $t7, 0xA0($sp)
    ctx->pc = 0x17d934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 15));
    // 0x17d938: 0x3c026e14  lui         $v0, 0x6E14
    ctx->pc = 0x17d938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28180 << 16));
    // 0x17d93c: 0x360f0005  ori         $t7, $s0, 0x5
    ctx->pc = 0x17d93cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)5);
    // 0x17d940: 0x3446c004  ori         $a2, $v0, 0xC004
    ctx->pc = 0x17d940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49156);
    // 0x17d944: 0x7faf00c0  sq          $t7, 0xC0($sp)
    ctx->pc = 0x17d944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 15));
    // 0x17d948: 0x3c027814  lui         $v0, 0x7814
    ctx->pc = 0x17d948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30740 << 16));
    // 0x17d94c: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x17d94cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x17d950: 0x34438001  ori         $v1, $v0, 0x8001
    ctx->pc = 0x17d950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x17d954: 0x350f0008  ori         $t7, $t0, 0x8
    ctx->pc = 0x17d954u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8);
    // 0x17d958: 0x240a8000  addiu       $t2, $zero, -0x8000
    ctx->pc = 0x17d958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x17d95c: 0x640b0014  daddiu      $t3, $zero, 0x14
    ctx->pc = 0x17d95cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)20);
    // 0x17d960: 0x35090005  ori         $t1, $t0, 0x5
    ctx->pc = 0x17d960u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)5);
    // 0x17d964: 0x3504000f  ori         $a0, $t0, 0xF
    ctx->pc = 0x17d964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)15);
    // 0x17d968: 0x3c0d2000  lui         $t5, 0x2000
    ctx->pc = 0x17d968u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)8192 << 16));
    // 0x17d96c: 0x3c021700  lui         $v0, 0x1700
    ctx->pc = 0x17d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5888 << 16));
    // 0x17d970: 0x35ce0002  ori         $t6, $t6, 0x2
    ctx->pc = 0x17d970u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)2);
    // 0x17d974: 0x7faf00d0  sq          $t7, 0xD0($sp)
    ctx->pc = 0x17d974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 15));
label_17d978:
    // 0x17d978: 0x8fb000f0  lw          $s0, 0xF0($sp)
    ctx->pc = 0x17d978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17d97c: 0x8faf0120  lw          $t7, 0x120($sp)
    ctx->pc = 0x17d97cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d980: 0x20f7821  addu        $t7, $s0, $t7
    ctx->pc = 0x17d980u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    // 0x17d984: 0xafaf00e0  sw          $t7, 0xE0($sp)
    ctx->pc = 0x17d984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 15));
    // 0x17d988: 0x8faf00e0  lw          $t7, 0xE0($sp)
    ctx->pc = 0x17d988u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x17d98c: 0xade50078  sw          $a1, 0x78($t7)
    ctx->pc = 0x17d98cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 120), GPR_U32(ctx, 5));
    // 0x17d990: 0x8fb000e0  lw          $s0, 0xE0($sp)
    ctx->pc = 0x17d990u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x17d994: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x17d994u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d998: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x17d998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
    // 0x17d99c: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x17d99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d9a0: 0x24a500f0  addiu       $a1, $a1, 0xF0
    ctx->pc = 0x17d9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    // 0x17d9a4: 0x5813c  dsll32      $s0, $a1, 4
    ctx->pc = 0x17d9a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 4));
    // 0x17d9a8: 0x10813e  dsrl32      $s0, $s0, 4
    ctx->pc = 0x17d9a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 4));
    // 0x17d9ac: 0x25e50010  addiu       $a1, $t7, 0x10
    ctx->pc = 0x17d9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x17d9b0: 0x10883c  dsll32      $s1, $s0, 0
    ctx->pc = 0x17d9b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) << (32 + 0));
    // 0x17d9b4: 0x24b30010  addiu       $s3, $a1, 0x10
    ctx->pc = 0x17d9b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x17d9b8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x17d9b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17d9bc: 0x2308025  or          $s0, $s1, $s0
    ctx->pc = 0x17d9bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
    // 0x17d9c0: 0xfdf00000  sd          $s0, 0x0($t7)
    ctx->pc = 0x17d9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 16));
    // 0x17d9c4: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x17d9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x17d9c8: 0xadf00008  sw          $s0, 0x8($t7)
    ctx->pc = 0x17d9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 16));
    // 0x17d9cc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x17d9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17d9d0: 0xadf0000c  sw          $s0, 0xC($t7)
    ctx->pc = 0x17d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 16));
    // 0x17d9d4: 0x8fb000e0  lw          $s0, 0xE0($sp)
    ctx->pc = 0x17d9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x17d9d8: 0xae050070  sw          $a1, 0x70($s0)
    ctx->pc = 0x17d9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 5));
    // 0x17d9dc: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x17d9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17d9e0: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x17d9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d9e4: 0x8fa5015c  lw          $a1, 0x15C($sp)
    ctx->pc = 0x17d9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x17d9e8: 0x8ca50118  lw          $a1, 0x118($a1)
    ctx->pc = 0x17d9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x17d9ec: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x17d9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17d9f0: 0xdca50000  ld          $a1, 0x0($a1)
    ctx->pc = 0x17d9f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17d9f4: 0xfde50010  sd          $a1, 0x10($t7)
    ctx->pc = 0x17d9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 16), GPR_U64(ctx, 5));
    // 0x17d9f8: 0xfde00018  sd          $zero, 0x18($t7)
    ctx->pc = 0x17d9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 24), GPR_U64(ctx, 0));
    // 0x17d9fc: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x17d9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17da00: 0x90af0024  lbu         $t7, 0x24($a1)
    ctx->pc = 0x17da00u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x17da04: 0x8cb40020  lw          $s4, 0x20($a1)
    ctx->pc = 0x17da04u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x17da08: 0x25f2ffff  addiu       $s2, $t7, -0x1
    ctx->pc = 0x17da08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x17da0c: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x17da0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17da10: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x17da10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x17da14: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x17da14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    // 0x17da18: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x17da18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x17da1c: 0xacb30068  sw          $s3, 0x68($a1)
    ctx->pc = 0x17da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 19));
label_17da20:
    // 0x17da20: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x17da20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x17da24: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x17da24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17da28: 0x5793c  dsll32      $t7, $a1, 4
    ctx->pc = 0x17da28u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) << (32 + 4));
    // 0x17da2c: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x17da2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x17da30: 0xf793e  dsrl32      $t7, $t7, 4
    ctx->pc = 0x17da30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 4));
    // 0x17da34: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x17da34u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x17da38: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x17da38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x17da3c: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x17da3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    // 0x17da40: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x17da40u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17da44: 0x1e52825  or          $a1, $t7, $a1
    ctx->pc = 0x17da44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) | GPR_U64(ctx, 5));
    // 0x17da48: 0xfe650000  sd          $a1, 0x0($s3)
    ctx->pc = 0x17da48u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 5));
    // 0x17da4c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x17da4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x17da50: 0xae650008  sw          $a1, 0x8($s3)
    ctx->pc = 0x17da50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
    // 0x17da54: 0x7ba500a0  lq          $a1, 0xA0($sp)
    ctx->pc = 0x17da54u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17da58: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x17da58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
    // 0x17da5c: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x17da5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x17da60: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x17da60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x17da64: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x17da64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x17da68: 0x8e98000c  lw          $t8, 0xC($s4)
    ctx->pc = 0x17da68u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x17da6c: 0x8e8f0010  lw          $t7, 0x10($s4)
    ctx->pc = 0x17da6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x17da70: 0x96910000  lhu         $s1, 0x0($s4)
    ctx->pc = 0x17da70u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17da74: 0x0  nop
    ctx->pc = 0x17da74u;
    // NOP
label_17da78:
    // 0x17da78: 0xfe6e0000  sd          $t6, 0x0($s3)
    ctx->pc = 0x17da78u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 14));
    // 0x17da7c: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x17da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x17da80: 0x2415fff0  addiu       $s5, $zero, -0x10
    ctx->pc = 0x17da80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17da84: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x17da84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x17da88: 0x2a250014  slti        $a1, $s1, 0x14
    ctx->pc = 0x17da88u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x17da8c: 0xae6d0010  sw          $t5, 0x10($s3)
    ctx->pc = 0x17da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 13));
    // 0x17da90: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x17da90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x17da94: 0xae6c0018  sw          $t4, 0x18($s3)
    ctx->pc = 0x17da94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 12));
    // 0x17da98: 0xae77001c  sw          $s7, 0x1C($s3)
    ctx->pc = 0x17da98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 23));
    // 0x17da9c: 0xfe7e0020  sd          $fp, 0x20($s3)
    ctx->pc = 0x17da9cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 30));
    // 0x17daa0: 0xfe600028  sd          $zero, 0x28($s3)
    ctx->pc = 0x17daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 0));
    // 0x17daa4: 0x92760028  lbu         $s6, 0x28($s3)
    ctx->pc = 0x17daa4u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x17daa8: 0x2d5b024  and         $s6, $s6, $s5
    ctx->pc = 0x17daa8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 21));
    // 0x17daac: 0x64150002  daddiu      $s5, $zero, 0x2
    ctx->pc = 0x17daacu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x17dab0: 0x2d5a825  or          $s5, $s6, $s5
    ctx->pc = 0x17dab0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) | GPR_U64(ctx, 21));
    // 0x17dab4: 0xa2750028  sb          $s5, 0x28($s3)
    ctx->pc = 0x17dab4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 21));
    // 0x17dab8: 0x92760028  lbu         $s6, 0x28($s3)
    ctx->pc = 0x17dab8u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x17dabc: 0x2415ff0f  addiu       $s5, $zero, -0xF1
    ctx->pc = 0x17dabcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x17dac0: 0x2d5b024  and         $s6, $s6, $s5
    ctx->pc = 0x17dac0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 21));
    // 0x17dac4: 0x64150010  daddiu      $s5, $zero, 0x10
    ctx->pc = 0x17dac4u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x17dac8: 0x2d5a825  or          $s5, $s6, $s5
    ctx->pc = 0x17dac8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) | GPR_U64(ctx, 21));
    // 0x17dacc: 0xa2750028  sb          $s5, 0x28($s3)
    ctx->pc = 0x17daccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 21));
    // 0x17dad0: 0x92760029  lbu         $s6, 0x29($s3)
    ctx->pc = 0x17dad0u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x17dad4: 0x2415fff0  addiu       $s5, $zero, -0x10
    ctx->pc = 0x17dad4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17dad8: 0x2d5b024  and         $s6, $s6, $s5
    ctx->pc = 0x17dad8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 21));
    // 0x17dadc: 0x64150004  daddiu      $s5, $zero, 0x4
    ctx->pc = 0x17dadcu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x17dae0: 0x2d5a825  or          $s5, $s6, $s5
    ctx->pc = 0x17dae0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) | GPR_U64(ctx, 21));
    // 0x17dae4: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DAE4u;
    {
        const bool branch_taken_0x17dae4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAE4u;
        // 0x17dae8: 0xa2750029  sb          $s5, 0x29($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 41), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dae4) {
            ctx->pc = 0x17DB00u;
            goto label_17db00;
        }
    }
    ctx->pc = 0x17DAECu;
    // 0x17daec: 0x96650020  lhu         $a1, 0x20($s3)
    ctx->pc = 0x17daecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x17daf0: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x17daf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x17daf4: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x17daf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x17daf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17DAF8u;
    {
        const bool branch_taken_0x17daf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAF8u;
        // 0x17dafc: 0xa6650020  sh          $a1, 0x20($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17daf8) {
            ctx->pc = 0x17DB18u;
            goto label_17db18;
        }
    }
    ctx->pc = 0x17DB00u;
label_17db00:
    // 0x17db00: 0x96650020  lhu         $a1, 0x20($s3)
    ctx->pc = 0x17db00u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x17db04: 0x32357fff  andi        $s5, $s1, 0x7FFF
    ctx->pc = 0x17db04u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32767);
    // 0x17db08: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x17db08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x17db0c: 0xb52825  or          $a1, $a1, $s5
    ctx->pc = 0x17db0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 21));
    // 0x17db10: 0xa6650020  sh          $a1, 0x20($s3)
    ctx->pc = 0x17db10u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x17db14: 0x0  nop
    ctx->pc = 0x17db14u;
    // NOP
label_17db18:
    // 0x17db18: 0xf293c  dsll32      $a1, $t7, 4
    ctx->pc = 0x17db18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) << (32 + 4));
    // 0x17db1c: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x17db1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x17db20: 0x10a93c  dsll32      $s5, $s0, 4
    ctx->pc = 0x17db20u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) << (32 + 4));
    // 0x17db24: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x17db24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x17db28: 0x15a93e  dsrl32      $s5, $s5, 4
    ctx->pc = 0x17db28u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 4));
    // 0x17db2c: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x17db2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x17db30: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x17db30u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x17db34: 0xfe650030  sd          $a1, 0x30($s3)
    ctx->pc = 0x17db34u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 5));
    // 0x17db38: 0x2631ffec  addiu       $s1, $s1, -0x14
    ctx->pc = 0x17db38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
    // 0x17db3c: 0x2a42825  or          $a1, $s5, $a0
    ctx->pc = 0x17db3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 4));
    // 0x17db40: 0xae670038  sw          $a3, 0x38($s3)
    ctx->pc = 0x17db40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 7));
    // 0x17db44: 0x18a93c  dsll32      $s5, $t8, 4
    ctx->pc = 0x17db44u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 24) << (32 + 4));
    // 0x17db48: 0xae66003c  sw          $a2, 0x3C($s3)
    ctx->pc = 0x17db48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 6));
    // 0x17db4c: 0x15a93e  dsrl32      $s5, $s5, 4
    ctx->pc = 0x17db4cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 4));
    // 0x17db50: 0xfe650040  sd          $a1, 0x40($s3)
    ctx->pc = 0x17db50u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 64), GPR_U64(ctx, 5));
    // 0x17db54: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x17db54u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x17db58: 0xae600048  sw          $zero, 0x48($s3)
    ctx->pc = 0x17db58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
    // 0x17db5c: 0x2a82825  or          $a1, $s5, $t0
    ctx->pc = 0x17db5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 8));
    // 0x17db60: 0xae63004c  sw          $v1, 0x4C($s3)
    ctx->pc = 0x17db60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 3));
    // 0x17db64: 0x19a93c  dsll32      $s5, $t9, 4
    ctx->pc = 0x17db64u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 25) << (32 + 4));
    // 0x17db68: 0xfe650050  sd          $a1, 0x50($s3)
    ctx->pc = 0x17db68u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 80), GPR_U64(ctx, 5));
    // 0x17db6c: 0x15a93e  dsrl32      $s5, $s5, 4
    ctx->pc = 0x17db6cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 4));
    // 0x17db70: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x17db70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
    // 0x17db74: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x17db74u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x17db78: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x17db78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x17db7c: 0x2a82825  or          $a1, $s5, $t0
    ctx->pc = 0x17db7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 8));
    // 0x17db80: 0x261000f0  addiu       $s0, $s0, 0xF0
    ctx->pc = 0x17db80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x17db84: 0x26750080  addiu       $s5, $s3, 0x80
    ctx->pc = 0x17db84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x17db88: 0xfe650060  sd          $a1, 0x60($s3)
    ctx->pc = 0x17db88u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 5));
    // 0x17db8c: 0x15a93c  dsll32      $s5, $s5, 4
    ctx->pc = 0x17db8cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 4));
    // 0x17db90: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x17db90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x17db94: 0x15a93e  dsrl32      $s5, $s5, 4
    ctx->pc = 0x17db94u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 4));
    // 0x17db98: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x17db98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x17db9c: 0x15283c  dsll32      $a1, $s5, 0
    ctx->pc = 0x17db9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 0));
    // 0x17dba0: 0x273900f0  addiu       $t9, $t9, 0xF0
    ctx->pc = 0x17dba0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 240));
    // 0x17dba4: 0xad2825  or          $a1, $a1, $t5
    ctx->pc = 0x17dba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 13));
    // 0x17dba8: 0x27180050  addiu       $t8, $t8, 0x50
    ctx->pc = 0x17dba8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 80));
    // 0x17dbac: 0xfe650070  sd          $a1, 0x70($s3)
    ctx->pc = 0x17dbacu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 112), GPR_U64(ctx, 5));
    // 0x17dbb0: 0x25ef0050  addiu       $t7, $t7, 0x50
    ctx->pc = 0x17dbb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 80));
    // 0x17dbb4: 0xae620078  sw          $v0, 0x78($s3)
    ctx->pc = 0x17dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
    // 0x17dbb8: 0xae6c007c  sw          $t4, 0x7C($s3)
    ctx->pc = 0x17dbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 12));
    // 0x17dbbc: 0x1e20ffae  bgtz        $s1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x17DBBCu;
    {
        const bool branch_taken_0x17dbbc = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x17DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBBCu;
        // 0x17dbc0: 0x26730080  addiu       $s3, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dbbc) {
            ctx->pc = 0x17DA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17da78;
        }
    }
    ctx->pc = 0x17DBC4u;
    // 0x17dbc4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x17dbc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17dbc8: 0x641ff95  bgez        $s2, . + 4 + (-0x6B << 2)
    ctx->pc = 0x17DBC8u;
    {
        const bool branch_taken_0x17dbc8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x17DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBC8u;
        // 0x17dbcc: 0x2694001c  addiu       $s4, $s4, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dbc8) {
            ctx->pc = 0x17DA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17da20;
        }
    }
    ctx->pc = 0x17DBD0u;
    // 0x17dbd0: 0x8faf00e0  lw          $t7, 0xE0($sp)
    ctx->pc = 0x17dbd0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x17dbd4: 0x2670fff0  addiu       $s0, $s3, -0x10
    ctx->pc = 0x17dbd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x17dbd8: 0xadf00058  sw          $s0, 0x58($t7)
    ctx->pc = 0x17dbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 88), GPR_U32(ctx, 16));
    // 0x17dbdc: 0x8faf0120  lw          $t7, 0x120($sp)
    ctx->pc = 0x17dbdcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17dbe0: 0x25ef01f0  addiu       $t7, $t7, 0x1F0
    ctx->pc = 0x17dbe0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 496));
    // 0x17dbe4: 0xafaf0120  sw          $t7, 0x120($sp)
    ctx->pc = 0x17dbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 15));
    // 0x17dbe8: 0x3c0f6000  lui         $t7, 0x6000
    ctx->pc = 0x17dbe8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)24576 << 16));
    // 0x17dbec: 0xfe6f0000  sd          $t7, 0x0($s3)
    ctx->pc = 0x17dbecu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 15));
    // 0x17dbf0: 0x3c0f1100  lui         $t7, 0x1100
    ctx->pc = 0x17dbf0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4352 << 16));
    // 0x17dbf4: 0xae6f0008  sw          $t7, 0x8($s3)
    ctx->pc = 0x17dbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 15));
    // 0x17dbf8: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x17dbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x17dbfc: 0x8faf0140  lw          $t7, 0x140($sp)
    ctx->pc = 0x17dbfcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17dc00: 0x8def001c  lw          $t7, 0x1C($t7)
    ctx->pc = 0x17dc00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x17dc04: 0x31ef0800  andi        $t7, $t7, 0x800
    ctx->pc = 0x17dc04u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2048);
    // 0x17dc08: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x17DC08u;
    {
        const bool branch_taken_0x17dc08 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC08u;
        // 0x17dc0c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc08) {
            ctx->pc = 0x17DC20u;
            goto label_17dc20;
        }
    }
    ctx->pc = 0x17DC10u;
    // 0x17dc10: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x17dc10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17dc14: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x17dc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x17dc18: 0xac2f13d0  sw          $t7, 0x13D0($at)
    ctx->pc = 0x17dc18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x8413D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8413D0u, _value); } while (0);
    // 0x17dc1c: 0x0  nop
    ctx->pc = 0x17dc1cu;
    // NOP
label_17dc20:
    // 0x17dc20: 0x8faf0140  lw          $t7, 0x140($sp)
    ctx->pc = 0x17dc20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17dc24: 0x25ef0050  addiu       $t7, $t7, 0x50
    ctx->pc = 0x17dc24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 80));
    // 0x17dc28: 0xafaf0140  sw          $t7, 0x140($sp)
    ctx->pc = 0x17dc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 15));
    // 0x17dc2c: 0x8fb00140  lw          $s0, 0x140($sp)
    ctx->pc = 0x17dc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17dc30: 0x8faf0130  lw          $t7, 0x130($sp)
    ctx->pc = 0x17dc30u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x17dc34: 0x20f782b  sltu        $t7, $s0, $t7
    ctx->pc = 0x17dc34u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x17dc38: 0x15e0ff4f  bnez        $t7, . + 4 + (-0xB1 << 2)
    ctx->pc = 0x17DC38u;
    {
        const bool branch_taken_0x17dc38 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dc38) {
            ctx->pc = 0x17D978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d978;
        }
    }
    ctx->pc = 0x17DC40u;
    // 0x17dc40: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x17dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17dc44: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17dc48: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x17dc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x17dc4c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x17dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17dc50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17dc54: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x17dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x17dc58: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x17dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17dc5c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x17dc5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17dc60: 0x1440ff15  bnez        $v0, . + 4 + (-0xEB << 2)
    ctx->pc = 0x17DC60u;
    {
        const bool branch_taken_0x17dc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dc60) {
            ctx->pc = 0x17D8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d8b8;
        }
    }
    ctx->pc = 0x17DC68u;
    // 0x17dc68: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17dc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17dc6c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x17dc6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc70: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17dc70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17dc74: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17dc74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17dc78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17dc78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17dc7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17dc7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17dc80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17dc80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17dc84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17dc84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dc88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17dc88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dc8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17dc8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dc90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17dc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dc94: 0x3e00008  jr          $ra
    ctx->pc = 0x17DC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC94u;
        // 0x17dc98: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DC9Cu;
}

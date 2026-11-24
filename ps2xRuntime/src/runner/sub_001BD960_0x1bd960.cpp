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

// Function: sub_001BD960
// Address: 0x1bd960 - 0x1be244
void sub_001BD960_0x1bd960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD960_0x1bd960");
#endif

    switch (ctx->pc) {
        case 0x1bd998u: goto label_1bd998;
        case 0x1bd9b8u: goto label_1bd9b8;
        case 0x1bdad4u: goto label_1bdad4;
        case 0x1bdae0u: goto label_1bdae0;
        case 0x1bdaf4u: goto label_1bdaf4;
        case 0x1bdb2cu: goto label_1bdb2c;
        case 0x1bdb3cu: goto label_1bdb3c;
        case 0x1bdb60u: goto label_1bdb60;
        case 0x1bdb6cu: goto label_1bdb6c;
        case 0x1bdb80u: goto label_1bdb80;
        case 0x1bdba4u: goto label_1bdba4;
        case 0x1bdbe4u: goto label_1bdbe4;
        case 0x1bdbf4u: goto label_1bdbf4;
        case 0x1bdc04u: goto label_1bdc04;
        case 0x1bdc14u: goto label_1bdc14;
        case 0x1bdc20u: goto label_1bdc20;
        case 0x1bdc50u: goto label_1bdc50;
        case 0x1bdc64u: goto label_1bdc64;
        case 0x1bdc78u: goto label_1bdc78;
        case 0x1bdc8cu: goto label_1bdc8c;
        case 0x1bdca4u: goto label_1bdca4;
        case 0x1bdcdcu: goto label_1bdcdc;
        case 0x1bdce4u: goto label_1bdce4;
        case 0x1bdd08u: goto label_1bdd08;
        case 0x1bdd24u: goto label_1bdd24;
        case 0x1bdd64u: goto label_1bdd64;
        case 0x1bdd74u: goto label_1bdd74;
        case 0x1bdd84u: goto label_1bdd84;
        case 0x1bdd94u: goto label_1bdd94;
        case 0x1bdda0u: goto label_1bdda0;
        case 0x1bddd0u: goto label_1bddd0;
        case 0x1bdde4u: goto label_1bdde4;
        case 0x1bddf8u: goto label_1bddf8;
        case 0x1bde0cu: goto label_1bde0c;
        case 0x1bde24u: goto label_1bde24;
        case 0x1bde60u: goto label_1bde60;
        case 0x1bde68u: goto label_1bde68;
        case 0x1bde90u: goto label_1bde90;
        case 0x1bdeacu: goto label_1bdeac;
        case 0x1bdeecu: goto label_1bdeec;
        case 0x1bdefcu: goto label_1bdefc;
        case 0x1bdf0cu: goto label_1bdf0c;
        case 0x1bdf1cu: goto label_1bdf1c;
        case 0x1bdf28u: goto label_1bdf28;
        case 0x1bdf58u: goto label_1bdf58;
        case 0x1bdf6cu: goto label_1bdf6c;
        case 0x1bdf80u: goto label_1bdf80;
        case 0x1bdf94u: goto label_1bdf94;
        case 0x1bdfacu: goto label_1bdfac;
        case 0x1bdfd0u: goto label_1bdfd0;
        case 0x1bdfe4u: goto label_1bdfe4;
        case 0x1bdff0u: goto label_1bdff0;
        case 0x1be014u: goto label_1be014;
        case 0x1be054u: goto label_1be054;
        case 0x1be05cu: goto label_1be05c;
        case 0x1be088u: goto label_1be088;
        case 0x1be0a8u: goto label_1be0a8;
        case 0x1be140u: goto label_1be140;
        case 0x1be150u: goto label_1be150;
        case 0x1be170u: goto label_1be170;
        case 0x1be1a0u: goto label_1be1a0;
        case 0x1be1b4u: goto label_1be1b4;
        case 0x1be1d8u: goto label_1be1d8;
        case 0x1be1ecu: goto label_1be1ec;
        case 0x1be204u: goto label_1be204;
        default: break;
    }

    ctx->pc = 0x1bd960u;

    // 0x1bd960: 0x27bdfb90  addiu       $sp, $sp, -0x470
    ctx->pc = 0x1bd960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966160));
    // 0x1bd964: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bd964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd968: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1bd968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1bd96c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1bd96cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bd970: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bd970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bd974: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bd974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bd978: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bd978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bd97c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bd97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bd980: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bd980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bd984: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bd984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd988: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bd988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd98c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bd98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bd990: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1BD990u;
    SET_GPR_U32(ctx, 31, 0x1BD998u);
    ctx->pc = 0x1BD994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD990u;
    // 0x1bd994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1BD990u, 0x1BD998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD998u;
label_1bd998:
    // 0x1bd998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bd998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd99c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd9a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bd9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd9a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bd9a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd9a8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1bd9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bd9ac: 0x3c090008  lui         $t1, 0x8
    ctx->pc = 0x1bd9acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8 << 16));
    // 0x1bd9b0: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x1bd9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
    // 0x1bd9b4: 0x0  nop
    ctx->pc = 0x1bd9b4u;
    // NOP
label_1bd9b8:
    // 0x1bd9b8: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x1bd9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1bd9bc: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x1bd9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1bd9c0: 0x24cc0001  addiu       $t4, $a2, 0x1
    ctx->pc = 0x1bd9c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bd9c4: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1bd9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bd9c8: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1bd9c8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1bd9cc: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1bd9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1bd9d0: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1bd9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1bd9d4: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1bd9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1bd9d8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1bd9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1bd9dc: 0x24ea0100  addiu       $t2, $a3, 0x100
    ctx->pc = 0x1bd9dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x1bd9e0: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1bd9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1bd9e4: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1bd9e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1bd9e8: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1bd9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1bd9ec: 0x24cc0002  addiu       $t4, $a2, 0x2
    ctx->pc = 0x1bd9ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1bd9f0: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x1bd9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x1bd9f4: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1bd9f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1bd9f8: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1bd9f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1bd9fc: 0x24ea0200  addiu       $t2, $a3, 0x200
    ctx->pc = 0x1bd9fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x1bda00: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1bda00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1bda04: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1bda04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1bda08: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1bda08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1bda0c: 0x24cc0003  addiu       $t4, $a2, 0x3
    ctx->pc = 0x1bda0cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1bda10: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x1bda10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x1bda14: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1bda14u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1bda18: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1bda18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1bda1c: 0x24ea0300  addiu       $t2, $a3, 0x300
    ctx->pc = 0x1bda1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 768));
    // 0x1bda20: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1bda20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1bda24: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1bda24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1bda28: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1bda28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1bda2c: 0x24cc0004  addiu       $t4, $a2, 0x4
    ctx->pc = 0x1bda2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1bda30: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x1bda30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x1bda34: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1bda34u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1bda38: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1bda38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1bda3c: 0x24ea0400  addiu       $t2, $a3, 0x400
    ctx->pc = 0x1bda3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x1bda40: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1bda40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1bda44: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1bda44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1bda48: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1bda48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1bda4c: 0x24cc0005  addiu       $t4, $a2, 0x5
    ctx->pc = 0x1bda4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1bda50: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x1bda50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x1bda54: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1bda54u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1bda58: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1bda58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1bda5c: 0x24ea0500  addiu       $t2, $a3, 0x500
    ctx->pc = 0x1bda5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1280));
    // 0x1bda60: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1bda60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1bda64: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1bda64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1bda68: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1bda68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1bda6c: 0x24cc0006  addiu       $t4, $a2, 0x6
    ctx->pc = 0x1bda6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x1bda70: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1bda70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1bda74: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1bda74u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1bda78: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1bda78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1bda7c: 0x24ea0600  addiu       $t2, $a3, 0x600
    ctx->pc = 0x1bda7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1536));
    // 0x1bda80: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1bda80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1bda84: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1bda84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1bda88: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1bda88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1bda8c: 0x24cc0007  addiu       $t4, $a2, 0x7
    ctx->pc = 0x1bda8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x1bda90: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x1bda90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x1bda94: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1bda94u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1bda98: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1bda98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1bda9c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1bda9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1bdaa0: 0x24ea0700  addiu       $t2, $a3, 0x700
    ctx->pc = 0x1bdaa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1792));
    // 0x1bdaa4: 0x24a50800  addiu       $a1, $a1, 0x800
    ctx->pc = 0x1bdaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2048));
    // 0x1bdaa8: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1bdaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1bdaac: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1bdaacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1bdab0: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1bdab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1bdab4: 0xac47001c  sw          $a3, 0x1C($v0)
    ctx->pc = 0x1bdab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 7));
    // 0x1bdab8: 0x2cc70100  sltiu       $a3, $a2, 0x100
    ctx->pc = 0x1bdab8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1bdabc: 0x14e0ffbe  bnez        $a3, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1BDABCu;
    {
        const bool branch_taken_0x1bdabc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDABCu;
        // 0x1bdac0: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdabc) {
            ctx->pc = 0x1BD9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd9b8;
        }
    }
    ctx->pc = 0x1BDAC4u;
    // 0x1bdac4: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1bdac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bdac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdacc: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1BDACCu;
    SET_GPR_U32(ctx, 31, 0x1BDAD4u);
    ctx->pc = 0x1BDAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDACCu;
    // 0x1bdad0: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1BDACCu, 0x1BDAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAD4u;
label_1bdad4:
    // 0x1bdad4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdad8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BDAD8u;
    SET_GPR_U32(ctx, 31, 0x1BDAE0u);
    ctx->pc = 0x1BDADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDAD8u;
    // 0x1bdadc: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BDAD8u, 0x1BDAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAE0u;
label_1bdae0:
    // 0x1bdae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bdae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdae8: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x1bdae8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1bdaec: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BDAECu;
    SET_GPR_U32(ctx, 31, 0x1BDAF4u);
    ctx->pc = 0x1BDAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDAECu;
    // 0x1bdaf0: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BDAECu, 0x1BDAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAF4u;
label_1bdaf4:
    // 0x1bdaf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bdaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdaf8: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x1bdaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1bdafc: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x1bdafcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bdb00: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BDB00u;
    {
        const bool branch_taken_0x1bdb00 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1BDB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDB00u;
        // 0x1bdb04: 0x282c3  sra         $s0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdb00) {
            ctx->pc = 0x1BDB10u;
            goto label_1bdb10;
        }
    }
    ctx->pc = 0x1BDB08u;
    // 0x1bdb08: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x1bdb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1bdb0c: 0x282c3  sra         $s0, $v0, 11
    ctx->pc = 0x1bdb0cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 11));
label_1bdb10:
    // 0x1bdb10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bdb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdb14: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1bdb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1bdb18: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bdb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bdb1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb20: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1bdb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1bdb24: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDB24u;
    SET_GPR_U32(ctx, 31, 0x1BDB2Cu);
    ctx->pc = 0x1BDB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB24u;
    // 0x1bdb28: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDB24u, 0x1BDB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB2Cu;
label_1bdb2c:
    // 0x1bdb2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb30: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1bdb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1bdb34: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDB34u;
    SET_GPR_U32(ctx, 31, 0x1BDB3Cu);
    ctx->pc = 0x1BDB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB34u;
    // 0x1bdb38: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDB34u, 0x1BDB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB3Cu;
label_1bdb3c:
    // 0x1bdb3c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1bdb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1bdb40: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1bdb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1bdb44: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bdb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bdb48: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1bdb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1bdb4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bdb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bdb50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb54: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1bdb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bdb58: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDB58u;
    SET_GPR_U32(ctx, 31, 0x1BDB60u);
    ctx->pc = 0x1BDB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB58u;
    // 0x1bdb5c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDB58u, 0x1BDB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB60u;
label_1bdb60:
    // 0x1bdb60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb64: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BDB64u;
    SET_GPR_U32(ctx, 31, 0x1BDB6Cu);
    ctx->pc = 0x1BDB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB64u;
    // 0x1bdb68: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BDB64u, 0x1BDB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB6Cu;
label_1bdb6c:
    // 0x1bdb6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bdb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bdb70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb74: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bdb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bdb78: 0xc0705e8  jal         func_1C17A0
    ctx->pc = 0x1BDB78u;
    SET_GPR_U32(ctx, 31, 0x1BDB80u);
    ctx->pc = 0x1BDB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB78u;
    // 0x1bdb7c: 0x29eb8  dsll        $s3, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17A0u, 0x1BDB78u, 0x1BDB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB80u;
label_1bdb80:
    // 0x1bdb80: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1bdb80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1bdb84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb88: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bdb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bdb8c: 0x3c0201b1  lui         $v0, 0x1B1
    ctx->pc = 0x1bdb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)433 << 16));
    // 0x1bdb90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bdb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bdb94: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x1bdb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1bdb98: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1bdb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bdb9c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BDB9Cu;
    SET_GPR_U32(ctx, 31, 0x1BDBA4u);
    ctx->pc = 0x1BDBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB9Cu;
    // 0x1bdba0: 0x2629825  or          $s3, $s3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BDB9Cu, 0x1BDBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDBA4u;
label_1bdba4:
    // 0x1bdba4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bdba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bdba8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bdba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bdbac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bdbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bdbb0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bdbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bdbb4: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bdbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bdbb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bdbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bdbbc: 0x732025  or          $a0, $v1, $s3
    ctx->pc = 0x1bdbbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x1bdbc0: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1bdbc0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bdbc4: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bdbc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bdbc8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bdbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bdbcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bdbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bdbd4: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bdbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bdbd8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bdbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bdbdc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDBDCu;
    SET_GPR_U32(ctx, 31, 0x1BDBE4u);
    ctx->pc = 0x1BDBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDBDCu;
    // 0x1bdbe0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDBDCu, 0x1BDBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDBE4u;
label_1bdbe4:
    // 0x1bdbe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbe8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bdbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bdbec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDBECu;
    SET_GPR_U32(ctx, 31, 0x1BDBF4u);
    ctx->pc = 0x1BDBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDBECu;
    // 0x1bdbf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDBECu, 0x1BDBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDBF4u;
label_1bdbf4:
    // 0x1bdbf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbfc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDBFCu;
    SET_GPR_U32(ctx, 31, 0x1BDC04u);
    ctx->pc = 0x1BDC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDBFCu;
    // 0x1bdc00: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDBFCu, 0x1BDC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC04u;
label_1bdc04:
    // 0x1bdc04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc08: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bdc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bdc0c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDC0Cu;
    SET_GPR_U32(ctx, 31, 0x1BDC14u);
    ctx->pc = 0x1BDC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC0Cu;
    // 0x1bdc10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDC0Cu, 0x1BDC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC14u;
label_1bdc14:
    // 0x1bdc14: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1bdc14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc18: 0x2414003f  addiu       $s4, $zero, 0x3F
    ctx->pc = 0x1bdc18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bdc1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bdc1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bdc20:
    // 0x1bdc20: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1bdc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1bdc24: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1bdc24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1bdc28: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bdc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bdc2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1bdc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1bdc30: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bdc30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bdc34: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bdc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bdc38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bdc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bdc3c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bdc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bdc40: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bdc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bdc44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc48: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDC48u;
    SET_GPR_U32(ctx, 31, 0x1BDC50u);
    ctx->pc = 0x1BDC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC48u;
    // 0x1bdc4c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDC48u, 0x1BDC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC50u;
label_1bdc50:
    // 0x1bdc50: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bdc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bdc54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bdc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bdc5c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDC5Cu;
    SET_GPR_U32(ctx, 31, 0x1BDC64u);
    ctx->pc = 0x1BDC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC5Cu;
    // 0x1bdc60: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDC5Cu, 0x1BDC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC64u;
label_1bdc64:
    // 0x1bdc64: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bdc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bdc68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc6c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bdc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bdc70: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDC70u;
    SET_GPR_U32(ctx, 31, 0x1BDC78u);
    ctx->pc = 0x1BDC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC70u;
    // 0x1bdc74: 0x34467000  ori         $a2, $v0, 0x7000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDC70u, 0x1BDC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC78u;
label_1bdc78:
    // 0x1bdc78: 0x3c020709  lui         $v0, 0x709
    ctx->pc = 0x1bdc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1801 << 16));
    // 0x1bdc7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc80: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bdc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bdc84: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDC84u;
    SET_GPR_U32(ctx, 31, 0x1BDC8Cu);
    ctx->pc = 0x1BDC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC84u;
    // 0x1bdc88: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDC84u, 0x1BDC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC8Cu;
label_1bdc8c:
    // 0x1bdc8c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1bdc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1bdc90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc94: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bdc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bdc98: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bdc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bdc9c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDC9Cu;
    SET_GPR_U32(ctx, 31, 0x1BDCA4u);
    ctx->pc = 0x1BDCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC9Cu;
    // 0x1bdca0: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDC9Cu, 0x1BDCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCA4u;
label_1bdca4:
    // 0x1bdca4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1bdca4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1bdca8: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x1bdca8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1bdcac: 0x2ea20004  sltiu       $v0, $s5, 0x4
    ctx->pc = 0x1bdcacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bdcb0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1BDCB0u;
    {
        const bool branch_taken_0x1bdcb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCB0u;
        // 0x1bdcb4: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcb0) {
            ctx->pc = 0x1BDC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bdc20;
        }
    }
    ctx->pc = 0x1BDCB8u;
    // 0x1bdcb8: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1bdcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1bdcbc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1bdcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1bdcc0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bdcc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bdcc4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1bdcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1bdcc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bdcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bdccc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdcd0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1bdcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bdcd4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDCD4u;
    SET_GPR_U32(ctx, 31, 0x1BDCDCu);
    ctx->pc = 0x1BDCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDCD4u;
    // 0x1bdcd8: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDCD4u, 0x1BDCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCDCu;
label_1bdcdc:
    // 0x1bdcdc: 0xc0705e8  jal         func_1C17A0
    ctx->pc = 0x1BDCDCu;
    SET_GPR_U32(ctx, 31, 0x1BDCE4u);
    ctx->pc = 0x1BDCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDCDCu;
    // 0x1bdce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17A0u, 0x1BDCDCu, 0x1BDCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCE4u;
label_1bdce4:
    // 0x1bdce4: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x1bdce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bdce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdcec: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1bdcecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1bdcf0: 0x3c0201b1  lui         $v0, 0x1B1
    ctx->pc = 0x1bdcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)433 << 16));
    // 0x1bdcf4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bdcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bdcf8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1bdcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bdcfc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bdcfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bdd00: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BDD00u;
    SET_GPR_U32(ctx, 31, 0x1BDD08u);
    ctx->pc = 0x1BDD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD00u;
    // 0x1bdd04: 0x629825  or          $s3, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BDD00u, 0x1BDD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD08u;
label_1bdd08:
    // 0x1bdd08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bdd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bdd0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd10: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bdd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bdd14: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x1bdd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1bdd18: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1bdd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1bdd1c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BDD1Cu;
    SET_GPR_U32(ctx, 31, 0x1BDD24u);
    ctx->pc = 0x1BDD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD1Cu;
    // 0x1bdd20: 0x539825  or          $s3, $v0, $s3 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BDD1Cu, 0x1BDD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD24u;
label_1bdd24:
    // 0x1bdd24: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bdd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bdd28: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bdd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bdd2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bdd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bdd30: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bdd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bdd34: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bdd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bdd38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bdd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bdd3c: 0x732025  or          $a0, $v1, $s3
    ctx->pc = 0x1bdd3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x1bdd40: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1bdd40u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bdd44: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bdd44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bdd48: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bdd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bdd4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bdd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bdd54: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bdd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bdd58: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bdd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bdd5c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDD5Cu;
    SET_GPR_U32(ctx, 31, 0x1BDD64u);
    ctx->pc = 0x1BDD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD5Cu;
    // 0x1bdd60: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDD5Cu, 0x1BDD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD64u;
label_1bdd64:
    // 0x1bdd64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd68: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bdd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bdd6c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDD6Cu;
    SET_GPR_U32(ctx, 31, 0x1BDD74u);
    ctx->pc = 0x1BDD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD6Cu;
    // 0x1bdd70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDD6Cu, 0x1BDD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD74u;
label_1bdd74:
    // 0x1bdd74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd7c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDD7Cu;
    SET_GPR_U32(ctx, 31, 0x1BDD84u);
    ctx->pc = 0x1BDD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD7Cu;
    // 0x1bdd80: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDD7Cu, 0x1BDD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD84u;
label_1bdd84:
    // 0x1bdd84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd88: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bdd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bdd8c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDD8Cu;
    SET_GPR_U32(ctx, 31, 0x1BDD94u);
    ctx->pc = 0x1BDD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD8Cu;
    // 0x1bdd90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDD8Cu, 0x1BDD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD94u;
label_1bdd94:
    // 0x1bdd94: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1bdd94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd98: 0x2414003f  addiu       $s4, $zero, 0x3F
    ctx->pc = 0x1bdd98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bdd9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bdd9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bdda0:
    // 0x1bdda0: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1bdda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1bdda4: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1bdda4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1bdda8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bdda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bddac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1bddacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1bddb0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bddb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bddb4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bddb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bddb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bddb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bddbc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bddbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bddc0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bddc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bddc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bddc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddc8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDDC8u;
    SET_GPR_U32(ctx, 31, 0x1BDDD0u);
    ctx->pc = 0x1BDDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDC8u;
    // 0x1bddcc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDDC8u, 0x1BDDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDD0u;
label_1bddd0:
    // 0x1bddd0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bddd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bddd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddd8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bdddc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDDDCu;
    SET_GPR_U32(ctx, 31, 0x1BDDE4u);
    ctx->pc = 0x1BDDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDDCu;
    // 0x1bdde0: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDDDCu, 0x1BDDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDE4u;
label_1bdde4:
    // 0x1bdde4: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bdde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bdde8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddec: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bddecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bddf0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDDF0u;
    SET_GPR_U32(ctx, 31, 0x1BDDF8u);
    ctx->pc = 0x1BDDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDF0u;
    // 0x1bddf4: 0x34467000  ori         $a2, $v0, 0x7000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDDF0u, 0x1BDDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDF8u;
label_1bddf8:
    // 0x1bddf8: 0x3c020709  lui         $v0, 0x709
    ctx->pc = 0x1bddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1801 << 16));
    // 0x1bddfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bddfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bde00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bde04: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDE04u;
    SET_GPR_U32(ctx, 31, 0x1BDE0Cu);
    ctx->pc = 0x1BDE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE04u;
    // 0x1bde08: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDE04u, 0x1BDE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE0Cu;
label_1bde0c:
    // 0x1bde0c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1bde0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1bde10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bde10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde14: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bde14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bde18: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bde18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bde1c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDE1Cu;
    SET_GPR_U32(ctx, 31, 0x1BDE24u);
    ctx->pc = 0x1BDE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE1Cu;
    // 0x1bde20: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDE1Cu, 0x1BDE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE24u;
label_1bde24:
    // 0x1bde24: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1bde24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1bde28: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x1bde28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1bde2c: 0x2ea20004  sltiu       $v0, $s5, 0x4
    ctx->pc = 0x1bde2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bde30: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1BDE30u;
    {
        const bool branch_taken_0x1bde30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE30u;
        // 0x1bde34: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde30) {
            ctx->pc = 0x1BDDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bdda0;
        }
    }
    ctx->pc = 0x1BDE38u;
    // 0x1bde38: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1bde38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1bde3c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1bde3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1bde40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bde40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bde44: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1bde44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1bde48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bde48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bde4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bde4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bde50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bde54: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1bde54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bde58: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDE58u;
    SET_GPR_U32(ctx, 31, 0x1BDE60u);
    ctx->pc = 0x1BDE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE58u;
    // 0x1bde5c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDE58u, 0x1BDE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE60u;
label_1bde60:
    // 0x1bde60: 0xc0705e8  jal         func_1C17A0
    ctx->pc = 0x1BDE60u;
    SET_GPR_U32(ctx, 31, 0x1BDE68u);
    ctx->pc = 0x1BDE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE60u;
    // 0x1bde64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17A0u, 0x1BDE60u, 0x1BDE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE68u;
label_1bde68:
    // 0x1bde68: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1bde68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bde6c: 0x3c0301b1  lui         $v1, 0x1B1
    ctx->pc = 0x1bde6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)433 << 16));
    // 0x1bde70: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1bde70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1bde74: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1bde74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bde78: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1bde78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1bde7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bde7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bde80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bde84: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bde84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bde88: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BDE88u;
    SET_GPR_U32(ctx, 31, 0x1BDE90u);
    ctx->pc = 0x1BDE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE88u;
    // 0x1bde8c: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BDE88u, 0x1BDE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE90u;
label_1bde90:
    // 0x1bde90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bde90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bde94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bde94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde98: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bde98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bde9c: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x1bde9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1bdea0: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1bdea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1bdea4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BDEA4u;
    SET_GPR_U32(ctx, 31, 0x1BDEACu);
    ctx->pc = 0x1BDEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDEA4u;
    // 0x1bdea8: 0x508025  or          $s0, $v0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BDEA4u, 0x1BDEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDEACu;
label_1bdeac:
    // 0x1bdeac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bdeacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bdeb0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bdeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bdeb4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bdeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bdeb8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bdeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bdebc: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bdebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bdec0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bdec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bdec4: 0x702025  or          $a0, $v1, $s0
    ctx->pc = 0x1bdec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x1bdec8: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1bdec8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bdecc: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bdeccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bded0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bded0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bded4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bded4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bded8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bded8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bdedc: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bdedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bdee0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bdee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bdee4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDEE4u;
    SET_GPR_U32(ctx, 31, 0x1BDEECu);
    ctx->pc = 0x1BDEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDEE4u;
    // 0x1bdee8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDEE4u, 0x1BDEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDEECu;
label_1bdeec:
    // 0x1bdeec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdef0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bdef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bdef4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDEF4u;
    SET_GPR_U32(ctx, 31, 0x1BDEFCu);
    ctx->pc = 0x1BDEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDEF4u;
    // 0x1bdef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDEF4u, 0x1BDEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDEFCu;
label_1bdefc:
    // 0x1bdefc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdf00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf04: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDF04u;
    SET_GPR_U32(ctx, 31, 0x1BDF0Cu);
    ctx->pc = 0x1BDF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF04u;
    // 0x1bdf08: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDF04u, 0x1BDF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF0Cu;
label_1bdf0c:
    // 0x1bdf0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf10: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bdf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bdf14: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDF14u;
    SET_GPR_U32(ctx, 31, 0x1BDF1Cu);
    ctx->pc = 0x1BDF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF14u;
    // 0x1bdf18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDF14u, 0x1BDF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF1Cu;
label_1bdf1c:
    // 0x1bdf1c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bdf1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf20: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1bdf20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bdf24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bdf24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bdf28:
    // 0x1bdf28: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1bdf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1bdf2c: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1bdf2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1bdf30: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bdf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bdf34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1bdf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1bdf38: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bdf38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bdf3c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bdf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bdf40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bdf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bdf44: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bdf44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bdf48: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bdf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bdf4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf50: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDF50u;
    SET_GPR_U32(ctx, 31, 0x1BDF58u);
    ctx->pc = 0x1BDF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF50u;
    // 0x1bdf54: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDF50u, 0x1BDF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF58u;
label_1bdf58:
    // 0x1bdf58: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bdf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bdf5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf60: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bdf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bdf64: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDF64u;
    SET_GPR_U32(ctx, 31, 0x1BDF6Cu);
    ctx->pc = 0x1BDF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF64u;
    // 0x1bdf68: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDF64u, 0x1BDF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF6Cu;
label_1bdf6c:
    // 0x1bdf6c: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bdf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bdf70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf74: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bdf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bdf78: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDF78u;
    SET_GPR_U32(ctx, 31, 0x1BDF80u);
    ctx->pc = 0x1BDF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF78u;
    // 0x1bdf7c: 0x34467000  ori         $a2, $v0, 0x7000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDF78u, 0x1BDF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF80u;
label_1bdf80:
    // 0x1bdf80: 0x3c020709  lui         $v0, 0x709
    ctx->pc = 0x1bdf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1801 << 16));
    // 0x1bdf84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bdf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bdf8c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDF8Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF94u);
    ctx->pc = 0x1BDF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF8Cu;
    // 0x1bdf90: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDF8Cu, 0x1BDF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF94u;
label_1bdf94:
    // 0x1bdf94: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1bdf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1bdf98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf9c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bdf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bdfa0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bdfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bdfa4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDFA4u;
    SET_GPR_U32(ctx, 31, 0x1BDFACu);
    ctx->pc = 0x1BDFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFA4u;
    // 0x1bdfa8: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDFA4u, 0x1BDFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFACu;
label_1bdfac:
    // 0x1bdfac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bdfacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1bdfb0: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1bdfb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1bdfb4: 0x2e820004  sltiu       $v0, $s4, 0x4
    ctx->pc = 0x1bdfb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bdfb8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1BDFB8u;
    {
        const bool branch_taken_0x1bdfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFB8u;
        // 0x1bdfbc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfb8) {
            ctx->pc = 0x1BDF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bdf28;
        }
    }
    ctx->pc = 0x1BDFC0u;
    // 0x1bdfc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfc4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bdfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bdfc8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDFC8u;
    SET_GPR_U32(ctx, 31, 0x1BDFD0u);
    ctx->pc = 0x1BDFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFC8u;
    // 0x1bdfcc: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDFC8u, 0x1BDFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFD0u;
label_1bdfd0:
    // 0x1bdfd0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1bdfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bdfd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfd8: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1bdfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1bdfdc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BDFDCu;
    SET_GPR_U32(ctx, 31, 0x1BDFE4u);
    ctx->pc = 0x1BDFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFDCu;
    // 0x1bdfe0: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BDFDCu, 0x1BDFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFE4u;
label_1bdfe4:
    // 0x1bdfe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfe8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BDFE8u;
    SET_GPR_U32(ctx, 31, 0x1BDFF0u);
    ctx->pc = 0x1BDFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFE8u;
    // 0x1bdfec: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BDFE8u, 0x1BDFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFF0u;
label_1bdff0:
    // 0x1bdff0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bdff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bdff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdff8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bdff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bdffc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1bdffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1be000: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1be000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1be004: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1be004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1be008: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1be008u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1be00c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BE00Cu;
    SET_GPR_U32(ctx, 31, 0x1BE014u);
    ctx->pc = 0x1BE010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE00Cu;
    // 0x1be010: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BE00Cu, 0x1BE014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE014u;
label_1be014:
    // 0x1be014: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1be014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be018: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1be018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1be01c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1be01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1be020: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1be020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1be024: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1be024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1be028: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1be028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be02c: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1be02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1be030: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1be030u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1be034: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1be034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1be038: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1be038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1be03c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be040: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1be040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be044: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1be044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1be048: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1be048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1be04c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BE04Cu;
    SET_GPR_U32(ctx, 31, 0x1BE054u);
    ctx->pc = 0x1BE050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE04Cu;
    // 0x1be050: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BE04Cu, 0x1BE054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE054u;
label_1be054:
    // 0x1be054: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BE054u;
    SET_GPR_U32(ctx, 31, 0x1BE05Cu);
    ctx->pc = 0x1BE058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE054u;
    // 0x1be058: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BE054u, 0x1BE05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE05Cu;
label_1be05c:
    // 0x1be05c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1be05cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be064: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1be064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1be068: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1be068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1be06c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1be06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be070: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1be070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1be074: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1be074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1be078: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1be078u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1be07c: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1be07cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1be080: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BE080u;
    SET_GPR_U32(ctx, 31, 0x1BE088u);
    ctx->pc = 0x1BE084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE080u;
    // 0x1be084: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BE080u, 0x1BE088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE088u;
label_1be088:
    // 0x1be088: 0x240301bc  addiu       $v1, $zero, 0x1BC
    ctx->pc = 0x1be088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x1be08c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1be08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1be090: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1be090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1be094: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1be094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1be098: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be09c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1be09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1be0a0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BE0A0u;
    SET_GPR_U32(ctx, 31, 0x1BE0A8u);
    ctx->pc = 0x1BE0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE0A0u;
    // 0x1be0a4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BE0A0u, 0x1BE0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE0A8u;
label_1be0a8:
    // 0x1be0a8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1be0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1be0ac: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1be0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1be0b0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE0B0u;
    {
        const bool branch_taken_0x1be0b0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BE0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0B0u;
        // 0x1be0b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0b0) {
            ctx->pc = 0x1BE0C4u;
            goto label_1be0c4;
        }
    }
    ctx->pc = 0x1BE0B8u;
    // 0x1be0b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be0bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE0BCu;
    {
        const bool branch_taken_0x1be0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0BCu;
        // 0x1be0c0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0bc) {
            ctx->pc = 0x1BE0DCu;
            goto label_1be0dc;
        }
    }
    ctx->pc = 0x1BE0C4u;
label_1be0c4:
    // 0x1be0c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1be0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1be0c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1be0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1be0cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be0ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be0d0: 0x0  nop
    ctx->pc = 0x1be0d0u;
    // NOP
    // 0x1be0d4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1be0d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1be0d8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1be0d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1be0dc:
    // 0x1be0dc: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x1be0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be0e0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1be0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1be0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be0e8: 0x0  nop
    ctx->pc = 0x1be0e8u;
    // NOP
    // 0x1be0ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1be0ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1be0f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1be0f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be0f4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE0F4u;
    {
        const bool branch_taken_0x1be0f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be0f4) {
            ctx->pc = 0x1BE10Cu;
            goto label_1be10c;
        }
    }
    ctx->pc = 0x1BE0FCu;
    // 0x1be0fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1be0fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1be100: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1be100u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1be104: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE104u;
    {
        const bool branch_taken_0x1be104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE104u;
        // 0x1be108: 0x3103c  dsll32      $v0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be104) {
            ctx->pc = 0x1BE128u;
            goto label_1be128;
        }
    }
    ctx->pc = 0x1BE10Cu;
label_1be10c:
    // 0x1be10c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1be10cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1be110: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1be110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1be114: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1be114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1be118: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1be118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1be11c: 0x0  nop
    ctx->pc = 0x1be11cu;
    // NOP
    // 0x1be120: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1be120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1be124: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1be124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_1be128:
    // 0x1be128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be12c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1be12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1be130: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1be130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1be134: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1be134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be138: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1BE138u;
    SET_GPR_U32(ctx, 31, 0x1BE140u);
    ctx->pc = 0x1BE13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE138u;
    // 0x1be13c: 0x34460064  ori         $a2, $v0, 0x64 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1BE138u, 0x1BE140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE140u;
label_1be140:
    // 0x1be140: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be144: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be148: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BE148u;
    SET_GPR_U32(ctx, 31, 0x1BE150u);
    ctx->pc = 0x1BE14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE148u;
    // 0x1be14c: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BE148u, 0x1BE150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE150u;
label_1be150:
    // 0x1be150: 0x8e4378c8  lw          $v1, 0x78C8($s2)
    ctx->pc = 0x1be150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1be154: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1be154u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1be158: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1be158u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1be15c: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x1BE15Cu;
    {
        const bool branch_taken_0x1be15c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE15Cu;
        // 0x1be160: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be15c) {
            ctx->pc = 0x1BE220u;
            goto label_1be220;
        }
    }
    ctx->pc = 0x1BE164u;
    // 0x1be164: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1be164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1be168: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1be168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be16c: 0x0  nop
    ctx->pc = 0x1be16cu;
    // NOP
label_1be170:
    // 0x1be170: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1be170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1be174: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1be174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1be178: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1be178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1be17c: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x1be17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x1be180: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1be180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1be184: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1be184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1be188: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1be188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be18c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1be18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1be190: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1be190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1be194: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be198: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BE198u;
    SET_GPR_U32(ctx, 31, 0x1BE1A0u);
    ctx->pc = 0x1BE19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE198u;
    // 0x1be19c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BE198u, 0x1BE1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1A0u;
label_1be1a0:
    // 0x1be1a0: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x1be1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
    // 0x1be1a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be1a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1be1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be1ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BE1ACu;
    SET_GPR_U32(ctx, 31, 0x1BE1B4u);
    ctx->pc = 0x1BE1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE1ACu;
    // 0x1be1b0: 0x3446000c  ori         $a2, $v0, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BE1ACu, 0x1BE1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1B4u;
label_1be1b4:
    // 0x1be1b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1be1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1be1b8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1be1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1be1bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1be1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1be1c0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1be1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1be1c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1be1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1be1c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be1cc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1be1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1be1d0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BE1D0u;
    SET_GPR_U32(ctx, 31, 0x1BE1D8u);
    ctx->pc = 0x1BE1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE1D0u;
    // 0x1be1d4: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BE1D0u, 0x1BE1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1D8u;
label_1be1d8:
    // 0x1be1d8: 0x3c02070c  lui         $v0, 0x70C
    ctx->pc = 0x1be1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1804 << 16));
    // 0x1be1dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be1e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1be1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be1e4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BE1E4u;
    SET_GPR_U32(ctx, 31, 0x1BE1ECu);
    ctx->pc = 0x1BE1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE1E4u;
    // 0x1be1e8: 0x3446100c  ori         $a2, $v0, 0x100C (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4108);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BE1E4u, 0x1BE1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1ECu;
label_1be1ec:
    // 0x1be1ec: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1be1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1be1f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be1f4: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1be1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1be1f8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1be1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1be1fc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BE1FCu;
    SET_GPR_U32(ctx, 31, 0x1BE204u);
    ctx->pc = 0x1BE200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE1FCu;
    // 0x1be200: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BE1FCu, 0x1BE204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE204u;
label_1be204:
    // 0x1be204: 0x8e4378c8  lw          $v1, 0x78C8($s2)
    ctx->pc = 0x1be204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1be208: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1be208u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1be20c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1be20cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1be210: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1be210u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1be214: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1be214u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1be218: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1BE218u;
    {
        const bool branch_taken_0x1be218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE218u;
        // 0x1be21c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be218) {
            ctx->pc = 0x1BE170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be170;
        }
    }
    ctx->pc = 0x1BE220u;
label_1be220:
    // 0x1be220: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1be220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1be224: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1be224u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be228: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1be228u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be22c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1be22cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1be230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be23c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE23Cu;
        // 0x1be240: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE244u;
}

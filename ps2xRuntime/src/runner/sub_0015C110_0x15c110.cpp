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

// Function: sub_0015C110
// Address: 0x15c110 - 0x15c824
void sub_0015C110_0x15c110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C110_0x15c110");
#endif

    switch (ctx->pc) {
        case 0x15c438u: goto label_15c438;
        case 0x15c478u: goto label_15c478;
        case 0x15c488u: goto label_15c488;
        default: break;
    }

    ctx->pc = 0x15c110u;

    // 0x15c110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15c110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15c114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15c114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15c118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c11c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c120: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15c120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c124: 0x90840098  lbu         $a0, 0x98($a0)
    ctx->pc = 0x15c124u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x15c128: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x15c128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x15c12c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x15c12cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15c130: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x15C130u;
    {
        const bool branch_taken_0x15c130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C130u;
        // 0x15c134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c130) {
            ctx->pc = 0x15C1F0u;
            goto label_15c1f0;
        }
    }
    ctx->pc = 0x15C138u;
    // 0x15c138: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x15c138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x15c13c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x15c13cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15c140: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x15C140u;
    {
        const bool branch_taken_0x15c140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c140) {
            ctx->pc = 0x15C1F0u;
            goto label_15c1f0;
        }
    }
    ctx->pc = 0x15C148u;
    // 0x15c148: 0x8223009a  lb          $v1, 0x9A($s1)
    ctx->pc = 0x15c148u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 154)));
    // 0x15c14c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15c150: 0xa223009a  sb          $v1, 0x9A($s1)
    ctx->pc = 0x15c150u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 154), (uint8_t)GPR_U32(ctx, 3));
    // 0x15c154: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x15c154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x15c158: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x15c158u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x15c15c: 0x1c600018  bgtz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x15C15Cu;
    {
        const bool branch_taken_0x15c15c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x15c15c) {
            ctx->pc = 0x15C1C0u;
            goto label_15c1c0;
        }
    }
    ctx->pc = 0x15C164u;
    // 0x15c164: 0x9226009b  lbu         $a2, 0x9B($s1)
    ctx->pc = 0x15c164u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 155)));
    // 0x15c168: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x15c168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15c16c: 0x92240099  lbu         $a0, 0x99($s1)
    ctx->pc = 0x15c16cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 153)));
    // 0x15c170: 0x92250098  lbu         $a1, 0x98($s1)
    ctx->pc = 0x15c170u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x15c174: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x15c174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15c178: 0x30a40030  andi        $a0, $a1, 0x30
    ctx->pc = 0x15c178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)48);
    // 0x15c17c: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x15c17cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x15c180: 0x832007  srav        $a0, $v1, $a0
    ctx->pc = 0x15c180u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x15c184: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x15c184u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x15c188: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x15C188u;
    {
        const bool branch_taken_0x15c188 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C188u;
        // 0x15c18c: 0x30a30080  andi        $v1, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c188) {
            ctx->pc = 0x15C1B0u;
            goto label_15c1b0;
        }
    }
    ctx->pc = 0x15C190u;
    // 0x15c190: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C190u;
    {
        const bool branch_taken_0x15c190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C190u;
        // 0x15c194: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c190) {
            ctx->pc = 0x15C1A0u;
            goto label_15c1a0;
        }
    }
    ctx->pc = 0x15C198u;
    // 0x15c198: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15C198u;
    {
        const bool branch_taken_0x15c198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c198) {
            ctx->pc = 0x15C1B0u;
            goto label_15c1b0;
        }
    }
    ctx->pc = 0x15C1A0u;
label_15c1a0:
    // 0x15c1a0: 0x30a300bf  andi        $v1, $a1, 0xBF
    ctx->pc = 0x15c1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)191);
    // 0x15c1a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x15c1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c1a8: 0xa2230098  sb          $v1, 0x98($s1)
    ctx->pc = 0x15c1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 152), (uint8_t)GPR_U32(ctx, 3));
    // 0x15c1ac: 0x0  nop
    ctx->pc = 0x15c1acu;
    // NOP
label_15c1b0:
    // 0x15c1b0: 0xa226009b  sb          $a2, 0x9B($s1)
    ctx->pc = 0x15c1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 6));
    // 0x15c1b4: 0x92230098  lbu         $v1, 0x98($s1)
    ctx->pc = 0x15c1b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x15c1b8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x15c1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x15c1bc: 0xa223009a  sb          $v1, 0x9A($s1)
    ctx->pc = 0x15c1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 154), (uint8_t)GPR_U32(ctx, 3));
label_15c1c0:
    // 0x15c1c0: 0x9226009b  lbu         $a2, 0x9B($s1)
    ctx->pc = 0x15c1c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 155)));
    // 0x15c1c4: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x15c1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x15c1c8: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x15c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x15c1cc: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x15c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x15c1d0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15c1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15c1d4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15c1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15c1d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15c1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15c1dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x15c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15c1e0: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x15c1e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x15c1e4: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x15c1e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x15c1e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15c1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15c1ec: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x15c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_15c1f0:
    // 0x15c1f0: 0x92240030  lbu         $a0, 0x30($s1)
    ctx->pc = 0x15c1f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x15c1f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15c1f8: 0x10830181  beq         $a0, $v1, . + 4 + (0x181 << 2)
    ctx->pc = 0x15C1F8u;
    {
        const bool branch_taken_0x15c1f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1F8u;
        // 0x15c1fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1f8) {
            ctx->pc = 0x15C800u;
            goto label_15c800;
        }
    }
    ctx->pc = 0x15C200u;
    // 0x15c200: 0x1083013b  beq         $a0, $v1, . + 4 + (0x13B << 2)
    ctx->pc = 0x15C200u;
    {
        const bool branch_taken_0x15c200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c200) {
            ctx->pc = 0x15C6F0u;
            goto label_15c6f0;
        }
    }
    ctx->pc = 0x15C208u;
    // 0x15c208: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15c208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c20c: 0x10830068  beq         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x15C20Cu;
    {
        const bool branch_taken_0x15c20c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c20c) {
            ctx->pc = 0x15C3B0u;
            goto label_15c3b0;
        }
    }
    ctx->pc = 0x15C214u;
    // 0x15c214: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C214u;
    {
        const bool branch_taken_0x15c214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c214) {
            ctx->pc = 0x15C228u;
            goto label_15c228;
        }
    }
    ctx->pc = 0x15C21Cu;
    // 0x15c21c: 0x1000017c  b           . + 4 + (0x17C << 2)
    ctx->pc = 0x15C21Cu;
    {
        const bool branch_taken_0x15c21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c21c) {
            ctx->pc = 0x15C810u;
            goto label_15c810;
        }
    }
    ctx->pc = 0x15C224u;
    // 0x15c224: 0x0  nop
    ctx->pc = 0x15c224u;
    // NOP
label_15c228:
    // 0x15c228: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c22c: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F004u));
    // 0x15c230: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15c230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15c234: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15c234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15c238: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15c238u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15c23c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c240: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15c240u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15c244: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15c244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15c248: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15c248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15c24c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15c24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15c250: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15c250u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15c254: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x15c254u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15c258: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x15c258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15c25c: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15c260: 0x9467003a  lhu         $a3, 0x3A($v1)
    ctx->pc = 0x15c260u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x15c264: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x15c264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x15c268: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15C268u;
    {
        const bool branch_taken_0x15c268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C268u;
        // 0x15c26c: 0x30e30fff  andi        $v1, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c268) {
            ctx->pc = 0x15C298u;
            goto label_15c298;
        }
    }
    ctx->pc = 0x15C270u;
    // 0x15c270: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x15c270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15c274: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x15c274u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x15c278: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15c278u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15c27c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15c27cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15c280: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15c280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15c284: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15c284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15c288: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15c288u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15c28c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x15c28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15c290: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c294: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15c294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_15c298:
    // 0x15c298: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x15c298u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x15c29c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15c29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15c2a0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15c2a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15c2a4: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x15C2A4u;
    {
        const bool branch_taken_0x15c2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2A4u;
        // 0x15c2a8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2a4) {
            ctx->pc = 0x15C3A0u;
            goto label_15c3a0;
        }
    }
    ctx->pc = 0x15C2ACu;
    // 0x15c2ac: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15c2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15c2b0: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15c2b4: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15c2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15c2b8: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15c2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15c2bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c2c0: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15c2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15c2c4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15c2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15c2c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15c2cc: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15c2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15c2d0: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15c2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15c2d4: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x15c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x15c2d8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x15c2d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15c2dc: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15c2e0: 0x94670038  lhu         $a3, 0x38($v1)
    ctx->pc = 0x15c2e0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x15c2e4: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x15c2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x15c2e8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15C2E8u;
    {
        const bool branch_taken_0x15c2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2E8u;
        // 0x15c2ec: 0x30e30fff  andi        $v1, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2e8) {
            ctx->pc = 0x15C318u;
            goto label_15c318;
        }
    }
    ctx->pc = 0x15C2F0u;
    // 0x15c2f0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x15c2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15c2f4: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x15c2f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x15c2f8: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15c2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15c2fc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15c2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15c300: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15c300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15c304: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15c304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15c308: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15c308u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15c30c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x15c30cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15c310: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c314: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15c314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_15c318:
    // 0x15c318: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x15c318u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x15c31c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c320: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15c320u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F004u));
    // 0x15c324: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15c324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15c328: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15c328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15c32c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15c32cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15c330: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c334: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15c334u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15c338: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15c338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15c33c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15c340: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15c340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15c344: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15c344u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15c348: 0x31b82  srl         $v1, $v1, 14
    ctx->pc = 0x15c348u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 14));
    // 0x15c34c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x15c34cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15c350: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15c350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15c354: 0x9467003c  lhu         $a3, 0x3C($v1)
    ctx->pc = 0x15c354u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x15c358: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x15c358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x15c35c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15C35Cu;
    {
        const bool branch_taken_0x15c35c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C35Cu;
        // 0x15c360: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c35c) {
            ctx->pc = 0x15C38Cu;
            goto label_15c38c;
        }
    }
    ctx->pc = 0x15C364u;
    // 0x15c364: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x15c364u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x15c368: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15c368u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15c36c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15c36cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15c370: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15c370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15c374: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15c374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15c378: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15c378u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15c37c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x15c37cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15c380: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c384: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15C384u;
    {
        const bool branch_taken_0x15c384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C384u;
        // 0x15c388: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c384) {
            ctx->pc = 0x15C390u;
            goto label_15c390;
        }
    }
    ctx->pc = 0x15C38Cu;
label_15c38c:
    // 0x15c38c: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15c38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
label_15c390:
    // 0x15c390: 0xa6230096  sh          $v1, 0x96($s1)
    ctx->pc = 0x15c390u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x15c394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15c394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c398: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x15C398u;
    {
        const bool branch_taken_0x15c398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C398u;
        // 0x15c39c: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c398) {
            ctx->pc = 0x15C810u;
            goto label_15c810;
        }
    }
    ctx->pc = 0x15C3A0u;
label_15c3a0:
    // 0x15c3a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c3a4: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x15C3A4u;
    {
        const bool branch_taken_0x15c3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3A4u;
        // 0x15c3a8: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3a4) {
            ctx->pc = 0x15C810u;
            goto label_15c810;
        }
    }
    ctx->pc = 0x15C3ACu;
    // 0x15c3ac: 0x0  nop
    ctx->pc = 0x15c3acu;
    // NOP
label_15c3b0:
    // 0x15c3b0: 0x86230096  lh          $v1, 0x96($s1)
    ctx->pc = 0x15c3b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x15c3b4: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x15C3B4u;
    {
        const bool branch_taken_0x15c3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3B4u;
        // 0x15c3b8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3b4) {
            ctx->pc = 0x15C510u;
            goto label_15c510;
        }
    }
    ctx->pc = 0x15C3BCu;
    // 0x15c3bc: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15c3c0: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15c3c4: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15c3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15c3c8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15c3cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c3d0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15c3d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15c3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15c3d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15c3dc: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15c3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15c3e0: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15c3e4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x15c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x15c3e8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15c3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15c3ec: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x15c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15c3f0: 0x9446002e  lhu         $a2, 0x2E($v0)
    ctx->pc = 0x15c3f0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x15c3f4: 0x30c2f000  andi        $v0, $a2, 0xF000
    ctx->pc = 0x15c3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)61440);
    // 0x15c3f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15C3F8u;
    {
        const bool branch_taken_0x15c3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3F8u;
        // 0x15c3fc: 0x30c20fff  andi        $v0, $a2, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3f8) {
            ctx->pc = 0x15C428u;
            goto label_15c428;
        }
    }
    ctx->pc = 0x15C400u;
    // 0x15c400: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15c400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15c404: 0x62303  sra         $a0, $a2, 12
    ctx->pc = 0x15c404u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 12));
    // 0x15c408: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x15c408u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15c40c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15c40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15c410: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15c410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15c414: 0x30c20fff  andi        $v0, $a2, 0xFFF
    ctx->pc = 0x15c414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x15c418: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15c418u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15c41c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15c41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15c420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c424: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15c424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15c428:
    // 0x15c428: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x15c428u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15c42c: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15C42Cu;
    {
        const bool branch_taken_0x15c42c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c42c) {
            ctx->pc = 0x15C438u;
            goto label_15c438;
        }
    }
    ctx->pc = 0x15C434u;
    // 0x15c434: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x15c434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c438:
    // 0x15c438: 0x92270001  lbu         $a3, 0x1($s1)
    ctx->pc = 0x15c438u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x15c43c: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x15c43cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15c440: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15c440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15c444: 0x9e230004  lwu         $v1, 0x4($s1)
    ctx->pc = 0x15c444u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15c448: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x15c448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x15c44c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15c44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15c450: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x15c450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x15c454: 0x3c053003  lui         $a1, 0x3003
    ctx->pc = 0x15c454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12291 << 16));
    // 0x15c458: 0x24846690  addiu       $a0, $a0, 0x6690
    ctx->pc = 0x15c458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    // 0x15c45c: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x15c45cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x15c460: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x15c460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x15c464: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15c464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15c468: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x15c468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x15c46c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15c46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15c470: 0xc05db84  jal         func_176E10
    ctx->pc = 0x15C470u;
    SET_GPR_U32(ctx, 31, 0x15C478u);
    ctx->pc = 0x15C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C470u;
    // 0x15c474: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176E10u, 0x15C470u, 0x15C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C478u;
label_15c478:
    // 0x15c478: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C478u;
    {
        const bool branch_taken_0x15c478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C478u;
        // 0x15c47c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c478) {
            ctx->pc = 0x15C488u;
            goto label_15c488;
        }
    }
    ctx->pc = 0x15C480u;
    // 0x15c480: 0xc057880  jal         func_15E200
    ctx->pc = 0x15C480u;
    SET_GPR_U32(ctx, 31, 0x15C488u);
    ctx->pc = 0x15C484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C480u;
    // 0x15c484: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E200u, 0x15C480u, 0x15C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C488u;
label_15c488:
    // 0x15c488: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x15c488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x15c48c: 0x1600ffea  bnez        $s0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x15C48Cu;
    {
        const bool branch_taken_0x15c48c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C48Cu;
        // 0x15c490: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c48c) {
            ctx->pc = 0x15C438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c438;
        }
    }
    ctx->pc = 0x15C494u;
    // 0x15c494: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15c494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15c498: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15c498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15c49c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15c49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15c4a0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15c4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15c4a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c4a8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15c4ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15c4b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15c4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15c4b4: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15c4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15c4b8: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15c4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15c4bc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x15c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x15c4c0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15c4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15c4c4: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x15c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15c4c8: 0x9446003c  lhu         $a2, 0x3C($v0)
    ctx->pc = 0x15c4c8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x15c4cc: 0x30c2f000  andi        $v0, $a2, 0xF000
    ctx->pc = 0x15c4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)61440);
    // 0x15c4d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15C4D0u;
    {
        const bool branch_taken_0x15c4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4D0u;
        // 0x15c4d4: 0x30c20fff  andi        $v0, $a2, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4d0) {
            ctx->pc = 0x15C500u;
            goto label_15c500;
        }
    }
    ctx->pc = 0x15C4D8u;
    // 0x15c4d8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15c4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15c4dc: 0x62303  sra         $a0, $a2, 12
    ctx->pc = 0x15c4dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 12));
    // 0x15c4e0: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x15c4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15c4e4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15c4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15c4e8: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15c4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15c4ec: 0x30c20fff  andi        $v0, $a2, 0xFFF
    ctx->pc = 0x15c4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x15c4f0: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15c4f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15c4f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15c4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15c4f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c4fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15c4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15c500:
    // 0x15c500: 0xa6220096  sh          $v0, 0x96($s1)
    ctx->pc = 0x15c500u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x15c504: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15C504u;
    {
        const bool branch_taken_0x15c504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C504u;
        // 0x15c508: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c504) {
            ctx->pc = 0x15C518u;
            goto label_15c518;
        }
    }
    ctx->pc = 0x15C50Cu;
    // 0x15c50c: 0x0  nop
    ctx->pc = 0x15c50cu;
    // NOP
label_15c510:
    // 0x15c510: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15c510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15c514: 0xa6230096  sh          $v1, 0x96($s1)
    ctx->pc = 0x15c514u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 3));
label_15c518:
    // 0x15c518: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15c518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15c51c: 0x94630030  lhu         $v1, 0x30($v1)
    ctx->pc = 0x15c51cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15c520: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15C520u;
    {
        const bool branch_taken_0x15c520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c520) {
            ctx->pc = 0x15C550u;
            goto label_15c550;
        }
    }
    ctx->pc = 0x15C528u;
    // 0x15c528: 0x962400a0  lhu         $a0, 0xA0($s1)
    ctx->pc = 0x15c528u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x15c52c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15c52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15c530: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15c530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15c534: 0xa62400a0  sh          $a0, 0xA0($s1)
    ctx->pc = 0x15c534u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 160), (uint16_t)GPR_U32(ctx, 4));
    // 0x15c538: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15c538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15c53c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C53Cu;
    {
        const bool branch_taken_0x15c53c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15c53c) {
            ctx->pc = 0x15C550u;
            goto label_15c550;
        }
    }
    ctx->pc = 0x15C544u;
    // 0x15c544: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15c544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15c548: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x15C548u;
    {
        const bool branch_taken_0x15c548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C548u;
        // 0x15c54c: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c548) {
            ctx->pc = 0x15C810u;
            goto label_15c810;
        }
    }
    ctx->pc = 0x15C550u;
label_15c550:
    // 0x15c550: 0x86230094  lh          $v1, 0x94($s1)
    ctx->pc = 0x15c550u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x15c554: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15c554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15c558: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x15c558u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x15c55c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15c55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15c560: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15c560u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15c564: 0x1c6000aa  bgtz        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x15C564u;
    {
        const bool branch_taken_0x15c564 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x15C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C564u;
        // 0x15c568: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c564) {
            ctx->pc = 0x15C810u;
            goto label_15c810;
        }
    }
    ctx->pc = 0x15C56Cu;
    // 0x15c56c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15c570: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15c570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15c574: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15c574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15c578: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15c578u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15c57c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c580: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15c580u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15c584: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15c584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15c588: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15c588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15c58c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15c58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15c590: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15c590u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15c594: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x15c594u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15c598: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x15c598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15c59c: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15c5a0: 0x9467003a  lhu         $a3, 0x3A($v1)
    ctx->pc = 0x15c5a0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x15c5a4: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x15c5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x15c5a8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15C5A8u;
    {
        const bool branch_taken_0x15c5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5A8u;
        // 0x15c5ac: 0x30e30fff  andi        $v1, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5a8) {
            ctx->pc = 0x15C5D8u;
            goto label_15c5d8;
        }
    }
    ctx->pc = 0x15C5B0u;
    // 0x15c5b0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x15c5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15c5b4: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x15c5b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x15c5b8: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15c5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15c5bc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15c5bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15c5c0: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15c5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15c5c4: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15c5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15c5c8: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15c5c8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15c5cc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x15c5ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15c5d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c5d4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15c5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_15c5d8:
    // 0x15c5d8: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x15c5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x15c5dc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15c5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15c5e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15c5e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15c5e4: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x15C5E4u;
    {
        const bool branch_taken_0x15c5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5E4u;
        // 0x15c5e8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5e4) {
            ctx->pc = 0x15C6E0u;
            goto label_15c6e0;
        }
    }
    ctx->pc = 0x15C5ECu;
    // 0x15c5ec: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15c5f0: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15c5f4: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15c5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15c5f8: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15c5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15c5fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c600: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15c600u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15c604: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15c604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15c608: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15c608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15c60c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15c60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15c610: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15c610u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15c614: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x15c614u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x15c618: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x15c618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15c61c: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15c620: 0x94670038  lhu         $a3, 0x38($v1)
    ctx->pc = 0x15c620u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x15c624: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x15c624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x15c628: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15C628u;
    {
        const bool branch_taken_0x15c628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C628u;
        // 0x15c62c: 0x30e30fff  andi        $v1, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c628) {
            ctx->pc = 0x15C658u;
            goto label_15c658;
        }
    }
    ctx->pc = 0x15C630u;
    // 0x15c630: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x15c630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15c634: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x15c634u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x15c638: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15c638u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15c63c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15c63cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15c640: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15c640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15c644: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15c644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15c648: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15c648u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15c64c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x15c64cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15c650: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c654: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15c654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_15c658:
    // 0x15c658: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x15c658u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x15c65c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c660: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15c660u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F004u));
    // 0x15c664: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15c664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15c668: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15c668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15c66c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15c66cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15c670: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c674: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15c674u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15c678: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15c678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15c67c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15c67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15c680: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15c680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15c684: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15c684u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15c688: 0x31b82  srl         $v1, $v1, 14
    ctx->pc = 0x15c688u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 14));
    // 0x15c68c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x15c68cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15c690: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15c690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15c694: 0x9467003c  lhu         $a3, 0x3C($v1)
    ctx->pc = 0x15c694u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x15c698: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x15c698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x15c69c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15C69Cu;
    {
        const bool branch_taken_0x15c69c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C69Cu;
        // 0x15c6a0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c69c) {
            ctx->pc = 0x15C6CCu;
            goto label_15c6cc;
        }
    }
    ctx->pc = 0x15C6A4u;
    // 0x15c6a4: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x15c6a4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x15c6a8: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15c6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15c6ac: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15c6acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15c6b0: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15c6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15c6b4: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15c6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15c6b8: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15c6b8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15c6bc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x15c6bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15c6c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c6c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15C6C4u;
    {
        const bool branch_taken_0x15c6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6C4u;
        // 0x15c6c8: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6c4) {
            ctx->pc = 0x15C6D0u;
            goto label_15c6d0;
        }
    }
    ctx->pc = 0x15C6CCu;
label_15c6cc:
    // 0x15c6cc: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15c6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
label_15c6d0:
    // 0x15c6d0: 0xa6230096  sh          $v1, 0x96($s1)
    ctx->pc = 0x15c6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x15c6d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c6d8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x15C6D8u;
    {
        const bool branch_taken_0x15c6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6D8u;
        // 0x15c6dc: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6d8) {
            ctx->pc = 0x15C810u;
            goto label_15c810;
        }
    }
    ctx->pc = 0x15C6E0u;
label_15c6e0:
    // 0x15c6e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c6e4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x15C6E4u;
    {
        const bool branch_taken_0x15c6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6E4u;
        // 0x15c6e8: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6e4) {
            ctx->pc = 0x15C810u;
            goto label_15c810;
        }
    }
    ctx->pc = 0x15C6ECu;
    // 0x15c6ec: 0x0  nop
    ctx->pc = 0x15c6ecu;
    // NOP
label_15c6f0:
    // 0x15c6f0: 0x86230094  lh          $v1, 0x94($s1)
    ctx->pc = 0x15c6f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x15c6f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15c6f8: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x15c6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x15c6fc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15c6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15c700: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15c700u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15c704: 0x1c600042  bgtz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x15C704u;
    {
        const bool branch_taken_0x15c704 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x15C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C704u;
        // 0x15c708: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c704) {
            ctx->pc = 0x15C810u;
            goto label_15c810;
        }
    }
    ctx->pc = 0x15C70Cu;
    // 0x15c70c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15c710: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15c710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15c714: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15c714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15c718: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15c718u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15c71c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c720: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15c720u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15c724: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15c724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15c728: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15c728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15c72c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15c72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15c730: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15c730u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15c734: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x15c734u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x15c738: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x15c738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15c73c: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15c740: 0x94670038  lhu         $a3, 0x38($v1)
    ctx->pc = 0x15c740u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x15c744: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x15c744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x15c748: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15C748u;
    {
        const bool branch_taken_0x15c748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C748u;
        // 0x15c74c: 0x30e30fff  andi        $v1, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c748) {
            ctx->pc = 0x15C778u;
            goto label_15c778;
        }
    }
    ctx->pc = 0x15C750u;
    // 0x15c750: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x15c750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15c754: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x15c754u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x15c758: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15c758u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15c75c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15c75cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15c760: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15c760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15c764: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15c764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15c768: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15c768u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15c76c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x15c76cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15c770: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c774: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15c774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_15c778:
    // 0x15c778: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x15c778u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x15c77c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c780: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15c780u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F004u));
    // 0x15c784: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15c784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15c788: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15c788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15c78c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15c78cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15c790: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c794: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15c794u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15c798: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15c798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15c79c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15c79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15c7a0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15c7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15c7a4: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15c7a8: 0x31b82  srl         $v1, $v1, 14
    ctx->pc = 0x15c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 14));
    // 0x15c7ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x15c7acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15c7b0: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15c7b4: 0x9467003c  lhu         $a3, 0x3C($v1)
    ctx->pc = 0x15c7b4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x15c7b8: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x15c7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x15c7bc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15C7BCu;
    {
        const bool branch_taken_0x15c7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7BCu;
        // 0x15c7c0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7bc) {
            ctx->pc = 0x15C7ECu;
            goto label_15c7ec;
        }
    }
    ctx->pc = 0x15C7C4u;
    // 0x15c7c4: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x15c7c4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x15c7c8: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15c7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15c7cc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15c7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15c7d0: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15c7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15c7d4: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15c7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15c7d8: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15c7d8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15c7dc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x15c7dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15c7e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c7e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15C7E4u;
    {
        const bool branch_taken_0x15c7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7E4u;
        // 0x15c7e8: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7e4) {
            ctx->pc = 0x15C7F0u;
            goto label_15c7f0;
        }
    }
    ctx->pc = 0x15C7ECu;
label_15c7ec:
    // 0x15c7ec: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15c7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
label_15c7f0:
    // 0x15c7f0: 0xa6230096  sh          $v1, 0x96($s1)
    ctx->pc = 0x15c7f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x15c7f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c7f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15C7F8u;
    {
        const bool branch_taken_0x15c7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7F8u;
        // 0x15c7fc: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7f8) {
            ctx->pc = 0x15C810u;
            goto label_15c810;
        }
    }
    ctx->pc = 0x15C800u;
label_15c800:
    // 0x15c800: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x15c800u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15c804: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x15c804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x15c808: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x15c808u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x15c80c: 0x0  nop
    ctx->pc = 0x15c80cu;
    // NOP
label_15c810:
    // 0x15c810: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15c810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c81c: 0x3e00008  jr          $ra
    ctx->pc = 0x15C81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C81Cu;
        // 0x15c820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C824u;
}

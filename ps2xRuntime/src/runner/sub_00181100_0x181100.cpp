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

// Function: sub_00181100
// Address: 0x181100 - 0x181388
void sub_00181100_0x181100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181100_0x181100");
#endif

    switch (ctx->pc) {
        case 0x181128u: goto label_181128;
        case 0x181318u: goto label_181318;
        default: break;
    }

    ctx->pc = 0x181100u;

    // 0x181100: 0x8c880048  lw          $t0, 0x48($a0)
    ctx->pc = 0x181100u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x181104: 0x61202  srl         $v0, $a2, 8
    ctx->pc = 0x181104u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x181108: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x181108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18110c: 0x14a00016  bnez        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18110Cu;
    {
        const bool branch_taken_0x18110c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x181110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18110Cu;
        // 0x181110: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18110c) {
            ctx->pc = 0x181168u;
            goto label_181168;
        }
    }
    ctx->pc = 0x181114u;
    // 0x181114: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x181114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x181118: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x181118u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18111c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18111Cu;
    {
        const bool branch_taken_0x18111c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18111Cu;
        // 0x181120: 0x64880  sll         $t1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18111c) {
            ctx->pc = 0x181150u;
            goto label_181150;
        }
    }
    ctx->pc = 0x181124u;
    // 0x181124: 0x0  nop
    ctx->pc = 0x181124u;
    // NOP
label_181128:
    // 0x181128: 0xa2880  sll         $a1, $t2, 2
    ctx->pc = 0x181128u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x18112c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x18112cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x181130: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x181130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x181134: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x181134u;
    {
        const bool branch_taken_0x181134 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x181138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181134u;
        // 0x181138: 0xa93021  addu        $a2, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181134) {
            ctx->pc = 0x181148u;
            goto label_181148;
        }
    }
    ctx->pc = 0x18113Cu;
    // 0x18113c: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x18113cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x181140: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x181140u;
    {
        const bool branch_taken_0x181140 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x181140) {
            ctx->pc = 0x181158u;
            goto label_181158;
        }
    }
    ctx->pc = 0x181148u;
label_181148:
    // 0x181148: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x181148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x18114c: 0x0  nop
    ctx->pc = 0x18114cu;
    // NOP
label_181150:
    // 0x181150: 0x541fff5  bgez        $t2, . + 4 + (-0xB << 2)
    ctx->pc = 0x181150u;
    {
        const bool branch_taken_0x181150 = (GPR_S64(ctx, 10) >= 0);
        if (branch_taken_0x181150) {
            ctx->pc = 0x181128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181128;
        }
    }
    ctx->pc = 0x181158u;
label_181158:
    // 0x181158: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181158u;
    {
        const bool branch_taken_0x181158 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x181158) {
            ctx->pc = 0x181168u;
            goto label_181168;
        }
    }
    ctx->pc = 0x181160u;
    // 0x181160: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x181160u;
    {
        const bool branch_taken_0x181160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181160u;
        // 0x181164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181160) {
            ctx->pc = 0x181380u;
            goto label_181380;
        }
    }
    ctx->pc = 0x181168u;
label_181168:
    // 0x181168: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x181168u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18116c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x18116cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x181170: 0xc9082b  sltu        $at, $a2, $t1
    ctx->pc = 0x181170u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x181174: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x181174u;
    {
        const bool branch_taken_0x181174 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x181174) {
            ctx->pc = 0x181188u;
            goto label_181188;
        }
    }
    ctx->pc = 0x18117Cu;
    // 0x18117c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x18117Cu;
    {
        const bool branch_taken_0x18117c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18117Cu;
        // 0x181180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18117c) {
            ctx->pc = 0x181380u;
            goto label_181380;
        }
    }
    ctx->pc = 0x181184u;
    // 0x181184: 0x0  nop
    ctx->pc = 0x181184u;
    // NOP
label_181188:
    // 0x181188: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x181188u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18118c: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x18118cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x181190: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x181190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x181194: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x181194u;
    {
        const bool branch_taken_0x181194 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x181194) {
            ctx->pc = 0x1811A8u;
            goto label_1811a8;
        }
    }
    ctx->pc = 0x18119Cu;
    // 0x18119c: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x18119cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x1811a0: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1811A0u;
    {
        const bool branch_taken_0x1811a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1811A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811A0u;
        // 0x1811a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1811a0) {
            ctx->pc = 0x181380u;
            goto label_181380;
        }
    }
    ctx->pc = 0x1811A8u;
label_1811a8:
    // 0x1811a8: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x1811a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1811ac: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1811ACu;
    {
        const bool branch_taken_0x1811ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1811ac) {
            ctx->pc = 0x1811C0u;
            goto label_1811c0;
        }
    }
    ctx->pc = 0x1811B4u;
    // 0x1811b4: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x1811b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x1811b8: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1811B8u;
    {
        const bool branch_taken_0x1811b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1811BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811B8u;
        // 0x1811bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1811b8) {
            ctx->pc = 0x181380u;
            goto label_181380;
        }
    }
    ctx->pc = 0x1811C0u;
label_1811c0:
    // 0x1811c0: 0xac850090  sw          $a1, 0x90($a0)
    ctx->pc = 0x1811c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 5));
    // 0x1811c4: 0xac860094  sw          $a2, 0x94($a0)
    ctx->pc = 0x1811c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 6));
    // 0x1811c8: 0x34e50008  ori         $a1, $a3, 0x8
    ctx->pc = 0x1811c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x1811cc: 0x94cb0000  lhu         $t3, 0x0($a2)
    ctx->pc = 0x1811ccu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1811d0: 0x24ca0003  addiu       $t2, $a2, 0x3
    ctx->pc = 0x1811d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1811d4: 0x2409fffc  addiu       $t1, $zero, -0x4
    ctx->pc = 0x1811d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1811d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1811d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1811dc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1811dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1811e0: 0xa48b00c8  sh          $t3, 0xC8($a0)
    ctx->pc = 0x1811e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 200), (uint16_t)GPR_U32(ctx, 11));
    // 0x1811e4: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x1811e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x1811e8: 0x90cb0002  lbu         $t3, 0x2($a2)
    ctx->pc = 0x1811e8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1811ec: 0xa08b00cc  sb          $t3, 0xCC($a0)
    ctx->pc = 0x1811ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 11));
    // 0x1811f0: 0xac8a0098  sw          $t2, 0x98($a0)
    ctx->pc = 0x1811f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 10));
    // 0x1811f4: 0x908b00cc  lbu         $t3, 0xCC($a0)
    ctx->pc = 0x1811f4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x1811f8: 0x8c8a0098  lw          $t2, 0x98($a0)
    ctx->pc = 0x1811f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x1811fc: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x1811fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x181200: 0xac8a009c  sw          $t2, 0x9C($a0)
    ctx->pc = 0x181200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 10));
    // 0x181204: 0x8c8b009c  lw          $t3, 0x9C($a0)
    ctx->pc = 0x181204u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x181208: 0x908a00cc  lbu         $t2, 0xCC($a0)
    ctx->pc = 0x181208u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x18120c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x18120cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x181210: 0x254a0003  addiu       $t2, $t2, 0x3
    ctx->pc = 0x181210u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x181214: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x181214u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x181218: 0xac8900a4  sw          $t1, 0xA4($a0)
    ctx->pc = 0x181218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 9));
    // 0x18121c: 0x8c8900a4  lw          $t1, 0xA4($a0)
    ctx->pc = 0x18121cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x181220: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x181220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x181224: 0xac8900a0  sw          $t1, 0xA0($a0)
    ctx->pc = 0x181224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 9));
    // 0x181228: 0x8c8900a4  lw          $t1, 0xA4($a0)
    ctx->pc = 0x181228u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x18122c: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x18122cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181230: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x181230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x181234: 0xac8600a4  sw          $a2, 0xA4($a0)
    ctx->pc = 0x181234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 6));
    // 0x181238: 0x908900cc  lbu         $t1, 0xCC($a0)
    ctx->pc = 0x181238u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x18123c: 0x8c8600a0  lw          $a2, 0xA0($a0)
    ctx->pc = 0x18123cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x181240: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x181240u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x181244: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x181244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x181248: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x181248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18124c: 0xe48001d0  swc1        $f0, 0x1D0($a0)
    ctx->pc = 0x18124cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 464), bits); }
    // 0x181250: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x181250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x181254: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x181254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181258: 0xe48001d4  swc1        $f0, 0x1D4($a0)
    ctx->pc = 0x181258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 468), bits); }
    // 0x18125c: 0xa08701d8  sb          $a3, 0x1D8($a0)
    ctx->pc = 0x18125cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 472), (uint8_t)GPR_U32(ctx, 7));
    // 0x181260: 0x908600ca  lbu         $a2, 0xCA($a0)
    ctx->pc = 0x181260u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 202)));
    // 0x181264: 0xa08600cb  sb          $a2, 0xCB($a0)
    ctx->pc = 0x181264u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 203), (uint8_t)GPR_U32(ctx, 6));
    // 0x181268: 0xa08300ca  sb          $v1, 0xCA($a0)
    ctx->pc = 0x181268u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 202), (uint8_t)GPR_U32(ctx, 3));
    // 0x18126c: 0xac8500b0  sw          $a1, 0xB0($a0)
    ctx->pc = 0x18126cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
    // 0x181270: 0x8c8500c4  lw          $a1, 0xC4($a0)
    ctx->pc = 0x181270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x181274: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x181274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x181278: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x181278u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18127c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18127cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x181280: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x181280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181284: 0xac8300b4  sw          $v1, 0xB4($a0)
    ctx->pc = 0x181284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 3));
    // 0x181288: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x181288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x18128c: 0x8c8500b8  lw          $a1, 0xB8($a0)
    ctx->pc = 0x18128cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x181290: 0x8c8300b4  lw          $v1, 0xB4($a0)
    ctx->pc = 0x181290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x181294: 0xa02827  not         $a1, $a1
    ctx->pc = 0x181294u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x181298: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x181298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x18129c: 0xac830074  sw          $v1, 0x74($a0)
    ctx->pc = 0x18129cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 3));
    // 0x1812a0: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x1812a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1812a4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1812a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1812a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1812A8u;
    {
        const bool branch_taken_0x1812a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1812a8) {
            ctx->pc = 0x1812C0u;
            goto label_1812c0;
        }
    }
    ctx->pc = 0x1812B0u;
    // 0x1812b0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1812b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1812b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1812b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1812b8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1812b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1812bc: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x1812bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
label_1812c0:
    // 0x1812c0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1812C0u;
    {
        const bool branch_taken_0x1812c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1812c0) {
            ctx->pc = 0x181370u;
            goto label_181370;
        }
    }
    ctx->pc = 0x1812C8u;
    // 0x1812c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1812C8u;
    {
        const bool branch_taken_0x1812c8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1812CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812C8u;
        // 0x1812cc: 0x22842  srl         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1812c8) {
            ctx->pc = 0x1812DCu;
            goto label_1812dc;
        }
    }
    ctx->pc = 0x1812D0u;
    // 0x1812d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1812d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1812d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1812D4u;
    {
        const bool branch_taken_0x1812d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1812D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812D4u;
        // 0x1812d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1812d4) {
            ctx->pc = 0x1812F4u;
            goto label_1812f4;
        }
    }
    ctx->pc = 0x1812DCu;
label_1812dc:
    // 0x1812dc: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1812dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1812e0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1812e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1812e4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1812e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1812e8: 0x0  nop
    ctx->pc = 0x1812e8u;
    // NOP
    // 0x1812ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1812ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1812f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1812f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1812f4:
    // 0x1812f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1812f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1812f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1812f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1812fc: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x1812fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x181300: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x181300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x181304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x181304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181308: 0x0  nop
    ctx->pc = 0x181308u;
    // NOP
    // 0x18130c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18130cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x181310: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x181310u;
    {
        const bool branch_taken_0x181310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181310u;
        // 0x181314: 0xe48000ac  swc1        $f0, 0xAC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x181310) {
            ctx->pc = 0x181358u;
            goto label_181358;
        }
    }
    ctx->pc = 0x181318u;
label_181318:
    // 0x181318: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x181318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18131c: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x18131cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x181320: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x181320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x181324: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x181324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181328: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x181328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18132c: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x18132cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x181330: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x181330u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x181334: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x181334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x181338: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x181338u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x18133c: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x18133cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x181340: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x181340u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x181344: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x181344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x181348: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x181348u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x18134c: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x18134cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x181350: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x181350u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x181354: 0x0  nop
    ctx->pc = 0x181354u;
    // NOP
label_181358:
    // 0x181358: 0x9502006a  lhu         $v0, 0x6A($t0)
    ctx->pc = 0x181358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 106)));
    // 0x18135c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x18135cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x181360: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x181360u;
    {
        const bool branch_taken_0x181360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181360) {
            ctx->pc = 0x181318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181318;
        }
    }
    ctx->pc = 0x181368u;
    // 0x181368: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x181368u;
    {
        const bool branch_taken_0x181368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181368) {
            ctx->pc = 0x181378u;
            goto label_181378;
        }
    }
    ctx->pc = 0x181370u;
label_181370:
    // 0x181370: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x181370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x181374: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x181374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
label_181378:
    // 0x181378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18137c: 0x0  nop
    ctx->pc = 0x18137cu;
    // NOP
label_181380:
    // 0x181380: 0x3e00008  jr          $ra
    ctx->pc = 0x181380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181388u;
}

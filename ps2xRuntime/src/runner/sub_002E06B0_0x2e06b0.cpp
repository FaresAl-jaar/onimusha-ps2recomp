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

// Function: sub_002E06B0
// Address: 0x2e06b0 - 0x2e0918
void sub_002E06B0_0x2e06b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E06B0_0x2e06b0");
#endif

    switch (ctx->pc) {
        case 0x2e06e0u: goto label_2e06e0;
        case 0x2e0748u: goto label_2e0748;
        case 0x2e0770u: goto label_2e0770;
        case 0x2e07f8u: goto label_2e07f8;
        case 0x2e0904u: goto label_2e0904;
        default: break;
    }

    ctx->pc = 0x2e06b0u;

    // 0x2e06b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e06b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e06b4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2e06b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e06b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e06b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e06bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e06bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e06c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e06c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e06c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e06c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06c8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2e06c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e06cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e06ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06d0: 0xa0820031  sb          $v0, 0x31($a0)
    ctx->pc = 0x2e06d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e06d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e06d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06d8: 0xa4800606  sh          $zero, 0x606($a0)
    ctx->pc = 0x2e06d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1542), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e06dc: 0xa080003a  sb          $zero, 0x3A($a0)
    ctx->pc = 0x2e06dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 0));
label_2e06e0:
    // 0x2e06e0: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x2e06e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2e06e4: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x2e06e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x2e06e8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2e06e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2e06ec: 0xa06000c0  sb          $zero, 0xC0($v1)
    ctx->pc = 0x2e06ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 192), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e06f0: 0x2cc20018  sltiu       $v0, $a2, 0x18
    ctx->pc = 0x2e06f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x2e06f4: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x2e06f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x2e06f8: 0xa06000c1  sb          $zero, 0xC1($v1)
    ctx->pc = 0x2e06f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 193), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e06fc: 0xaca00048  sw          $zero, 0x48($a1)
    ctx->pc = 0x2e06fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 0));
    // 0x2e0700: 0xa06000c2  sb          $zero, 0xC2($v1)
    ctx->pc = 0x2e0700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 194), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0704: 0xaca0004c  sw          $zero, 0x4C($a1)
    ctx->pc = 0x2e0704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
    // 0x2e0708: 0xa06000c3  sb          $zero, 0xC3($v1)
    ctx->pc = 0x2e0708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 195), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e070c: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x2e070cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
    // 0x2e0710: 0xa06000c4  sb          $zero, 0xC4($v1)
    ctx->pc = 0x2e0710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 196), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0714: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x2e0714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
    // 0x2e0718: 0xa06000c5  sb          $zero, 0xC5($v1)
    ctx->pc = 0x2e0718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 197), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e071c: 0xaca00058  sw          $zero, 0x58($a1)
    ctx->pc = 0x2e071cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
    // 0x2e0720: 0xa06000c6  sb          $zero, 0xC6($v1)
    ctx->pc = 0x2e0720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 198), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0724: 0xaca0005c  sw          $zero, 0x5C($a1)
    ctx->pc = 0x2e0724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
    // 0x2e0728: 0xa06000c7  sb          $zero, 0xC7($v1)
    ctx->pc = 0x2e0728u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 199), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e072c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2E072Cu;
    {
        const bool branch_taken_0x2e072c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E072Cu;
        // 0x2e0730: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e072c) {
            ctx->pc = 0x2E06E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e06e0;
        }
    }
    ctx->pc = 0x2E0734u;
    // 0x2e0734: 0x2cc10020  sltiu       $at, $a2, 0x20
    ctx->pc = 0x2e0734u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2e0738: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2E0738u;
    {
        const bool branch_taken_0x2e0738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0738u;
        // 0x2e073c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0738) {
            ctx->pc = 0x2E0768u;
            goto label_2e0768;
        }
    }
    ctx->pc = 0x2E0740u;
    // 0x2e0740: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x2e0740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e0744: 0x0  nop
    ctx->pc = 0x2e0744u;
    // NOP
label_2e0748:
    // 0x2e0748: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x2e0748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x2e074c: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x2e074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2e0750: 0xa04000c0  sb          $zero, 0xC0($v0)
    ctx->pc = 0x2e0750u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 192), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0754: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e0754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e0758: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x2e0758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2e075c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E075Cu;
    {
        const bool branch_taken_0x2e075c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E075Cu;
        // 0x2e0760: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e075c) {
            ctx->pc = 0x2E0748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0748;
        }
    }
    ctx->pc = 0x2E0764u;
    // 0x2e0764: 0x0  nop
    ctx->pc = 0x2e0764u;
    // NOP
label_2e0768:
    // 0x2e0768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e076c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e076cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e0770:
    // 0x2e0770: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x2e0770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2e0774: 0xa0800180  sb          $zero, 0x180($a0)
    ctx->pc = 0x2e0774u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 384), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0778: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2e0778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2e077c: 0xa06000e0  sb          $zero, 0xE0($v1)
    ctx->pc = 0x2e077cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 224), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0780: 0x2ca20018  sltiu       $v0, $a1, 0x18
    ctx->pc = 0x2e0780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x2e0784: 0xa0600120  sb          $zero, 0x120($v1)
    ctx->pc = 0x2e0784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 288), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0788: 0xa08001a0  sb          $zero, 0x1A0($a0)
    ctx->pc = 0x2e0788u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 416), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e078c: 0xa06000e1  sb          $zero, 0xE1($v1)
    ctx->pc = 0x2e078cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 225), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0790: 0xa0600121  sb          $zero, 0x121($v1)
    ctx->pc = 0x2e0790u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 289), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0794: 0xa08001c0  sb          $zero, 0x1C0($a0)
    ctx->pc = 0x2e0794u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 448), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0798: 0xa06000e2  sb          $zero, 0xE2($v1)
    ctx->pc = 0x2e0798u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 226), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e079c: 0xa0600122  sb          $zero, 0x122($v1)
    ctx->pc = 0x2e079cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 290), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e07a0: 0xa08001e0  sb          $zero, 0x1E0($a0)
    ctx->pc = 0x2e07a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 480), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e07a4: 0xa06000e3  sb          $zero, 0xE3($v1)
    ctx->pc = 0x2e07a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 227), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e07a8: 0xa0600123  sb          $zero, 0x123($v1)
    ctx->pc = 0x2e07a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 291), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e07ac: 0xa0800200  sb          $zero, 0x200($a0)
    ctx->pc = 0x2e07acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 512), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e07b0: 0xa06000e4  sb          $zero, 0xE4($v1)
    ctx->pc = 0x2e07b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e07b4: 0xa0600124  sb          $zero, 0x124($v1)
    ctx->pc = 0x2e07b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 292), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e07b8: 0xa0800220  sb          $zero, 0x220($a0)
    ctx->pc = 0x2e07b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e07bc: 0xa06000e5  sb          $zero, 0xE5($v1)
    ctx->pc = 0x2e07bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 229), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e07c0: 0xa0600125  sb          $zero, 0x125($v1)
    ctx->pc = 0x2e07c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 293), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e07c4: 0xa0800240  sb          $zero, 0x240($a0)
    ctx->pc = 0x2e07c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 576), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e07c8: 0xa06000e6  sb          $zero, 0xE6($v1)
    ctx->pc = 0x2e07c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 230), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e07cc: 0xa0600126  sb          $zero, 0x126($v1)
    ctx->pc = 0x2e07ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 294), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e07d0: 0xa0800260  sb          $zero, 0x260($a0)
    ctx->pc = 0x2e07d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 608), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e07d4: 0xa06000e7  sb          $zero, 0xE7($v1)
    ctx->pc = 0x2e07d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 231), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e07d8: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x2e07d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x2e07dc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2E07DCu;
    {
        const bool branch_taken_0x2e07dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E07E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E07DCu;
        // 0x2e07e0: 0xa0600127  sb          $zero, 0x127($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 295), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e07dc) {
            ctx->pc = 0x2E0770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0770;
        }
    }
    ctx->pc = 0x2E07E4u;
    // 0x2e07e4: 0x2ca10020  sltiu       $at, $a1, 0x20
    ctx->pc = 0x2e07e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2e07e8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2E07E8u;
    {
        const bool branch_taken_0x2e07e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E07ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E07E8u;
        // 0x2e07ec: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e07e8) {
            ctx->pc = 0x2E0818u;
            goto label_2e0818;
        }
    }
    ctx->pc = 0x2E07F0u;
    // 0x2e07f0: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x2e07f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e07f4: 0x0  nop
    ctx->pc = 0x2e07f4u;
    // NOP
label_2e07f8:
    // 0x2e07f8: 0xa0600180  sb          $zero, 0x180($v1)
    ctx->pc = 0x2e07f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 384), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e07fc: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x2e07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2e0800: 0xa04000e0  sb          $zero, 0xE0($v0)
    ctx->pc = 0x2e0800u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 224), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0804: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e0804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e0808: 0xa0400120  sb          $zero, 0x120($v0)
    ctx->pc = 0x2e0808u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 288), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e080c: 0x2ca20020  sltiu       $v0, $a1, 0x20
    ctx->pc = 0x2e080cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2e0810: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E0810u;
    {
        const bool branch_taken_0x2e0810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0810u;
        // 0x2e0814: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0810) {
            ctx->pc = 0x2E07F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e07f8;
        }
    }
    ctx->pc = 0x2E0818u;
label_2e0818:
    // 0x2e0818: 0x3402aaaa  ori         $v0, $zero, 0xAAAA
    ctx->pc = 0x2e0818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43690);
    // 0x2e081c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e081cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e0820: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2e0820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2e0824: 0x3442aaaa  ori         $v0, $v0, 0xAAAA
    ctx->pc = 0x2e0824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43690);
    // 0x2e0828: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x2e0828u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
    // 0x2e082c: 0xfe020618  sd          $v0, 0x618($s0)
    ctx->pc = 0x2e082cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1560), GPR_U64(ctx, 2));
    // 0x2e0830: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x2e0830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x2e0834: 0xfe000610  sd          $zero, 0x610($s0)
    ctx->pc = 0x2e0834u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1552), GPR_U64(ctx, 0));
    // 0x2e0838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e083c: 0x8f878ab0  lw          $a3, -0x7550($gp)
    ctx->pc = 0x2e083cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e0840: 0x2484a790  addiu       $a0, $a0, -0x5870
    ctx->pc = 0x2e0840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944656));
    // 0x2e0844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e0844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0848: 0xa4e00604  sh          $zero, 0x604($a3)
    ctx->pc = 0x2e0848u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 1540), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e084c: 0x8f878ab0  lw          $a3, -0x7550($gp)
    ctx->pc = 0x2e084cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e0850: 0xace0003c  sw          $zero, 0x3C($a3)
    ctx->pc = 0x2e0850u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 0));
    // 0x2e0854: 0x8f878ab0  lw          $a3, -0x7550($gp)
    ctx->pc = 0x2e0854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e0858: 0xa4e00608  sh          $zero, 0x608($a3)
    ctx->pc = 0x2e0858u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 1544), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e085c: 0x8f878ab0  lw          $a3, -0x7550($gp)
    ctx->pc = 0x2e085cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e0860: 0xace006b4  sw          $zero, 0x6B4($a3)
    ctx->pc = 0x2e0860u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1716), GPR_U32(ctx, 0));
    // 0x2e0864: 0xae000630  sw          $zero, 0x630($s0)
    ctx->pc = 0x2e0864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
    // 0x2e0868: 0xae000634  sw          $zero, 0x634($s0)
    ctx->pc = 0x2e0868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1588), GPR_U32(ctx, 0));
    // 0x2e086c: 0xae000638  sw          $zero, 0x638($s0)
    ctx->pc = 0x2e086cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1592), GPR_U32(ctx, 0));
    // 0x2e0870: 0xae00063c  sw          $zero, 0x63C($s0)
    ctx->pc = 0x2e0870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1596), GPR_U32(ctx, 0));
    // 0x2e0874: 0xae060640  sw          $a2, 0x640($s0)
    ctx->pc = 0x2e0874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1600), GPR_U32(ctx, 6));
    // 0x2e0878: 0xae030644  sw          $v1, 0x644($s0)
    ctx->pc = 0x2e0878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1604), GPR_U32(ctx, 3));
    // 0x2e087c: 0xa2000648  sb          $zero, 0x648($s0)
    ctx->pc = 0x2e087cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1608), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0880: 0xa2020649  sb          $v0, 0x649($s0)
    ctx->pc = 0x2e0880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1609), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e0884: 0xa200064a  sb          $zero, 0x64A($s0)
    ctx->pc = 0x2e0884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1610), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0888: 0xae000650  sw          $zero, 0x650($s0)
    ctx->pc = 0x2e0888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 0));
    // 0x2e088c: 0xae000654  sw          $zero, 0x654($s0)
    ctx->pc = 0x2e088cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1620), GPR_U32(ctx, 0));
    // 0x2e0890: 0xae000658  sw          $zero, 0x658($s0)
    ctx->pc = 0x2e0890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 0));
    // 0x2e0894: 0xae00065c  sw          $zero, 0x65C($s0)
    ctx->pc = 0x2e0894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1628), GPR_U32(ctx, 0));
    // 0x2e0898: 0xae060660  sw          $a2, 0x660($s0)
    ctx->pc = 0x2e0898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 6));
    // 0x2e089c: 0xae030664  sw          $v1, 0x664($s0)
    ctx->pc = 0x2e089cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 3));
    // 0x2e08a0: 0xa2000668  sb          $zero, 0x668($s0)
    ctx->pc = 0x2e08a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1640), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e08a4: 0xa2020669  sb          $v0, 0x669($s0)
    ctx->pc = 0x2e08a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1641), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e08a8: 0xa200066a  sb          $zero, 0x66A($s0)
    ctx->pc = 0x2e08a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1642), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e08ac: 0xae000670  sw          $zero, 0x670($s0)
    ctx->pc = 0x2e08acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1648), GPR_U32(ctx, 0));
    // 0x2e08b0: 0xae000674  sw          $zero, 0x674($s0)
    ctx->pc = 0x2e08b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1652), GPR_U32(ctx, 0));
    // 0x2e08b4: 0xae000678  sw          $zero, 0x678($s0)
    ctx->pc = 0x2e08b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1656), GPR_U32(ctx, 0));
    // 0x2e08b8: 0xae00067c  sw          $zero, 0x67C($s0)
    ctx->pc = 0x2e08b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1660), GPR_U32(ctx, 0));
    // 0x2e08bc: 0xae060680  sw          $a2, 0x680($s0)
    ctx->pc = 0x2e08bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 6));
    // 0x2e08c0: 0xae030684  sw          $v1, 0x684($s0)
    ctx->pc = 0x2e08c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1668), GPR_U32(ctx, 3));
    // 0x2e08c4: 0xa2000688  sb          $zero, 0x688($s0)
    ctx->pc = 0x2e08c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1672), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e08c8: 0xa2020689  sb          $v0, 0x689($s0)
    ctx->pc = 0x2e08c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1673), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e08cc: 0xa200068a  sb          $zero, 0x68A($s0)
    ctx->pc = 0x2e08ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1674), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e08d0: 0xae000690  sw          $zero, 0x690($s0)
    ctx->pc = 0x2e08d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1680), GPR_U32(ctx, 0));
    // 0x2e08d4: 0xae000694  sw          $zero, 0x694($s0)
    ctx->pc = 0x2e08d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1684), GPR_U32(ctx, 0));
    // 0x2e08d8: 0xae000698  sw          $zero, 0x698($s0)
    ctx->pc = 0x2e08d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
    // 0x2e08dc: 0xae00069c  sw          $zero, 0x69C($s0)
    ctx->pc = 0x2e08dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1692), GPR_U32(ctx, 0));
    // 0x2e08e0: 0xae0606a0  sw          $a2, 0x6A0($s0)
    ctx->pc = 0x2e08e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1696), GPR_U32(ctx, 6));
    // 0x2e08e4: 0xae0306a4  sw          $v1, 0x6A4($s0)
    ctx->pc = 0x2e08e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1700), GPR_U32(ctx, 3));
    // 0x2e08e8: 0xa20006a8  sb          $zero, 0x6A8($s0)
    ctx->pc = 0x2e08e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1704), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e08ec: 0xa20206a9  sb          $v0, 0x6A9($s0)
    ctx->pc = 0x2e08ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1705), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e08f0: 0xa20006aa  sb          $zero, 0x6AA($s0)
    ctx->pc = 0x2e08f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1706), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e08f4: 0xa20006b0  sb          $zero, 0x6B0($s0)
    ctx->pc = 0x2e08f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1712), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e08f8: 0xa20206b1  sb          $v0, 0x6B1($s0)
    ctx->pc = 0x2e08f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1713), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e08fc: 0xc07cc04  jal         func_1F3010
    ctx->pc = 0x2E08FCu;
    SET_GPR_U32(ctx, 31, 0x2E0904u);
    ctx->pc = 0x2E0900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E08FCu;
    // 0x2e0900: 0xa20006b2  sb          $zero, 0x6B2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1714), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3010u, 0x2E08FCu, 0x2E0904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0904u;
label_2e0904:
    // 0x2e0904: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2e0904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2e0908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e090c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e090cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0910: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0910u;
        // 0x2e0914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0918u;
}

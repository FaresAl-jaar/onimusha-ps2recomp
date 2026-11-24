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

// Function: sub_002D8230
// Address: 0x2d8230 - 0x2d85bc
void sub_002D8230_0x2d8230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8230_0x2d8230");
#endif

    switch (ctx->pc) {
        case 0x2d82b0u: goto label_2d82b0;
        case 0x2d8404u: goto label_2d8404;
        case 0x2d8440u: goto label_2d8440;
        case 0x2d8534u: goto label_2d8534;
        case 0x2d857cu: goto label_2d857c;
        case 0x2d8584u: goto label_2d8584;
        default: break;
    }

    ctx->pc = 0x2d8230u;

    // 0x2d8230: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d8230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d8234: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d8234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d8238: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d8238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2d823c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d823cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d8240: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d8240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d8244: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d8244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d8248: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2d8248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d824c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2d824cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d8250: 0x146000d3  bnez        $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x2D8250u;
    {
        const bool branch_taken_0x2d8250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8250u;
        // 0x2d8254: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8250) {
            ctx->pc = 0x2D85A0u;
            goto label_2d85a0;
        }
    }
    ctx->pc = 0x2D8258u;
    // 0x2d8258: 0x30a30020  andi        $v1, $a1, 0x20
    ctx->pc = 0x2d8258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x2d825c: 0x146000d0  bnez        $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x2D825Cu;
    {
        const bool branch_taken_0x2d825c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D825Cu;
        // 0x2d8260: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d825c) {
            ctx->pc = 0x2D85A0u;
            goto label_2d85a0;
        }
    }
    ctx->pc = 0x2D8264u;
    // 0x2d8264: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2d8264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x2d8268: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x2d8268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2d826c: 0x146000cc  bnez        $v1, . + 4 + (0xCC << 2)
    ctx->pc = 0x2D826Cu;
    {
        const bool branch_taken_0x2d826c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d826c) {
            ctx->pc = 0x2D85A0u;
            goto label_2d85a0;
        }
    }
    ctx->pc = 0x2D8274u;
    // 0x2d8274: 0x8e0301f0  lw          $v1, 0x1F0($s0)
    ctx->pc = 0x2d8274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x2d8278: 0x106000c9  beqz        $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x2D8278u;
    {
        const bool branch_taken_0x2d8278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8278u;
        // 0x2d827c: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8278) {
            ctx->pc = 0x2D85A0u;
            goto label_2d85a0;
        }
    }
    ctx->pc = 0x2D8280u;
    // 0x2d8280: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x2d8280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x2d8284: 0x842564b4  lh          $a1, 0x64B4($at)
    ctx->pc = 0x2d8284u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25780)));
    // 0x2d8288: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d8288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d828c: 0x842364b8  lh          $v1, 0x64B8($at)
    ctx->pc = 0x2d828cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E64B8u));
    // 0x2d8290: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d8290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d8294: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d8294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d8298: 0x843264b6  lh          $s2, 0x64B6($at)
    ctx->pc = 0x2d8298u;
    SET_GPR_S32(ctx, 18, (int16_t)FAST_READ16(0x4E64B6u));
    // 0x2d829c: 0x39c3c  dsll32      $s3, $v1, 16
    ctx->pc = 0x2d829cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d82a0: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2D82A0u;
    {
        const bool branch_taken_0x2d82a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D82A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82A0u;
        // 0x2d82a4: 0x139c3f  dsra32      $s3, $s3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82a0) {
            ctx->pc = 0x2D8408u;
            goto label_2d8408;
        }
    }
    ctx->pc = 0x2D82A8u;
    // 0x2d82a8: 0xc0b446c  jal         func_2D11B0
    ctx->pc = 0x2D82A8u;
    SET_GPR_U32(ctx, 31, 0x2D82B0u);
    ctx->pc = 0x2D82ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D82A8u;
    // 0x2d82ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D11B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D11B0u, 0x2D82A8u, 0x2D82B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D82B0u;
label_2d82b0:
    // 0x2d82b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D82B0u;
    {
        const bool branch_taken_0x2d82b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d82b0) {
            ctx->pc = 0x2D82C0u;
            goto label_2d82c0;
        }
    }
    ctx->pc = 0x2D82B8u;
    // 0x2d82b8: 0x905129d0  lbu         $s1, 0x29D0($v0)
    ctx->pc = 0x2d82b8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10704)));
    // 0x2d82bc: 0x0  nop
    ctx->pc = 0x2d82bcu;
    // NOP
label_2d82c0:
    // 0x2d82c0: 0x920301f9  lbu         $v1, 0x1F9($s0)
    ctx->pc = 0x2d82c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 505)));
    // 0x2d82c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d82c8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D82C8u;
    {
        const bool branch_taken_0x2d82c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D82CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82C8u;
        // 0x2d82cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82c8) {
            ctx->pc = 0x2D8310u;
            goto label_2d8310;
        }
    }
    ctx->pc = 0x2D82D0u;
    // 0x2d82d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d82d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d82d4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D82D4u;
    {
        const bool branch_taken_0x2d82d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d82d4) {
            ctx->pc = 0x2D8308u;
            goto label_2d8308;
        }
    }
    ctx->pc = 0x2D82DCu;
    // 0x2d82dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d82e0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D82E0u;
    {
        const bool branch_taken_0x2d82e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d82e0) {
            ctx->pc = 0x2D8300u;
            goto label_2d8300;
        }
    }
    ctx->pc = 0x2D82E8u;
    // 0x2d82e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D82E8u;
    {
        const bool branch_taken_0x2d82e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d82e8) {
            ctx->pc = 0x2D82F8u;
            goto label_2d82f8;
        }
    }
    ctx->pc = 0x2D82F0u;
    // 0x2d82f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D82F0u;
    {
        const bool branch_taken_0x2d82f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d82f0) {
            ctx->pc = 0x2D8318u;
            goto label_2d8318;
        }
    }
    ctx->pc = 0x2D82F8u;
label_2d82f8:
    // 0x2d82f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D82F8u;
    {
        const bool branch_taken_0x2d82f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d82f8) {
            ctx->pc = 0x2D8318u;
            goto label_2d8318;
        }
    }
    ctx->pc = 0x2D8300u;
label_2d8300:
    // 0x2d8300: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8300u;
    {
        const bool branch_taken_0x2d8300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8300u;
        // 0x2d8304: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8300) {
            ctx->pc = 0x2D8318u;
            goto label_2d8318;
        }
    }
    ctx->pc = 0x2D8308u;
label_2d8308:
    // 0x2d8308: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8308u;
    {
        const bool branch_taken_0x2d8308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8308u;
        // 0x2d830c: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8308) {
            ctx->pc = 0x2D8318u;
            goto label_2d8318;
        }
    }
    ctx->pc = 0x2D8310u;
label_2d8310:
    // 0x2d8310: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x2d8310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x2d8314: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2d8314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d8318:
    // 0x2d8318: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d8318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d831c: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x2d831cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x2d8320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d8320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8324: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8324u;
    {
        const bool branch_taken_0x2d8324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d8324) {
            ctx->pc = 0x2D8338u;
            goto label_2d8338;
        }
    }
    ctx->pc = 0x2D832Cu;
    // 0x2d832c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D832Cu;
    {
        const bool branch_taken_0x2d832c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d832c) {
            ctx->pc = 0x2D8358u;
            goto label_2d8358;
        }
    }
    ctx->pc = 0x2D8334u;
    // 0x2d8334: 0x0  nop
    ctx->pc = 0x2d8334u;
    // NOP
label_2d8338:
    // 0x2d8338: 0x860301fa  lh          $v1, 0x1FA($s0)
    ctx->pc = 0x2d8338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 506)));
    // 0x2d833c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D833Cu;
    {
        const bool branch_taken_0x2d833c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2D8340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D833Cu;
        // 0x2d8340: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d833c) {
            ctx->pc = 0x2D834Cu;
            goto label_2d834c;
        }
    }
    ctx->pc = 0x2D8344u;
    // 0x2d8344: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x2d8344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x2d8348: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2d8348u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_2d834c:
    // 0x2d834c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2D834Cu;
    {
        const bool branch_taken_0x2d834c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D834Cu;
        // 0x2d8350: 0x304900ff  andi        $t1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d834c) {
            ctx->pc = 0x2D8398u;
            goto label_2d8398;
        }
    }
    ctx->pc = 0x2D8354u;
    // 0x2d8354: 0x0  nop
    ctx->pc = 0x2d8354u;
    // NOP
label_2d8358:
    // 0x2d8358: 0x860301fa  lh          $v1, 0x1FA($s0)
    ctx->pc = 0x2d8358u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 506)));
    // 0x2d835c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2d835cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2d8360: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2d8360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2d8364: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2d8364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d8368: 0x0  nop
    ctx->pc = 0x2d8368u;
    // NOP
    // 0x2d836c: 0x0  nop
    ctx->pc = 0x2d836cu;
    // NOP
    // 0x2d8370: 0x1010  mfhi        $v0
    ctx->pc = 0x2d8370u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2d8374: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2d8374u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2d8378: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d8378u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d837c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d837cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d8380: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x2d8380u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d8384: 0x29210002  slti        $at, $t1, 0x2
    ctx->pc = 0x2d8384u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d8388: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8388u;
    {
        const bool branch_taken_0x2d8388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8388) {
            ctx->pc = 0x2D8398u;
            goto label_2d8398;
        }
    }
    ctx->pc = 0x2D8390u;
    // 0x2d8390: 0x64090002  daddiu      $t1, $zero, 0x2
    ctx->pc = 0x2d8390u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x2d8394: 0x0  nop
    ctx->pc = 0x2d8394u;
    // NOP
label_2d8398:
    // 0x2d8398: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2d8398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d839c: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x2d839cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d83a0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2d83a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2d83a4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2d83a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2d83a8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d83a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d83ac: 0x244279e0  addiu       $v0, $v0, 0x79E0
    ctx->pc = 0x2d83acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31200));
    // 0x2d83b0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2d83b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2d83b4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2d83b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2d83b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d83b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d83bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d83bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d83c0: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x2d83c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d83c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d83c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d83c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2d83c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d83cc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2d83ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x2d83d0: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x2d83d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x2d83d4: 0x842364ba  lh          $v1, 0x64BA($at)
    ctx->pc = 0x2d83d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25786)));
    // 0x2d83d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d83d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d83dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d83dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d83e0: 0x920801f8  lbu         $t0, 0x1F8($s0)
    ctx->pc = 0x2d83e0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x2d83e4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2d83e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d83e8: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x2d83e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2d83ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d83ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d83f0: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x2d83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x2d83f4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2d83f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2d83f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d83f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d83fc: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2D83FCu;
    SET_GPR_U32(ctx, 31, 0x2D8404u);
    ctx->pc = 0x2D8400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D83FCu;
    // 0x2d8400: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2D83FCu, 0x2D8404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8404u;
label_2d8404:
    // 0x2d8404: 0x0  nop
    ctx->pc = 0x2d8404u;
    // NOP
label_2d8408:
    // 0x2d8408: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x2d8408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d840c: 0xa6000036  sh          $zero, 0x36($s0)
    ctx->pc = 0x2d840cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d8410: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d8410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d8414: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x2d8414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2d8418: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2d8418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d841c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2d841cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2d8420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8424: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2d8424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x2d8428: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x2d8428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
    // 0x2d842c: 0x8c23fc90  lw          $v1, -0x370($at)
    ctx->pc = 0x2d842cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81FC90u));
    // 0x2d8430: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2d8430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2d8434: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d8434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d8438: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x2D8438u;
    SET_GPR_U32(ctx, 31, 0x2D8440u);
    ctx->pc = 0x2D843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8438u;
    // 0x2d843c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D48B0u, 0x2D8438u, 0x2D8440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8440u;
label_2d8440:
    // 0x2d8440: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x2d8440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x2d8444: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D8444u;
    {
        const bool branch_taken_0x2d8444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8444) {
            ctx->pc = 0x2D8540u;
            goto label_2d8540;
        }
    }
    ctx->pc = 0x2D844Cu;
    // 0x2d844c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2d844cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8450: 0x3c025030  lui         $v0, 0x5030
    ctx->pc = 0x2d8450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20528 << 16));
    // 0x2d8454: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x2d8454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2d8458: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x2d8458u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x2d845c: 0x3445004c  ori         $a1, $v0, 0x4C
    ctx->pc = 0x2d845cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)76);
    // 0x2d8460: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x2d8460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2d8464: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d8464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d8468: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2d8468u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2d846c: 0x13343c  dsll32      $a2, $s3, 16
    ctx->pc = 0x2d846cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 16));
    // 0x2d8470: 0x344d2000  ori         $t5, $v0, 0x2000
    ctx->pc = 0x2d8470u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2d8474: 0x24830f20  addiu       $v1, $a0, 0xF20
    ctx->pc = 0x2d8474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3872));
    // 0x2d8478: 0x24820f38  addiu       $v0, $a0, 0xF38
    ctx->pc = 0x2d8478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3896));
    // 0x2d847c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d847cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d8480: 0x240c0080  addiu       $t4, $zero, 0x80
    ctx->pc = 0x2d8480u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d8484: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x2d8484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x2d8488: 0x24c40700  addiu       $a0, $a2, 0x700
    ctx->pc = 0x2d8488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1792));
    // 0x2d848c: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x2d848cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x2d8490: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2d8490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2d8494: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x2d8494u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d8498: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x2d8498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x2d849c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2d849cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2d84a0: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x2d84a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x2d84a4: 0x835825  or          $t3, $a0, $v1
    ctx->pc = 0x2d84a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d84a8: 0x825025  or          $t2, $a0, $v0
    ctx->pc = 0x2d84a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2d84ac: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2d84acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2d84b0: 0x3c098001  lui         $t1, 0x8001
    ctx->pc = 0x2d84b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32769 << 16));
    // 0x2d84b4: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x2d84b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x2d84b8: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2d84b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2d84bc: 0x1cd6825  or          $t5, $t6, $t5
    ctx->pc = 0x2d84bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x2d84c0: 0xae2d0004  sw          $t5, 0x4($s1)
    ctx->pc = 0x2d84c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 13));
    // 0x2d84c4: 0xa22c000f  sb          $t4, 0xF($s1)
    ctx->pc = 0x2d84c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 12));
    // 0x2d84c8: 0xae2b0018  sw          $t3, 0x18($s1)
    ctx->pc = 0x2d84c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 11));
    // 0x2d84cc: 0xae27001c  sw          $a3, 0x1C($s1)
    ctx->pc = 0x2d84ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 7));
    // 0x2d84d0: 0x860b01fa  lh          $t3, 0x1FA($s0)
    ctx->pc = 0x2d84d0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 506)));
    // 0x2d84d4: 0xcb5821  addu        $t3, $a2, $t3
    ctx->pc = 0x2d84d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x2d84d8: 0x256b0700  addiu       $t3, $t3, 0x700
    ctx->pc = 0x2d84d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1792));
    // 0x2d84dc: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x2d84dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x2d84e0: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x2d84e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x2d84e4: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x2d84e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x2d84e8: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x2d84e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x2d84ec: 0xae270024  sw          $a3, 0x24($s1)
    ctx->pc = 0x2d84ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 7));
    // 0x2d84f0: 0xae2a0030  sw          $t2, 0x30($s1)
    ctx->pc = 0x2d84f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 10));
    // 0x2d84f4: 0xae270034  sw          $a3, 0x34($s1)
    ctx->pc = 0x2d84f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 7));
    // 0x2d84f8: 0x860301fa  lh          $v1, 0x1FA($s0)
    ctx->pc = 0x2d84f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 506)));
    // 0x2d84fc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2d84fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2d8500: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x2d8500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x2d8504: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2d8504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2d8508: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2d8508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d850c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d850cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d8510: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x2d8510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x2d8514: 0xae27003c  sw          $a3, 0x3C($s1)
    ctx->pc = 0x2d8514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 7));
    // 0x2d8518: 0xae290010  sw          $t1, 0x10($s1)
    ctx->pc = 0x2d8518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 9));
    // 0x2d851c: 0xae280014  sw          $t0, 0x14($s1)
    ctx->pc = 0x2d851cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 8));
    // 0x2d8520: 0xae290028  sw          $t1, 0x28($s1)
    ctx->pc = 0x2d8520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 9));
    // 0x2d8524: 0xae28002c  sw          $t0, 0x2C($s1)
    ctx->pc = 0x2d8524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 8));
    // 0x2d8528: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x2d8528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2d852c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2D852Cu;
    SET_GPR_U32(ctx, 31, 0x2D8534u);
    ctx->pc = 0x2D8530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D852Cu;
    // 0x2d8530: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2D852Cu, 0x2D8534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8534u;
label_2d8534:
    // 0x2d8534: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x2d8534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2d8538: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d8538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d853c: 0x0  nop
    ctx->pc = 0x2d853cu;
    // NOP
label_2d8540:
    // 0x2d8540: 0x920501f9  lbu         $a1, 0x1F9($s0)
    ctx->pc = 0x2d8540u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 505)));
    // 0x2d8544: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2d8544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2d8548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d854c: 0x244264b0  addiu       $v0, $v0, 0x64B0
    ctx->pc = 0x2d854cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25776));
    // 0x2d8550: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2d8550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2d8554: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2d8554u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d8558: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d8558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d855c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2d855cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d8560: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x2d8560u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d8564: 0x84a70006  lh          $a3, 0x6($a1)
    ctx->pc = 0x2d8564u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2d8568: 0x84a80008  lh          $t0, 0x8($a1)
    ctx->pc = 0x2d8568u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d856c: 0x84a9000a  lh          $t1, 0xA($a1)
    ctx->pc = 0x2d856cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2d8570: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x2d8570u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d8574: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D8574u;
    SET_GPR_U32(ctx, 31, 0x2D857Cu);
    ctx->pc = 0x2D8578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8574u;
    // 0x2d8578: 0x240b001a  addiu       $t3, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D8574u, 0x2D857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D857Cu;
label_2d857c:
    // 0x2d857c: 0xc0b5204  jal         func_2D4810
    ctx->pc = 0x2D857Cu;
    SET_GPR_U32(ctx, 31, 0x2D8584u);
    ctx->pc = 0x2D8580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D857Cu;
    // 0x2d8580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4810u, 0x2D857Cu, 0x2D8584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8584u;
label_2d8584:
    // 0x2d8584: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d8584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8588: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2d8588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d858c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d858cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d8590: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2d8590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2d8594: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d8594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d8598: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x2d8598u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x2d859c: 0x0  nop
    ctx->pc = 0x2d859cu;
    // NOP
label_2d85a0:
    // 0x2d85a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d85a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d85a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d85a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d85a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d85a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d85ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d85acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d85b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d85b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d85b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D85B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D85B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85B4u;
        // 0x2d85b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D85B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D85BCu;
}

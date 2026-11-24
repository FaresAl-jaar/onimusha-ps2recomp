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

// Function: sub_00115108
// Address: 0x115108 - 0x115354
void sub_00115108_0x115108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115108_0x115108");
#endif

    switch (ctx->pc) {
        case 0x115150u: goto label_115150;
        case 0x115168u: goto label_115168;
        case 0x115190u: goto label_115190;
        case 0x115280u: goto label_115280;
        case 0x1152a0u: goto label_1152a0;
        case 0x1152ccu: goto label_1152cc;
        case 0x1152dcu: goto label_1152dc;
        case 0x1152e4u: goto label_1152e4;
        case 0x1152f8u: goto label_1152f8;
        case 0x115308u: goto label_115308;
        case 0x115318u: goto label_115318;
        case 0x115320u: goto label_115320;
        default: break;
    }

    ctx->pc = 0x115108u;

    // 0x115108: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x115108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x11510c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x11510cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x115110: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x115110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x115114: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x115114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115118: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x115118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11511c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x11511cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115120: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x115120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x115124: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x115124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115128: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x115128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x11512c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x11512cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x115130: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x115130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x115134: 0x3c1e0069  lui         $fp, 0x69
    ctx->pc = 0x115134u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)105 << 16));
    // 0x115138: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x115138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x11513c: 0x27d3ec80  addiu       $s3, $fp, -0x1380
    ctx->pc = 0x11513cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962304));
    // 0x115140: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x115140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x115144: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x115144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x115148: 0xc044b50  jal         func_112D40
    ctx->pc = 0x115148u;
    SET_GPR_U32(ctx, 31, 0x115150u);
    ctx->pc = 0x11514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115148u;
    // 0x11514c: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x115148u, 0x115150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115150u;
label_115150:
    // 0x115150: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x115150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x115154: 0x8c622b3c  lw          $v0, 0x2B3C($v1)
    ctx->pc = 0x115154u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x115158: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x115158u;
    {
        const bool branch_taken_0x115158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115158) {
            ctx->pc = 0x11515Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115158u;
            // 0x11515c: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11516Cu;
            goto label_11516c;
        }
    }
    ctx->pc = 0x115160u;
    // 0x115160: 0xc044b9a  jal         func_112E68
    ctx->pc = 0x115160u;
    SET_GPR_U32(ctx, 31, 0x115168u);
    ctx->pc = 0x112E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E68u, 0x115160u, 0x115168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115168u;
label_115168:
    // 0x115168: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x115168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_11516c:
    // 0x11516c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11516cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115170: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x115170u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115174: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x115174u;
    {
        const bool branch_taken_0x115174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115174u;
        // 0x115178: 0xa2620050  sb          $v0, 0x50($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115174) {
            ctx->pc = 0x1151B8u;
            goto label_1151b8;
        }
    }
    ctx->pc = 0x11517Cu;
    // 0x11517c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x11517cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x115180: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x115180u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115184: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x115184u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x115188: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x115188u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x11518c: 0x0  nop
    ctx->pc = 0x11518cu;
    // NOP
label_115190:
    // 0x115190: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x115190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x115194: 0x2a220400  slti        $v0, $s1, 0x400
    ctx->pc = 0x115194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x115198: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x115198u;
    {
        const bool branch_taken_0x115198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115198u;
        // 0x11519c: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115198) {
            ctx->pc = 0x1151C8u;
            goto label_1151c8;
        }
    }
    ctx->pc = 0x1151A0u;
    // 0x1151a0: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x1151a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1151a4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1151a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1151a8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1151A8u;
    {
        const bool branch_taken_0x1151a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1151ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151A8u;
        // 0x1151ac: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151a8) {
            ctx->pc = 0x115190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115190;
        }
    }
    ctx->pc = 0x1151B0u;
    // 0x1151b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1151B0u;
    {
        const bool branch_taken_0x1151b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151B0u;
        // 0x1151b4: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151b0) {
            ctx->pc = 0x1151CCu;
            goto label_1151cc;
        }
    }
    ctx->pc = 0x1151B8u;
label_1151b8:
    // 0x1151b8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x1151b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x1151bc: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1151bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1151c0: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x1151c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x1151c4: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x1151c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
label_1151c8:
    // 0x1151c8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1151c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1151cc:
    // 0x1151cc: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1151CCu;
    {
        const bool branch_taken_0x1151cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1151D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151CCu;
        // 0x1151d0: 0x24a32870  addiu       $v1, $a1, 0x2870 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 10352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151cc) {
            ctx->pc = 0x1151DCu;
            goto label_1151dc;
        }
    }
    ctx->pc = 0x1151D4u;
    // 0x1151d4: 0xa260044f  sb          $zero, 0x44F($s3)
    ctx->pc = 0x1151d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1103), (uint8_t)GPR_U32(ctx, 0));
    // 0x1151d8: 0x241103ff  addiu       $s1, $zero, 0x3FF
    ctx->pc = 0x1151d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1151dc:
    // 0x1151dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1151dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1151e0: 0x6a040007  ldl         $a0, 0x7($s0)
    ctx->pc = 0x1151e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1151e4: 0x6e040000  ldr         $a0, 0x0($s0)
    ctx->pc = 0x1151e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1151e8: 0x6a05000f  ldl         $a1, 0xF($s0)
    ctx->pc = 0x1151e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1151ec: 0x6e050008  ldr         $a1, 0x8($s0)
    ctx->pc = 0x1151ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1151f0: 0x6a060017  ldl         $a2, 0x17($s0)
    ctx->pc = 0x1151f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1151f4: 0x6e060010  ldr         $a2, 0x10($s0)
    ctx->pc = 0x1151f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1151f8: 0x6a07001f  ldl         $a3, 0x1F($s0)
    ctx->pc = 0x1151f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1151fc: 0x6e070018  ldr         $a3, 0x18($s0)
    ctx->pc = 0x1151fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x115200: 0xb2640017  sdl         $a0, 0x17($s3)
    ctx->pc = 0x115200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115204: 0xb6640010  sdr         $a0, 0x10($s3)
    ctx->pc = 0x115204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115208: 0xb265001f  sdl         $a1, 0x1F($s3)
    ctx->pc = 0x115208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11520c: 0xb6650018  sdr         $a1, 0x18($s3)
    ctx->pc = 0x11520cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115210: 0xb2660027  sdl         $a2, 0x27($s3)
    ctx->pc = 0x115210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115214: 0xb6660020  sdr         $a2, 0x20($s3)
    ctx->pc = 0x115214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115218: 0xb267002f  sdl         $a3, 0x2F($s3)
    ctx->pc = 0x115218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11521c: 0xb6670028  sdr         $a3, 0x28($s3)
    ctx->pc = 0x11521cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115220: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x115220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x115224: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x115224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x115228: 0x6a05002f  ldl         $a1, 0x2F($s0)
    ctx->pc = 0x115228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x11522c: 0x6e050028  ldr         $a1, 0x28($s0)
    ctx->pc = 0x11522cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x115230: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x115230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x115234: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x115234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x115238: 0x6a07003f  ldl         $a3, 0x3F($s0)
    ctx->pc = 0x115238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11523c: 0x6e070038  ldr         $a3, 0x38($s0)
    ctx->pc = 0x11523cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x115240: 0xb2640037  sdl         $a0, 0x37($s3)
    ctx->pc = 0x115240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115244: 0xb6640030  sdr         $a0, 0x30($s3)
    ctx->pc = 0x115244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115248: 0xb265003f  sdl         $a1, 0x3F($s3)
    ctx->pc = 0x115248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11524c: 0xb6650038  sdr         $a1, 0x38($s3)
    ctx->pc = 0x11524cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115250: 0xb2660047  sdl         $a2, 0x47($s3)
    ctx->pc = 0x115250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115254: 0xb6660040  sdr         $a2, 0x40($s3)
    ctx->pc = 0x115254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115258: 0xb267004f  sdl         $a3, 0x4F($s3)
    ctx->pc = 0x115258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11525c: 0xb6670048  sdr         $a3, 0x48($s3)
    ctx->pc = 0x11525cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115260: 0x26b5f8c0  addiu       $s5, $s5, -0x740
    ctx->pc = 0x115260u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965440));
    // 0x115264: 0xae77000c  sw          $s7, 0xC($s3)
    ctx->pc = 0x115264u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 23));
    // 0x115268: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x115268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11526c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x11526cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x115270: 0x27d0ec80  addiu       $s0, $fp, -0x1380
    ctx->pc = 0x115270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962304));
    // 0x115274: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x115274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x115278: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x115278u;
    SET_GPR_U32(ctx, 31, 0x115280u);
    ctx->pc = 0x11527Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115278u;
    // 0x11527c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x115278u, 0x115280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115280u;
label_115280:
    // 0x115280: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x115280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115288: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11528c: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x11528cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x115290: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x115290u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x115294: 0x24050450  addiu       $a1, $zero, 0x450
    ctx->pc = 0x115294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
    // 0x115298: 0xc04453c  jal         func_1114F0
    ctx->pc = 0x115298u;
    SET_GPR_U32(ctx, 31, 0x1152A0u);
    ctx->pc = 0x11529Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115298u;
    // 0x11529c: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1114F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1114F0u, 0x115298u, 0x1152A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152A0u;
label_1152a0:
    // 0x1152a0: 0x26c40380  addiu       $a0, $s6, 0x380
    ctx->pc = 0x1152a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 896));
    // 0x1152a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1152a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152a8: 0x26280051  addiu       $t0, $s1, 0x51
    ctx->pc = 0x1152a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 81));
    // 0x1152ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1152acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1152b0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1152b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1152b4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1152b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1152b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1152b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152bc: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1152bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152c0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1152c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1152c4: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x1152C4u;
    SET_GPR_U32(ctx, 31, 0x1152CCu);
    ctx->pc = 0x1152C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152C4u;
    // 0x1152c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x1152C4u, 0x1152CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152CCu;
label_1152cc:
    // 0x1152cc: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1152CCu;
    {
        const bool branch_taken_0x1152cc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1152D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152CCu;
        // 0x1152d0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152cc) {
            ctx->pc = 0x1152ECu;
            goto label_1152ec;
        }
    }
    ctx->pc = 0x1152D4u;
    // 0x1152d4: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x1152D4u;
    SET_GPR_U32(ctx, 31, 0x1152DCu);
    ctx->pc = 0x1152D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152D4u;
    // 0x1152d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x1152D4u, 0x1152DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152DCu;
label_1152dc:
    // 0x1152dc: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x1152DCu;
    SET_GPR_U32(ctx, 31, 0x1152E4u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x1152DCu, 0x1152E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152E4u;
label_1152e4:
    // 0x1152e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1152E4u;
    {
        const bool branch_taken_0x1152e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1152E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152E4u;
        // 0x1152e8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152e4) {
            ctx->pc = 0x115324u;
            goto label_115324;
        }
    }
    ctx->pc = 0x1152ECu;
label_1152ec:
    // 0x1152ec: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x1152ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x1152f0: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x1152F0u;
    SET_GPR_U32(ctx, 31, 0x1152F8u);
    ctx->pc = 0x1152F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152F0u;
    // 0x1152f4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x1152F0u, 0x1152F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152F8u;
label_1152f8:
    // 0x1152f8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1152F8u;
    {
        const bool branch_taken_0x1152f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1152f8) {
            ctx->pc = 0x115310u;
            goto label_115310;
        }
    }
    ctx->pc = 0x115300u;
    // 0x115300: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x115300u;
    SET_GPR_U32(ctx, 31, 0x115308u);
    ctx->pc = 0x115304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115300u;
    // 0x115304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x115300u, 0x115308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115308u;
label_115308:
    // 0x115308: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115308u;
    {
        const bool branch_taken_0x115308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115308u;
        // 0x11530c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115308) {
            ctx->pc = 0x115324u;
            goto label_115324;
        }
    }
    ctx->pc = 0x115310u;
label_115310:
    // 0x115310: 0xc043808  jal         func_10E020
    ctx->pc = 0x115310u;
    SET_GPR_U32(ctx, 31, 0x115318u);
    ctx->pc = 0x115314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115310u;
    // 0x115314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x115310u, 0x115318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115318u;
label_115318:
    // 0x115318: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x115318u;
    SET_GPR_U32(ctx, 31, 0x115320u);
    ctx->pc = 0x11531Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115318u;
    // 0x11531c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x115318u, 0x115320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115320u;
label_115320:
    // 0x115320: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x115320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_115324:
    // 0x115324: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x115324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x115328: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x115328u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11532c: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x11532cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x115330: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x115330u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x115334: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x115334u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x115338: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x115338u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11533c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x11533cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115340: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x115340u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115344: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x115344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115348: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x115348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11534c: 0x3e00008  jr          $ra
    ctx->pc = 0x11534Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11534Cu;
        // 0x115350: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11534Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115354u;
}

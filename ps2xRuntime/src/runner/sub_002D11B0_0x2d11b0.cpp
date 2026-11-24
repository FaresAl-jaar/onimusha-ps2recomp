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

// Function: sub_002D11B0
// Address: 0x2d11b0 - 0x2d1290
void sub_002D11B0_0x2d11b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D11B0_0x2d11b0");
#endif

    ctx->pc = 0x2d11b0u;

    // 0x2d11b0: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2d11b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d11b4: 0x30a21000  andi        $v0, $a1, 0x1000
    ctx->pc = 0x2d11b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
    // 0x2d11b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D11B8u;
    {
        const bool branch_taken_0x2d11b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d11b8) {
            ctx->pc = 0x2D11DCu;
            goto label_2d11dc;
        }
    }
    ctx->pc = 0x2D11C0u;
    // 0x2d11c0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d11c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d11c4: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2d11c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2d11c8: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2d11c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2d11cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d11ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d11d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d11d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D11D4u;
    {
        const bool branch_taken_0x2d11d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D11D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D11D4u;
        // 0x2d11d8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d11d4) {
            ctx->pc = 0x2D11F8u;
            goto label_2d11f8;
        }
    }
    ctx->pc = 0x2D11DCu;
label_2d11dc:
    // 0x2d11dc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d11dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d11e0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2d11e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2d11e4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2d11e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2d11e8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2d11e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2d11ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d11ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d11f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d11f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d11f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d11f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d11f8:
    // 0x2d11f8: 0x30a30200  andi        $v1, $a1, 0x200
    ctx->pc = 0x2d11f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x2d11fc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D11FCu;
    {
        const bool branch_taken_0x2d11fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d11fc) {
            ctx->pc = 0x2D1250u;
            goto label_2d1250;
        }
    }
    ctx->pc = 0x2D1204u;
    // 0x2d1204: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D1204u;
    {
        const bool branch_taken_0x2d1204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1204) {
            ctx->pc = 0x2D1248u;
            goto label_2d1248;
        }
    }
    ctx->pc = 0x2D120Cu;
    // 0x2d120c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2d120cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1210: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2d1210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2d1214: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2d1214u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d1218: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1218u;
    {
        const bool branch_taken_0x2d1218 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1218u;
        // 0x2d121c: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1218) {
            ctx->pc = 0x2D1228u;
            goto label_2d1228;
        }
    }
    ctx->pc = 0x2D1220u;
    // 0x2d1220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d1220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1224: 0x0  nop
    ctx->pc = 0x2d1224u;
    // NOP
label_2d1228:
    // 0x2d1228: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1228u;
    {
        const bool branch_taken_0x2d1228 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1228) {
            ctx->pc = 0x2D1248u;
            goto label_2d1248;
        }
    }
    ctx->pc = 0x2D1230u;
    // 0x2d1230: 0x90830017  lbu         $v1, 0x17($a0)
    ctx->pc = 0x2d1230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
    // 0x2d1234: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x2d1234u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2d1238: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1238u;
    {
        const bool branch_taken_0x2d1238 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d1238) {
            ctx->pc = 0x2D1248u;
            goto label_2d1248;
        }
    }
    ctx->pc = 0x2D1240u;
    // 0x2d1240: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D1240u;
    {
        const bool branch_taken_0x2d1240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1240) {
            ctx->pc = 0x2D1288u;
            goto label_2d1288;
        }
    }
    ctx->pc = 0x2D1248u;
label_2d1248:
    // 0x2d1248: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D1248u;
    {
        const bool branch_taken_0x2d1248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1248u;
        // 0x2d124c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1248) {
            ctx->pc = 0x2D1288u;
            goto label_2d1288;
        }
    }
    ctx->pc = 0x2D1250u;
label_2d1250:
    // 0x2d1250: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D1250u;
    {
        const bool branch_taken_0x2d1250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1250u;
        // 0x2d1254: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1250) {
            ctx->pc = 0x2D1280u;
            goto label_2d1280;
        }
    }
    ctx->pc = 0x2D1258u;
    // 0x2d1258: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2d1258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d125c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2d125cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2d1260: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2d1260u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d1264: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1264u;
    {
        const bool branch_taken_0x2d1264 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1264u;
        // 0x2d1268: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1264) {
            ctx->pc = 0x2D1270u;
            goto label_2d1270;
        }
    }
    ctx->pc = 0x2D126Cu;
    // 0x2d126c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d126cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1270:
    // 0x2d1270: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1270u;
    {
        const bool branch_taken_0x2d1270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1270) {
            ctx->pc = 0x2D1280u;
            goto label_2d1280;
        }
    }
    ctx->pc = 0x2D1278u;
    // 0x2d1278: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x2d1278u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2d127c: 0x0  nop
    ctx->pc = 0x2d127cu;
    // NOP
label_2d1280:
    // 0x2d1280: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x2d1280u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2d1284: 0x0  nop
    ctx->pc = 0x2d1284u;
    // NOP
label_2d1288:
    // 0x2d1288: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1290u;
}
